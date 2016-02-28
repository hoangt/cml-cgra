/*
 * Mapper.cpp
 *
 *  Created on: Aug 10, 2012
     *      Author: mahdi
 *      The explanation and original code for finding a clique can be found at
 *      http://www.dharwadker.org/clique/
 */

#include "Mapper.h"

Mapper::Mapper(int NoReg,vector<MappingPair*>* mapPairsVar,int XDim,int YDim)
{
    NoRegisters = NoReg;
    this->mapPairs = mapPairsVar;
    this->XDim = XDim;
    this->YDim = YDim;
    
    mem_ops_perPE = new int[XDim*YDim];
    mem_ops_perROW_SharedRF = new int[XDim];
    InitializeMemoryAssertHashTable();

}

void Mapper:: InitializeMemoryAssertHashTable()
{
     isMappingPairMemoryAssert = new bool[(*mapPairs).size()] ;

     for(int i =0;i<(*mapPairs).size();++i)
     {
          MappingPair mp = getMappingPair(i);
          isMappingPairMemoryAssert[i] = mp.is_Address_Assert();          
     }
}


Mapper::~Mapper()
{
    delete [] mem_ops_perPE;
    delete [] mem_ops_perROW_SharedRF;
    delete [] isMappingPairMemoryAssert;
}

int Mapper::Uncovered_size(vector<int> cover)
{
    int count = 0;
    for (int i = 0; i < (int) cover.size(); i++)
        if (cover[i] == 0)
            count++;
    return count;
}

MappingPair Mapper::getMappingPair(int index)
{
    return *((*mapPairs)[index]);
}

//this is the function that checks for the RF constraint, we need to make this
//as generic as possible. This function should compute the result depending on
//the type of RF we have
bool Mapper::enoughNonRotatingRegisters(int index)
{
    bool result = true;

    //get the mapping pair object corresponding to this vertex
    MappingPair mp = getMappingPair(index);

    if(isMappingPairMemoryAssert[index])
    {
      int numberOfMemOps = num_mem_ops(index);
      
      if(cgra_info.FixedRF || cgra_info.FlexibleRF)
          if(numberOfMemOps >= NoRegisters)
            result = false;
      if(cgra_info.SharedRF)
          if(numberOfMemOps >=cgra_info.SharedRF_Size )
            result = false;
    }
   
    if(!result)
       RegisterFileFailures++;

    return result;
}

int Mapper::num_mem_ops(int index)
{
    int result = 0;
    //get the mapping pair object corresponding to this vertex
    MappingPair mp = getMappingPair(index);

    //get the PE indices
    REGI_PE* pe = mp.getPE();
    int i = pe->getIndexI();
    int j = pe->getIndexJ();

    int cgranumber = i*YDim + j;
  
    if(cgra_info.FixedRF || cgra_info.FlexibleRF)
        result = mem_ops_perPE[cgranumber];
   
    if(cgra_info.SharedRF)
        result = mem_ops_perROW_SharedRF[i];
    
    return result;
}

int Mapper::num_mem_ops_FlexibleRF(int index)
{
    int result = 0;
    if(cgra_info.FlexibleRF)
        result = num_mem_ops(index);

    return result;
}


//release Non Rotating Regs based on the selection RF
void Mapper::releaseNonRotatingRegister(int index)
{
      //get the mapping pair object corresponding to the node pointed by index
      MappingPair mp = getMappingPair(index);

      if(isMappingPairMemoryAssert[index])
      {
        //get the PE indices
        REGI_PE* pe = mp.getPE();
        int i = pe->getIndexI();
        int j = pe->getIndexJ();
        
        int cgranumber = i*YDim + j;
        if(cgra_info.FixedRF || cgra_info.FlexibleRF)
            --mem_ops_perPE[cgranumber];
        
        if(cgra_info.SharedRF)
            --mem_ops_perROW_SharedRF[i];
      }
}

int Mapper::getNonRotatingRegisterCount(int index)
{
      MappingPair mp = getMappingPair(index);
      int result;

      //get the PE indices
      REGI_PE* pe = mp.getPE();
      int i = pe->getIndexI();
      int j = pe->getIndexJ();
      
      int cgranumber = i*YDim + j;
      if(cgra_info.FixedRF || cgra_info.FlexibleRF)
          result = mem_ops_perPE[cgranumber];
      
      if(cgra_info.SharedRF)
          result = mem_ops_perROW_SharedRF[i];

      return result;
}

//occupy Non Rotating Regs based on the selection RF
void Mapper::occupyNonRotatingRegister(int index)
{
      //get the mapping pair object corresponding to the node pointed by index
      MappingPair mp = getMappingPair(index);

      if(isMappingPairMemoryAssert[index])
      {
        //get the PE indices
        REGI_PE* pe = mp.getPE();
        int i = pe->getIndexI();
        int j = pe->getIndexJ();
        
        int cgranumber = i*YDim + j;
        if(cgra_info.FixedRF || cgra_info.FlexibleRF)
            ++mem_ops_perPE[cgranumber];
        
        if(cgra_info.SharedRF)
            ++mem_ops_perROW_SharedRF[i];
      }
}

//reset Non Rotating Regs based on the selection RF
void Mapper::resetMemOpsTracker(vector<int> cover)
{
/*
    if a vertex is in cover and if its an address assert operation, get its PE index and increment the number of address assert operations mapped to that pe
*/
    //clear the array
    memset(mem_ops_perPE,0,(XDim*YDim)*sizeof(int));
    memset(mem_ops_perROW_SharedRF,0,XDim*sizeof(int));
    //initialize it based on the current cover
    for(int i=0;i< (int)cover.size();++i)
    {
        if(cover[i]>0)
        {
            occupyNonRotatingRegister(i);
        }

    }

}


bool Mapper::removableWithoutRegisterFile(vector<int> &NonNeighbor, vector<int> &cover, char *table, int tableSize, int nodeIndex)
{

    for (int i = 0; i < (int) NonNeighbor.size(); i++)
    {
        if (cover[NonNeighbor[i]] > 0)
        {
            return false;
        }

    }
    return true;

}

int Mapper::max_removableWithoutRegisterFile(vector<vector<int> > &NonNeighbors, vector<int> &cover, char *table, int tableSize)
{
    int r = -1, max = -1;
    for (int i = 0; i < (int) cover.size(); i++)
    {
        if (cover[i] == 0 && removableWithoutRegisterFile(NonNeighbors[i], cover, table, tableSize, i) == true)
        {
            vector<int> temp_cover = cover;
            temp_cover[i] = 1;
            int sum = 0;
            for (int j = 0; j < (int) temp_cover.size(); j++)
                if (temp_cover[j] == 0 && removableWithoutRegisterFile(NonNeighbors[j], temp_cover, table, tableSize, j) == true)
                    sum++;
            if (sum > max)
            {
                if (r == -1)
                {
                    max = sum;
                    r = i;
                }
                else if (NonNeighbors[r].size() >= NonNeighbors[i].size())
                {
                    max = sum;
                    r = i;
                }
            }
        }
    }
    return r;
}
vector<int> Mapper::procedure_1WithoutRegisterFile(vector<vector<int> > &NonNeighbors, vector<int> &cover, char *table, int tableSize)
{
    vector<int> temp_cover = cover;
    int r = 0;
    while (r != -1)
    {
        r = max_removableWithoutRegisterFile(NonNeighbors, temp_cover, table, tableSize);
        if (r != -1)
        {
            temp_cover[r] = 1;

        }
    }
    return temp_cover;
}
vector<int> Mapper::procedure_2WithoutRegisterFile(vector<vector<int> > &NonNeighbors, vector<int> &cover, int k, char *table, int tableSize)
{
    int count = 0;
    vector<int> temp_cover = cover;
    vector<int> next_cover;

    for (int i = 0; i < (int) temp_cover.size(); i++)
    {
        if (temp_cover[i] == 0)
        {
            int sum = 0, index;
            for (int j = 0; j < (int) NonNeighbors[i].size(); j++)
            {
                if (temp_cover[NonNeighbors[i][j]] > 0)
                {
                    index = j;
                    sum++;
                }
            }
            if (sum == 1 && cover[NonNeighbors[i][index]] > 0)
            {

                temp_cover[NonNeighbors[i][index]] = 0;
                temp_cover[i] = 1;
                temp_cover = procedure_1WithoutRegisterFile(NonNeighbors, temp_cover, table, tableSize);
                count++;
            }
            if (count > k)
                break;
        }
    }
    return temp_cover;
}

vector<vector<Cover_Pair*> > Mapper::MapWithoutRegisterFile(char *table, int tableSize, int cliqueSize)
{

    int best = 0;
    int CountNoImprove = 0;

    int n, i, j, k, K, p, q, r, s, min, counter = 0;
    n = tableSize;
    vector<vector<int> > graph;
    for (i = 0; i < tableSize; i++)
    {
        vector<int> row;
        for (j = 0; j < tableSize; j++)
        {
            row.push_back(table[i * tableSize + j]);
        }
        graph.push_back(row);
    }
    //Find NonNeighbors
    vector<vector<int> > NonNeighbors;
    for (i = 0; i < (int) graph.size(); i++)
    {
        vector<int> NonNeighbor;
        for (j = 0; j < (int) graph[i].size(); j++)
            if (graph[i][j] == 0)
                NonNeighbor.push_back(j);
        NonNeighbors.push_back(NonNeighbor);
    }
    cout << "Graph has n = " << n << " vertices." << endl;
    //Read maximum size of Clique wanted
    cout << "Find a Clique of size at least k = " << cliqueSize << endl;
    //cin >> K;
    K = cliqueSize;
    k = n - K;
    //Find Cliques
    bool found = false;

    min = n + 1;
    vector<vector<int> > covers;

    vector<int> allcover;
    for (i = 0; i < (int) graph.size(); i++)
        allcover.push_back(0);
    for (i = 0; i < (int) allcover.size(); i++)
    {
        if (found)
            break;
        if (CountNoImprove > MAPPING_POLICY.CLIQUE_ATTEMPTS)
        {
            break;
        }
        counter++;
        //cout << counter << ". ";
        //outfile << counter << ". ";
        //vector<int> currentcover;
        vector<int> cover = allcover;
        cover[i] = 1;

        cover = procedure_1WithoutRegisterFile(NonNeighbors, cover, table, tableSize);
        s = Uncovered_size(cover);
        cout << "Attempt total number " << counter << ", Clique Size: " << n - s << endl;

        if (s < min)
        {
            min = s;
            CountNoImprove = 0;
        }
        else
        {
            CountNoImprove++;
        }

        if (s <= k)
        {
            //outfile << "Clique (" << n - s << "): ";

            //outfile << endl;

            covers.push_back(cover);
            found = true;
            break;
        }

        for (j = 0; j < k; j++)
            cover = procedure_2WithoutRegisterFile(NonNeighbors, cover, j, table, tableSize);
        s = Uncovered_size(cover);
        if (s < min)
        {
            min = s;
            CountNoImprove = 0;
        }
        else
        {
            CountNoImprove++;
        }
        //outfile << "Clique (" << n - s << "): ";

        //outfile << endl;

        cout << "Attempt total number " << counter << ", Clique Size: " << n - s << endl;
        covers.push_back(cover);
        if (s <= k)
        {
            found = true;
            break;
        }
    }
    CountNoImprove = 0;
    //Pairwise Intersections
    for (p = 0; p < (int) covers.size(); p++)
    {
        if (found)
            break;
        if (CountNoImprove > MAPPING_POLICY.CLIQUE_ATTEMPTS)
        {
            break;
        }
        for (q = p + 1; q < (int) covers.size(); q++)
        {
            if (found)
                break;
            if (CountNoImprove > MAPPING_POLICY.CLIQUE_ATTEMPTS)
            {
                break;
            }
            counter++;

            vector<int> cover = allcover;
            for (r = 0; r < (int) cover.size(); r++)
                if ((covers[p][r] > 0) && (covers[q][r] > 0))
                {
                    cover[r] = 1;
                }

            cover = procedure_1WithoutRegisterFile(NonNeighbors, cover, table, tableSize);
            s = Uncovered_size(cover);
            cout << "Attempt total number " << counter << ", Clique Size: " << n - s << endl;
            if (s < min)
            {
                min = s;
                CountNoImprove = 0;
            }
            else
            {
                CountNoImprove++;
            }
            if (s <= k)
            {

                covers.push_back(cover);
                found = true;
                break;
            }
            for (j = 0; j < k; j++)
                cover = procedure_2WithoutRegisterFile(NonNeighbors, cover, j, table, tableSize);
            s = Uncovered_size(cover);
            if (s < min)
            {
                min = s;
                CountNoImprove = 0;
            }
            else
            {
                CountNoImprove++;
            }

            //outfile << "Clique (" << n - s << "): ";

            covers.push_back(cover);
            //outfile << endl;
            cout << "Attempt total number " << counter << ", Clique Size: " << n - s << endl;

            if (s <= k)
            {
                found = true;
                break;
            }

        }
    }

    vector<vector<Cover_Pair*> > retVal;
    vector<Cover_Pair*> current;
    Cover_Pair* temp;
    for (int i = 0; i < (int) covers.size(); i++)
    {
        current.clear();
        for (int j = 0; j < (int) covers[i].size(); j++)
        {
            if (covers[i][j] > 0)
            {
                temp = new Cover_Pair();
                temp->NodeID = j;
                temp->REG = 1;

                current.push_back(temp);
            }
        }
        retVal.push_back(current);
    }
    return retVal;

}

//this function checks whether the node 'nodeIndex' is adjoinable to the current
//clique or not
bool Mapper::removableWithRegisterFile(vector<int> &NonNeighbor, vector<int> cover, char *table, int tableSize, int nodeIndex)
{

    for (int i = 0; i < (int) NonNeighbor.size(); i++)
    {
      //if the current clique contains a node which is a Not a neighbor of
      //nodeIndex vertex
        if (cover[NonNeighbor[i]] > 0)
        {
            return false;
        }

    }
    int edgeCount = 0;
    //check for the non rotating RF constraints here and return false if
    //violated
    if(!cgra_info.FlexibleRF)
        if(!enoughNonRotatingRegisters(nodeIndex))
          return false;

    //check for the rotatingRF constraints here
    for (int i = 0; i < tableSize; i++)
    {

        if (cover[i] > 0)
        {
            //we need to check the total number of registers used by the PE
            //of mapping pair i
            if (cover[i] + table[i * tableSize + nodeIndex] + num_mem_ops_FlexibleRF(i) - 2 > NoRegisters)
            {
                //cout << "Not Enough Register\n";
                return false;
            }

            edgeCount = edgeCount + table[nodeIndex * tableSize + i] - 1;
            if (edgeCount + num_mem_ops_FlexibleRF(nodeIndex) > NoRegisters)
            {
                //cout << "Not Enough Register\n";
                return false;
            }

        }

    }
    return true;

}

//find a node with min adjacency and we want to remove it
int Mapper::max_removableWithRegisterFile(vector<vector<int> > &NonNeighbors, vector<int> cover, char *table, int tableSize)
{
    int r = -1, max = -1;
    for (int i = 0; i < (int) cover.size(); i++)
    {
        //if not already there in the cover and is adjoinable
        if (cover[i] == 0 && removableWithRegisterFile(NonNeighbors[i], cover, table, tableSize, i) == true)
        {
            //if i is a memory operation, temporarily update the PE tracker
            //to help in further analysis as the function removableWithRegisterFile() uses the PE Tracker 
            //and is called again below
           
            int tempRegCount1 = getNonRotatingRegisterCount(i);
           
            occupyNonRotatingRegister(i);
            vector<int> temp_cover = cover;
            //intial value
            temp_cover[i] = (int) table[i * tableSize + i];
            for (int j = 0; j < tableSize; j++)
            {
                //ignore self
                if (i == j)
                    continue;
                if (temp_cover[j] > 0)
                {
                    //update number of outgoing registers for i if there is an
                    //edge j,i
                    temp_cover[j] = temp_cover[j] + table[j * tableSize + i] - 1;
                    //update number of outgoing registers for i if there is an
                    //edge i,j
                    temp_cover[i] = temp_cover[i] + table[i * tableSize + j] - 1;
                }
            }
            int sum = 0;
            //find the number of adjoinable vertices for this temp clique
            for (int j = 0; j < (int) temp_cover.size(); j++)
                if (temp_cover[j] == 0 && removableWithRegisterFile(NonNeighbors[j], temp_cover, table, tableSize, j) == true)
                    sum++;

            //if i is a memory operation, revert the temprary update done
            //to PE tracker above to its original value
            releaseNonRotatingRegister(i);
            
            int tempRegCount2 = getNonRotatingRegisterCount(i);
            assert(tempRegCount1==tempRegCount2);

            if (sum > max)
            {
                if (r == -1)
                {
                    max = sum;
                    r = i;
                }
                //if i has more neighbors than r
                else if (NonNeighbors[r].size() >= NonNeighbors[i].size())
                {
                    max = sum;
                    r = i;
                }
            }
        }
    }
    return r;
}
        //find the cover starting with the initial node i, find all the
        //adjoinable vertices, add the vertex with the maximum profit i.e. out
        //of all the adjoinable vertices add the vertex whosa addition to the
        //clique would yield the maximum number of adjoinable vertices for the
        //resultant clique
vector<int> Mapper::procedure_1WithRegisterFile(vector<vector<int> > &NonNeighbors, vector<int> cover, char *table, int tableSize)
{
    //reset and initialize the memory-pe tracking array
    resetMemOpsTracker(cover);

    vector<int> temp_cover = cover;
    int r = 0;
    //run till there is an adjoinable vertex for the clique
    while (r != -1)
    {
        //find the next vertex to be added to the clique
        r = max_removableWithRegisterFile(NonNeighbors, temp_cover, table, tableSize);
        if (r != -1)
        {
            //initial value (num of regs)
            temp_cover[r] = table[r * tableSize + r];
            for (int i = 0; i < tableSize; i++)
            {
                //neglect self
                if (i == r)
                    continue;
                    
                if (temp_cover[i] > 0)
                {
                    if (table[i * tableSize + r] < 1)
                    {
                        cout << "Error Not Connected Nodes in procedure_1\n";
                    }
                    //update number of outgoing registers for i if there is an
                    //edge i,r
                    temp_cover[i] = temp_cover[i] + table[i * tableSize + r] - 1;
                    //update number of outgoing registers for i if there is an
                    //edge r,i
                    temp_cover[r] = temp_cover[r] + table[r * tableSize + i] - 1;
                    if (temp_cover[i] < 1 || temp_cover[r] < 1)
                    {
                        cout << "Error, negative value in proc 1\n";
                    }
                    

                }

            }

            //update the non rotating register info here
            occupyNonRotatingRegister(r);
        }
    }
    return temp_cover;
}

//Given a simple graph G with n vertices and a maximal clique Q of G, if there
//is no vertex v outside Q such that there is exactly one vertex w in Q that is
//not a neighbor of v, output Q. Else, find a vertex v outside Q such that there
//is exactly one vertex w in Q that is not a neighbor of v. Define Qv,w by
//adjoining v to Q and removing w from Q. Perform procedure 3.1 on Qv,w and
//output the resulting clique
vector<int> Mapper::procedure_2WithRegisterFile(vector<vector<int> > &NonNeighbors, vector<int> cover, int k, char *table, int tableSize)
{
    //reset and initialize the memory-pe tracking array
    resetMemOpsTracker(cover);
    int count = 0;
    vector<int> temp_cover = cover;
    vector<int> next_cover;

    //in this for loop i corresponds to the v in the definition
    for (int i = 0; i < (int) temp_cover.size(); i++)
    {
        if (temp_cover[i] == 0)
        {
            int sum = 0, index;
            for (int j = 0; j < (int) NonNeighbors[i].size(); j++)
            {
                if (temp_cover[NonNeighbors[i][j]] > 0)
                {
                    index = j;
                    sum++;
                }
            }
            //found w according to the definition, NonNeighbors[i][index] corresponds to w,
            //we need to remove w from the clique and insert v into the clique
            //check if v satisfies the nonRotating RF constraints
            if (sum == 1 && cover[NonNeighbors[i][index]] > 0 && enoughNonRotatingRegisters(i))
            {

                next_cover = temp_cover;

                bool RegNoEnough = false;
                //removing w from the clique
                for (int j = 0; j < tableSize; j++)
                {

                    if (j == NonNeighbors[i][index])
                        continue;
                    if (next_cover[j] > 0)
                    {
                      //release all the registers previously allocated for edges
                      //j,w
                        next_cover[j] = next_cover[j] - (table[j * tableSize + NonNeighbors[i][index]]) + 1;

                    }
                    if (next_cover[j] < 0)
                    {
                        cout << "Error, negative value in proc 2 for prev\n";
                    }
                }
                //remove w from the clique
                next_cover[NonNeighbors[i][index]] = 0;
                //release nonrotating Reg occupied by w if any
                releaseNonRotatingRegister(NonNeighbors[i][index]);

                //add v to the clique
                next_cover[i] = table[i * tableSize + i];
                //update the mem-PE tracker
                occupyNonRotatingRegister(i);

                for (int j = 0; j < tableSize; j++)
                {
                    if (j == i)
                        continue;
                    if (next_cover[j] > 0)
                    {
                        next_cover[i] = next_cover[i] + table[i * tableSize + j] - 1;
                        next_cover[j] = next_cover[j] + table[j * tableSize + i] - 1;

                    }
                    if (next_cover[i] < 0)
                    {
                        cout << "Error, negative value in proc 2 for i\n";
                    }
                    if (next_cover[i] + num_mem_ops_FlexibleRF(i)  > NoRegisters)
                    {
                        RegNoEnough = true;
                        break;
                    }
                    if(next_cover[j]>0)
                    {
                        if (next_cover[j] + num_mem_ops_FlexibleRF(j)  > NoRegisters)
                        {
                            RegNoEnough = true;
                            break;
                        }
                    }
                }

                if (RegNoEnough)
                    continue;

                temp_cover = next_cover;

                temp_cover = procedure_1WithRegisterFile(NonNeighbors, temp_cover, table, tableSize);

                count++;
            }
            if (count > k)
                break;
        }
    }
    return temp_cover;
}


//This function finds and returns all the possible maximal cliques of size
//atleast cliqueSize
//table is the adjacency matrix of the weighted graph representing the mapping
//pairs
vector<vector<Cover_Pair*> > Mapper::MapWithRegisterFile(char *table, int tableSize, int cliqueSize)
{

    int best = 0;
    int CountNoImprove = 0;

    int n, i, j, k, K, p, q, r, s, min, counter = 0;
    n = tableSize;
    //compatibility graph
    vector<vector<int> > graph;

    //reproduce the compatibility graph
    for (i = 0; i < tableSize; i++)
    {
        vector<int> row;
        for (j = 0; j < tableSize; j++)
        {
            row.push_back(table[i * tableSize + j]);
        }
        graph.push_back(row);
    }
    //Find NON Neighbors
    vector<vector<int> > NonNeighbors;
    for (i = 0; i < (int) graph.size(); i++)
    {
        vector<int> NonNeighbor;
        for (j = 0; j < (int) graph[i].size(); j++)
            if (graph[i][j] == 0)
                NonNeighbor.push_back(j);
        NonNeighbors.push_back(NonNeighbor);
    }
    cout << "Graph has n = " << n << " vertices." << endl;
    //Read maximum size of Clique wanted
    cout << "Find a Clique of size at least k = " << cliqueSize << endl;
    //cin >> K;
    K = cliqueSize;
    k = n - K;
    //Find Cliques
    bool found = false;

    min = n + 1;
    vector<vector<int> > covers;

    vector<int> allcover;
    for (i = 0; i < (int) graph.size(); i++)
        allcover.push_back(0);
    for (i = 0; i < (int) allcover.size(); i++)
    {
        if (found)
            break;
        if (CountNoImprove > MAPPING_POLICY.CLIQUE_ATTEMPTS)
        {
            break;
        }
        counter++;
        //cout << counter << ". ";
        //outfile << counter << ". ";
        //vector<int> currentcover;
        vector<int> cover = allcover;
        cover[i] = table[i * tableSize + i];

        //find the cover starting with the initial node i, find all the
        //adjoinable vertices, add the vertex with the maximum profit i.e. out
        //of all the adjoinable vertices add the vertex whosa addition to the
        //clique would yield the maximum number of adjoinable vertices for the
        //resultant clique
        cover = procedure_1WithRegisterFile(NonNeighbors, cover, table, tableSize);
        //get number of left out nodes
        s = Uncovered_size(cover);
        cout << "Attempt total number " << counter << ", Clique Size: " << n - s << endl;

        //the number of left out nodes has reduced i.e. the cover size has
        //increased
        if (s < min)
        {
            min = s;
            CountNoImprove = 0;
        }
        else
        {
            CountNoImprove++;
        }

        if (s <= k)
        {
            //outfile << "Clique (" << n - s << "): ";

            //outfile << endl;

            covers.push_back(cover);
            found = true;
            break;
        }

        for (j = 0; j < k; j++)
        {
            cover = procedure_2WithRegisterFile(NonNeighbors, cover, j, table, tableSize);

        }

        s = Uncovered_size(cover);
        if (s < min)
        {
            min = s;
            CountNoImprove = 0;
        }
        else
        {
            CountNoImprove++;
        }

        cout << "Attempt total number " << counter << ", Clique Size: " << n - s << endl;

        covers.push_back(cover);
        if (s <= k)
        {
            found = true;

            break;
        }
    }
    CountNoImprove = 0;
    //Pairwise Intersections
    for (p = 0; p < (int) covers.size(); p++)
    {
        if (found)
            break;
        if (CountNoImprove > MAPPING_POLICY.CLIQUE_ATTEMPTS)
        {
            break;
        }
        for (q = p + 1; q < (int) covers.size(); q++)
        {
            if (found)
                break;
            if (CountNoImprove > MAPPING_POLICY.CLIQUE_ATTEMPTS)
            {
                break;
            }
            counter++;

            vector<int> cover = allcover;
            //find intersection
            for (r = 0; r < (int) cover.size(); r++)
            {
                if ((covers[p][r] > 0) && (covers[q][r] > 0))

                {
                    cover[r] = table[r * tableSize + r];
                }
            }

            for (int index1 = 0; index1 < tableSize; index1++)
            {
                if (cover[index1] > 0)
                {

                    for (int index2 = 0; index2 < tableSize; index2++)
                    {
                        if (index1 == index2)
                            continue;
                        if (cover[index2] > 0)
                        {
                            cover[index1] = cover[index1] + table[index1 * tableSize + index2] - 1;
                        }
                    }
                }
            }
            cover = procedure_1WithRegisterFile(NonNeighbors, cover, table, tableSize);

            s = Uncovered_size(cover);
            cout << "Attempt total number " << counter << ", Clique Size: " << n - s << endl;
            if (s < min)
            {
                CountNoImprove = 0;
                min = s;
            }
            else
            {
                CountNoImprove++;
            }
            if (s <= k)
            {
                //outfile << "Clique (" << n - s << "): ";

                //outfile << endl;

                covers.push_back(cover);

                found = true;
                break;
            }
            for (int j = 0; j < k; j++)
                cover = procedure_2WithRegisterFile(NonNeighbors, cover, j, table, tableSize);

            s = Uncovered_size(cover);
            if (s < min)
            {
                CountNoImprove = 0;
                min = s;
            }
            else
            {
                CountNoImprove++;
            }
            cout << "Attempt total number " << counter << ", Clique Size: " << n - s << endl;

            //outfile << "Clique (" << n - s << "): ";

            covers.push_back(cover);

            //outfile << endl;

            if (s <= k)
            {
                found = true;
                break;
            }

        }
    }

    //GENERATE COVER PAIR OBJECTS THAT TELL US THE INDEX IN THE MAPPING PAIRS
    //ARRAY AND ALSO THE NUMBER OF REGISTERS ALLOCATED TO EACH MAPPING PAIR'S PE
    Cover_Pair* temp_cover;
    vector<vector<Cover_Pair*> > retVal;
    vector<Cover_Pair*> current;
    for (int i = 0; i < (int) covers.size(); i++)
    {
        current.clear();
        cout << "\n";

        for (int j = 0; j < (int) covers[i].size(); j++)
        {
            if (covers[i][j] > 0)
            {
                temp_cover = new Cover_Pair();

                temp_cover->NodeID = j;
                temp_cover->REG = covers[i][j];

                current.push_back(temp_cover);
            }
        }
        retVal.push_back(current);
    }
    return retVal;

}

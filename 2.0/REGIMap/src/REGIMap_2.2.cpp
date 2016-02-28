//============================================================================
// Name        : REGIMap_2.cpp
// Author      : Mahdi Hamzeh
// Version     : REGIMap with support of if statements and Simulated Annealing,
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "math.h"
#include "Simulated_annealing.h"
#include "REGIMap.h"


CGRA_Architecture cgra_info;
Mapping_Policy  MAPPING_POLICY;
int totalAddressAssertOps;
int RegisterFileFailures = 0;

void test()
{
    cout << "HEREEEEEEE\n";
}


int main(int argc, char *argv[])
{

    /*
     *  setup cgra configuration
     */
    cgra_info.interconnect=Simple_Connection;
    cgra_info.MAX_NODE_INDEGREE=2;
    cgra_info.MAX_NODE_OUTDEGREE=5;


    /*
     *  setup mapping configurations
     */
    MAPPING_POLICY.REGIMap=1;
    MAPPING_POLICY.CLIQUE_ATTEMPTS=4;
    MAPPING_POLICY.SIMULATED_ANNEALING=0;
    MAPPING_POLICY.MAX_TEMPERATURE=8000000;
    MAPPING_POLICY.TIME_THRESHOLD=8000;
    MAPPING_POLICY.MAX_LATENCY=200;
    MAPPING_POLICY.ENABLE_REGISTERS=1;
    MAPPING_POLICY.REGI_MAPPING_ATTEMPTS=50;


    Parser *myParser;
    /* 
     * Default inputs and settings
     */
    string node_file ;
    string edge_file ;
    cgra_info.X_Dim = 4;
    cgra_info.Y_Dim = 4;
    cgra_info.R_Size= 4;
    cgra_info.SharedRF_Size= 4;
    cgra_info.FixedRF = false;
    cgra_info.SharedRF = false;
    cgra_info.FlexibleRF = false;
    cgra_info.PER_ROW_MEM_AVAILABLE=1;

    
     totalAddressAssertOps=0;
    
    /*
     * process program args
     */


    size_t found;

    if (argc > 1)
    {
        string fixedRF_arg = "-FixedRF";
        string sharedRF_arg = "-SharedRF";
        string flexibleRF_arg = "-FlexibleRF";
        string node_arg = "-NODE";
        string edge_arg = "-EDGE";
        string xdim_arg = "-X";
        string ydim_arg = "-Y";
        string reg_arg = "-R";
        string regi_maping_policy = "-REGI";
        string sim_maping_policy = "-SIM-ANNEALING";
        for (int count = 1; count < argc; count++)
        {
            found = node_arg.find(argv[count]);
            if (found == 0)
            {
                node_file = argv[count + 1];
                count = count + 1;
                continue;
            }
            found = edge_arg.find(argv[count]);
            if (found == 0)
            {
                edge_file = argv[count + 1];
                count = count + 1;
                continue;
            }
            found = xdim_arg.find(argv[count]);
            if (found == 0)
            {
                cgra_info.X_Dim = atoi(argv[count + 1]);
                count = count + 1;
                continue;
            }
            found = ydim_arg.find(argv[count]);
            if (found == 0)
            {
                cgra_info.Y_Dim = atoi(argv[count + 1]);
                count = count + 1;
                continue;
            }
            found = reg_arg.find(argv[count]);
            if (found == 0)
            {
                cgra_info.R_Size = atoi(argv[count + 1]);
                count = count + 1;
                continue;
            }
            found = fixedRF_arg.find(argv[count]);
            if (found == 0)
            {
                cout<<"\n**********FIXED RF****************\n";
                cgra_info.FixedRF = true;
                count = count + 1;
                continue;
            }
            found = sharedRF_arg.find(argv[count]);
            if (found == 0)
            {
                cout<<"\n**********SHARED RF****************\n";
                cgra_info.SharedRF = true;
                cgra_info.SharedRF_Size = atoi(argv[count + 1]);
                count = count + 1;
                cout<<"\n*********SHARED RF SIZE = ******"<< cgra_info.SharedRF_Size<<endl; 
                continue;
            }
            found = flexibleRF_arg.find(argv[count]);
            if (found == 0)
            {
                cout<<"\n**********FLEXIBLE RF****************\n";
                cgra_info.FlexibleRF = true;
                count = count + 1;
                continue;
            }
            found = regi_maping_policy.find(argv[count]);
            if (found == 0)
            {
                MAPPING_POLICY.REGIMap = 1;
                MAPPING_POLICY.SIMULATED_ANNEALING= 0;
                continue;
            }
            found = sim_maping_policy.find(argv[count]);
            if (found == 0)
            {
                MAPPING_POLICY.REGIMap = 0;
                MAPPING_POLICY.SIMULATED_ANNEALING= 1;
                continue;
            }
            cout << "UNKNOWN Argument\n" << node_arg << endl << edge_arg << endl<<xdim_arg << endl << ydim_arg << endl << reg_arg << endl << regi_maping_policy
                << endl << sim_maping_policy << endl;
            break;
        }
    }

    /*
     * Parser processes input files
     */
    myParser = new Parser(node_file.c_str(), edge_file.c_str());        //no mapping
    srand(time(NULL));


    /*
     * Selected REGIMap algorithm
     */

    if (MAPPING_POLICY.REGIMap==1)
    {
        cout << "REGIMap has started" << endl;
        REGIMap regiMap(*myParser);
    }
    /*
     * Simulated annealing mapping
     */
    else
    {
        cout << "Simulated annealing has started" << endl;
        Simulated_Annealing(*myParser);
    }

    cout << "Mapping is completed" << endl;
    return 0;
}

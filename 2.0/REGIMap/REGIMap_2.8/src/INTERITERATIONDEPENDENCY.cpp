/*
 * This File Checks For recurrent edges into 
 *
 *  Created on: Dec 28, 2015
 *  Author: Shail Dave
*/

#include <iostream>
#include <fstream>
#include <string>
#include "INTERITERATIONDEPENDENCY.h"

using namespace std;

int max_outdegree = 50; //Change This With Architectural Specification of Max OutDegree/InDegree (For DFG) //Not Used Now
int edge_size = 0, node_size = 0;
int *edge_from, *edge_to, *node_list, *opcode_list, *latency; 
int highest_inter_iteration_distance = 0;
std::string *dep_type;

/*
INTERITERATIONDEPENDENCY::INTERITERATIONDEPENDENCY();
{
//  this->highest_inter_iteration_distance = 0;
}

INTERITERATIONDEPENDENCY::~INTERITERATIONDEPENDENCY();
{
}
*/

int INTERITERATIONDEPENDENCY::calculate_recMII(std::string node_file, std::string edge_file, std::string latency_file)
{
  int recMII = 0, individual_recMII = 0;

  ifstream nodefile;
  nodefile.open(node_file.c_str());

  //Get Total Number of Entries In Node File
  std::string line;
  while (getline(nodefile, line))
        ++node_size;

  nodefile.close();
  nodefile.open(node_file.c_str());
  
  //Read Data From Node File
  int node_no[node_size], opcode[node_size];
  std::string node_name[node_size];

  int i;
  for(i = 0; i < node_size; i++)
  {
	nodefile >> node_no[i];
     	nodefile >> opcode[i];
	nodefile >> node_name[i];
	//cout<<node_no[i]<<"\t"<<opcode[i]<<"\t"<<node_name[i]<<endl;
  }

  nodefile.close();

  node_list = &node_no[0];
  opcode_list = &opcode[0];

  ifstream edgefile;
  edgefile.open(edge_file.c_str());

  //Get Total Number of Entries In Edge File
  while (getline(edgefile, line))
        ++edge_size;

  edgefile.close();
  edgefile.open(edge_file.c_str());
  
  //Read Data From Node File
  //int edge_from[edge_size], edge_to[edge_size];
  int from[edge_size], to[edge_size], dependency_weight[edge_size];	
  std::string dependency_type[edge_size];
  edge_from = from;
  edge_to = to;
  dep_type = &dependency_type[0];
		
  std::string temp_str;
  for(i = 0; i < edge_size; i++)
  {
	edgefile >> *(edge_from + i);
   	edgefile >> *(edge_to + i);
	edgefile >> *(dependency_weight + i);
	edgefile >> *(dependency_type + i);
	edgefile >> temp_str;
    
    if(*(dependency_weight + i) != 0)
    {
        *(dependency_type + i) = "REC";
	if(highest_inter_iteration_distance < (*(dependency_weight + i)))
		highest_inter_iteration_distance = *(dependency_weight + i);
    }
	//cout<<*(edge_from + i)<<"\t"<<*(edge_to + i)<<endl;
  }

  edgefile.close();

  /*
   * Get Latency of The Nodes From Latency File
   */
  int node_latency[node_size];
  latency = &node_latency[0];
  get_all_node_latency(latency_file);

  /*
	Find Recurrent Edges. If they are, act to get latency of prior path and edge weight.
  */
  for(i = 0; i < edge_size; i++)
  {
	if(dependency_type[i] == "REC")
	{
		if(from[i] == to[i])
			individual_recMII = (get_node_latency(from[i]))/dependency_weight[i];
		else
			individual_recMII = (find_latency_to_prior_rec_node(from[i]))/dependency_weight[i];
	}
	
	if(individual_recMII > recMII)
		recMII = individual_recMII; 
  }
 	
  return recMII;

}

int INTERITERATIONDEPENDENCY::find_latency_to_prior_rec_node(int source_node)
{
	std::string dep_type = check_rec_edge(source_node);
	int path_latency = 0, past_latency = 0;
	int node_latency = get_node_latency(source_node);
	int i = 0;

	if(dep_type == "REC")
		return node_latency;

	int from_node_no = get_from_node_no(source_node); 

	if(from_node_no == 0)
		return 0;
	
	if(from_node_no > 0)
	{
		int from_node_list[from_node_no];
		int *from_node = &from_node_list[0];

		/*
			Even if there multiple precedessor nodes, it takes maximum from all the paths.
			Check it.
		*/

		for(i = 0; i < from_node_no; i++)
		{
			get_from_node(from_node, source_node);
			past_latency = find_latency_to_prior_rec_node(*(from_node + i));
			//cout << "Source Node: " << source_node << "\tFrom Node: " << *(from_node + i) << "\tPast Latency: " << past_latency << "\n";
			if(past_latency > path_latency)
				path_latency = past_latency;
		}
	}

	path_latency = path_latency + node_latency;
	
	return path_latency;	
}



int INTERITERATIONDEPENDENCY::get_from_node_no(int to_node)
{
	int i = 0, from_node_no = 0;

	//Get From Node Counts From 'To Node'
	for(i = 0; i < edge_size; i++)
	{
		if(to_node == *(edge_to + i)) 
		{
			from_node_no++;
		}
	}
	return from_node_no;

}

void INTERITERATIONDEPENDENCY::get_from_node(int *from_node, int to_node)
{
	int i = 0, from_node_no = 0;

	//Get From Node From 'To Node'
	for(i = 0; i < edge_size; i++)
	{
		if(to_node == *(edge_to + i))  
		{
			*(from_node + from_node_no) = *(edge_from + i);
			from_node_no++;
		}
	}
}

std::string INTERITERATIONDEPENDENCY::check_rec_edge(int source_node)
{
	int i = 0;
	std::string edge_type = "TRU";
	for(i = 0; i < edge_size; i++)
	{
		if(source_node == *(edge_to + i))
			if(*(dep_type + i) == "REC")
				edge_type = "REC";
	}

	return edge_type;
}

void INTERITERATIONDEPENDENCY::get_all_node_latency(std::string latency_file)
{
  int total_lines = 0, latency_value = 1;
  ifstream latencyfile;
  latencyfile.open(latency_file.c_str());

  //Get Total Number of Entries In Latency File
  std::string line;
  while (getline(latencyfile, line))
        ++total_lines;

  latencyfile.close();
  latencyfile.open(latency_file.c_str());
  
  //Read Data From Late File
  int temp;	

  //Initialize Latency of 1 for all nodes (including constants)
  int i, j;
  for(i = 0; i < node_size; i++)
  {
	*(latency + i) = 1;
  }

  //Get latency of nodes from latency file and assign to respective node
  for(i = 0; i < total_lines; i++)
  {
  	latencyfile >> temp;
     	latencyfile >> latency_value;

	for(j = 0; j < node_size; j++)
	{
		if(temp == *(node_list + j))
		{
			*(latency + j) = latency_value;
			break;
		}
	}
  }

  latencyfile.close();
	
}

int INTERITERATIONDEPENDENCY::get_node_latency(int node_no)
{
	for(int i=0; i < node_size; i++)
	{
		if(node_no == *(node_list + i))
			return *(latency+i);
	}

	return 1;
}

void INTERITERATIONDEPENDENCY::get_compare_node()
{
	int compare_node = 0;
	for(int i = 0; i < node_size; i++)
	{
		//Check whether node opcode is compare node opcode
		if( (*(opcode_list + i) >= 9) & (*(opcode_list + i) <= 18)) 
		{
			compare_node = *(node_list + i);
			break;
		}
	}

	ofstream myfile;
	myfile.open("compare_node.txt");
	
	myfile << compare_node;

	myfile.close();

}

int INTERITERATIONDEPENDENCY::get_highest_distance_from_inter_iteration_dependencies()
{
	return highest_inter_iteration_distance;
}

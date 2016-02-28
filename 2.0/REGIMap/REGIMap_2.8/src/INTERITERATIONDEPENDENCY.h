/* 
 * InterIterationDependency.h 
 *
 *  Created on: Dec 28, 2015
 *  Author: Shail Dave
*/

#ifndef INTERITERATIONDEPENDENCY_H_
#define INTERITERATIONDEPENDENCY_H_

#include <iostream>
#include <string>

class INTERITERATIONDEPENDENCY
{

/*   public:
	INTERITERATIONDEPENDENCY();
	virtual ~INTERITERATIONDEPENDENCY();

    private:
	//int highest_inter_iteration_distance;
*/
    public:
	int calculate_recMII(std::string node_file, std::string edge_file, std::string latency_file);

	int get_highest_distance_from_inter_iteration_dependencies();

	int get_from_node_no(int to_node);

	void get_from_node(int *from_node, int to_node);

	std::string check_rec_edge(int source_node);

	int find_latency_to_prior_rec_node(int source_node);

	void get_all_node_latency(std::string latency_file);

	int get_node_latency(int node_no);

	void get_compare_node();

};

#endif /* INTERITERATIONDEPENDENCY_H_ */

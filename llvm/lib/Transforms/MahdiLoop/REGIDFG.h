/*
 * REGIDFG.h
 *
 *  Created on: Mar 8, 2013
 *      Author: mahdi
 */

#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <cstddef>
#include <string>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include "llvm/IR/Instructions.h"

#define MAXINT 10000000
#define DEBUG_1 1

#ifndef REGIDFG_H_
#define REGIDFG_H_

//using namespace llvm;
namespace llvm
{
	class REGI_ARC;
	//class REGI_NODE;
	//class REGI_PE;
	enum DataDepType
	{
		TrueDep, AntiDep, OutputDep, NonDataDep, MemoryDep, BranchDep, PredDep
	};

	enum Instruction_Operation
	{
		add,
		sub,
		mult,
		div,
		shiftl,
		shiftr,
		andop,
		orop,
		xorop,
		cmpSGT,
		cmpEQ,
		cmpNEQ,
		cmpSLT,
		cmpSLEQ,
		cmpSGEQ,
		cmpUGT,
		cmpULT,
		cmpULEQ,
		cmpUGEQ,
		ld_add,
		ld_data,
		st_add,
		st_data,
		ld_add_cond,
		ld_data_cond,
		st_add_cond,
		st_data_cond,
		route,
		llvm_route,
		select,
		constant,
		loopctrl,
		rest

	};

	class REGI_Scheduling_Info
	{
		public:
			REGI_Scheduling_Info();
			virtual ~REGI_Scheduling_Info();

		private:
			int ASAP;
			int ALAP;
			int Feasible_ASAP;
			int Feasible_ALAP;

			int Height;

			int CURRENT;
			int Modulo_Current;

			int SCC_Delay;

			bool ASAP_initiated;
			bool ALAP_initiated;
			bool Height_initiated;
			bool CURRENT_initiated;
			bool Feasible_ASAP_initiated;
			bool Feasible_ALAP_initiated;

			int slack;

		public:

			void set_ASAP(int time);
			void set_ALAP(int time);

			void set_Height(int time);

			void set_Feasible_ASAP(int time);
			void set_Feasible_ALAP(int time);
			void set_Current(int time, int II);
			void reset_Current();
			void reset_Feasible_ASAP();
			void reset_Feasible_ALAP();
			void reset_ASAP();
			void reset_ALAP();

			int get_ASAP();
			int get_ALAP();

			int get_Height();
			int get_Feasible_ASAP();
			int get_Feasible_ALAP();
			int get_Current();
			int get_Modulo_Current();
			bool is_ASAP_Initiated();
			bool is_ALAP_Initiated();
			bool is_Height_Initiated();
			bool is_Feasible_ASAP_Initiated();
			bool is_Feasible_ALAP_Initiated();
			bool is_CURRENT_Initiated();

			void set_slack(int time);

			void set_slack();

			void update_slack(int time);

			int get_slack();

			void set_SCC_Delay(int delay);

			int get_SCC_Delay();

	};

	class REGI_NODE
	{

		private:
			int cuid;
			Instruction_Operation Operation;

			std::string name;
			Value* Node_Ins;
			/* The insn represented by the node.  */
			int latency;
			std::vector<REGI_ARC*> inCommingArcs;
			std::vector<REGI_ARC*> outGoingArcs;

			REGI_NODE* related;

			REGI_Scheduling_Info* sched_info;

			//**************************CycleS*************************************//
			int index_cycle;
			int low_index_cycle;
			bool index_defined_cycle;
			//**************************CycleE*************************************//

			bool self_loop;
			REGI_ARC* loop;

		public:
			//REGI_NODE();
			virtual ~REGI_NODE();

			REGI_NODE(Instruction_Operation ins, int laten, int id, std::string name, Value* Node_Ins);

			//set self loop
			void set_self_loop(REGI_ARC* s_loop);

			//true if it has self loop
			bool has_self_loop();

			REGI_ARC* get_self_loop();

			void set_Instruction(Instruction_Operation ins, int laten, int id, std::string name, Value* Node_Ins);
			int get_ID();
			int get_Latency();
			std::string get_Name();
			Value* get_LLVM_Instruction();
			void set_Latency(int laten);
			Instruction_Operation get_Instruction();

			void set_Load_Address_Generator(REGI_NODE* next);
			void set_Load_Data_Bus_Read(REGI_NODE* next);
			void set_Store_Address_Generator(REGI_NODE* next);
			void set_Store_Data_Bus_Write(REGI_NODE* next);
			bool is_Load_Address_Generator();
			bool is_Load_Data_Bus_Read();
			bool is_Store_Address_Generator();
			bool is_Store_Data_Bus_Write();
			bool is_Mem_Operation();

			bool is_Routing_Operation();

			REGI_NODE* get_Related_Node();

			//get the number of incomming edges
			int get_Number_of_Pred();

			//get the number of outgoing edges
			int get_Number_of_Succ();

			//return the ith incomming egde
			REGI_ARC* get_Pred_Arc(int i);

			//return ith outgoing edge
			REGI_ARC* get_Succ_Arc(int i);

			//return the set of incomming edges
			std::vector<REGI_NODE*> Get_Prev_Nodes();

			//return the set of incomming edges no distance
			std::vector<REGI_NODE*> Get_Prev_Nodes_Same_Iteration();

			//return the set of outgoing edges
			std::vector<REGI_NODE*> Get_Next_Nodes();

			//return the set of outgoing edges no distance
			std::vector<REGI_NODE*> Get_Next_Nodes_Same_Iteration();

			//add a new incomming edge
			void add_Pred_Arc(REGI_ARC* pred_Arc);

			//add a new outgoing edge
			void add_Succ_Arc(REGI_ARC* succ_Arc);

			//remove an incomming edge
			int remove_Pred_Arc(REGI_ARC* predArc);

			//remove an outgoing edge
			int remove_Succ_Arc(REGI_ARC* succArc);

			//returns true if there is an edge between this node and next node
			bool is_Connected_To(REGI_NODE* nextNode);

			//**************************Scheduling********************************//
			REGI_Scheduling_Info* get_Sched_Info();

			bool is_ready_to_schedule_ASAP(int &time);

			bool is_ready_to_schedule_ALAP(int &time);

			bool is_ready_to_schedule_Feasible_ASAP(int &time);

			bool is_ready_to_schedule_Feasible_ALAP(int &time);

			bool is_ready_to_schedule_modulo(int &time);

			bool is_ready_to_schedule_modulo_forward(int &time);

			bool is_ready_to_schedule_modulo_backward(int &time);

			//if a node has dependency to more than one node scheduled at time < time-1
			bool has_multiple_constrains_modulo_at_time(int time, std::vector<REGI_NODE*> &constrainers);

			bool has_multiple_constrains_modulo_backward_at_time(int time, std::vector<REGI_NODE*> &constrainers);

			bool constrains_multiple_modulo_backward_at_time(int time, std::vector<REGI_NODE*> &constrainers);

			//**************************Scheduling********************************//

			//**************************cycle DetectionS********************************//
			void Set_Index_Cycle(int index);

			int get_Index_Cycle();

			void Set_Low_Index_Cycle(int index);

			int get_Low_Index_Cycle();

			bool Is_Index_Defined_Cycle();

			void Reset_Cycle_Index();
			//**************************cycle DetectionE********************************//

	};

	class REGI_ARC
	{
		public:
			REGI_ARC(int ID, int Inter_Iteration_Distance,int operandOrder=0);
			virtual ~REGI_ARC();
		private:
			//edge from inNode to outNode
			REGI_NODE* from;
			REGI_NODE* to;
			DataDepType dependency;
            
			int ID;
			int Inter_Iteration_Distance;
            int operandOrder;
		public:
			//Set the node that this edge is its outgoing edge
			void Set_From_Node(REGI_NODE* inNode);
			//Set the node that this edge is its incoming edge
			void Set_To_Node(REGI_NODE* outNode);

			//Set edge distance
			void Set_Inter_Iteration_Distance(int distance);

			//Set dependency type
			void Set_Dependency_Type(DataDepType dep);

			//Get dependency type
			DataDepType Get_Dependency_Type();

			//Get the node that this edge is its outgoing edge
			REGI_NODE* get_From_Node();
			//Get the node that this edge is its incoming edge
			REGI_NODE* get_To_Node();
			//Return Edge ID
			int get_ID();
			//Return edge distance
			int Get_Inter_Iteration_Distance();
			//Return operand order
            int GetOperandOrder();

			REGI_ARC* Copy();

	};
	class REGI_DFG
	{

		private:
			//set of nodes in the graph
			std::vector<REGI_NODE*> _node_Set;
			std::vector<REGI_NODE*> _node_Set_Ordered;

			//set of edges in the graph
			std::vector<REGI_ARC*> _ARC_Set;

			std::vector<REGI_ARC*> _Back_ARC_Set;

			int MAX_SCHEDULE_LEN;

			int schedule_len;

		public:
			int CGRA_Y_Dim;

			//keep track of last edge IDs
			int ARC_Max_Index;

			//keep track of node IDs
			int Node_Max_Index;

			REGI_DFG();
			virtual ~REGI_DFG();

			REGI_DFG* Copy();

			//*************************** utilitiesS*********************//
			//Insert a new node in the DFG
			void insert_Node(REGI_NODE *pNode);

			//insert a node between pnode and nnode, the distance will go to the arc between pNode and newNode
			bool insert_Node_in_between_input(REGI_NODE* pNode, REGI_NODE* nNode, REGI_NODE* newNode);

			//insert a node between pnode and nnode the distance will go to the arc between newNode and nNode
			int insert_Node_in_between_output(REGI_NODE* pNode, REGI_NODE* nNode, REGI_NODE* newNode);

			//return a node with given ID number
			REGI_NODE* get_Node(int number);

			//return true if DFG contains a node with given name
			REGI_NODE* get_Node(Value* ins);

			REGI_NODE* get_Node_Mem_Add(Value* ins);
			REGI_NODE* get_Node_Mem_Data(Value* ins);

			//make an edge between two nodes
			void make_Arc(REGI_NODE* pNin, REGI_NODE* pNout, int ID, int
            Distance, DataDepType dep,int operandOrder = 0);

			//true if given set contains given node
			bool contains(std::vector<REGI_NODE*> &nodeset, REGI_NODE* node);

			//true if two given sets have any node in commmon
			bool Not_Empty_Intersect(std::vector<REGI_NODE*> &nodeset1, std::vector<REGI_NODE*> &nodeset2);

			//bool contains(std::vector<int> &set, int value);

			//remove a node from given set
			void Remove(std::vector<REGI_NODE*> &nodeset, REGI_NODE* node);

			void Remove(std::vector<REGI_NODE*> &nodeset, std::vector<REGI_NODE*> &toRemoveNodes);

			//delete a node from node set
			int delete_Node(REGI_NODE *pNode);

			//remove and edge from edge set
			void Remove_Arc(REGI_ARC* arc);

			//remove the arc between two nodes and from arc set
			void Remove_Arc(REGI_NODE *pNode, REGI_NODE *nNode);

			//get the edge between two nodes and from edge set
			REGI_ARC* get_Arc(REGI_NODE *pNode, REGI_NODE *nNode);

			//remove a set of edges
			void Remove_Arcs(std::vector<REGI_ARC*> &arcs);

			//intersect two sets
			std::vector<REGI_NODE*> Intersect(std::vector<REGI_NODE*> &nodeset1, std::vector<REGI_NODE*> &nodeset2);

			//union two sets
			std::vector<REGI_NODE*> Union(std::vector<REGI_NODE*> &nodeset1, std::vector<REGI_NODE*> &nodeset2);

			//subtracts set1-set2
			std::vector<REGI_NODE*> Subtract(std::vector<REGI_NODE*> &set1, std::vector<REGI_NODE*> &set2);

			//topological sort DFG
			std::queue<REGI_NODE*> Topological_Sort();
			void Strongly_Connected(std::vector<std::vector<REGI_NODE*> > &results);

			void Strongly_Connected(REGI_NODE* currentNode, std::stack<REGI_NODE*> &S, std::vector<REGI_NODE*> &SCopy, int &index,
			                std::vector<std::vector<REGI_NODE*> > &results);
			//generate a unique ID for nodes
			int Get_Unique_Index();

			int Increase_ID_Index();

			//return all nodes
			std::vector<REGI_NODE*> getSetOfVertices();

			//return all nodes
			std::vector<REGI_NODE*> getSetOfOperations();

			//return all nodes
			std::vector<REGI_ARC*> getSetOfArcs();

			void Dot_Print_DFG_With_Schedule(std::string filename);

			void Dot_Print_DFG_With_Modulo_Schedule(std::string filename, int II);

			void Dot_Print_DFG(std::string filename);

			//print elements of a set
			void PrintSet(std::vector<REGI_NODE*> &set);

			//print elements of a set of sets of nodes
			void PrintSets(std::vector<std::vector<REGI_NODE*> > &sets);

			int get_number_of_nodes();

			//get set of next nodes of given nodes that belong to this iteration
			std::vector<REGI_NODE*> get_next_nodes_same_iteration(std::vector<REGI_NODE*> &nodes);
			//get set of next nodes of given nodes that belong to this iteration and update their latency in a loop (SCC)
			std::vector<REGI_NODE*> get_next_nodes_same_iteration_update_latency(std::vector<REGI_NODE*> &nodes, bool &change);

			//reset all nodes latency in the loop (SCC) in the given set
			void reset_latency_to_nodes(std::vector<REGI_NODE*> &nodes);

			//set of nodes which do not have incoming arcs or they have incoming arcs from previous iterations
			std::vector<REGI_NODE*> get_set_of_start_nodes();

			//set of nodes which do not have outgoing arcs or they have outgoing arcs got to next iterations
			std::vector<REGI_NODE*> get_set_of_end_nodes();

			void Fix_Phi_Nodes();

			bool Has_conditional_clause();

			void Dump_Loop(std::string filename);

			void print_Loop_stats(int total, int no_cond, int with_cond );


			//*************************** utilitiesS*********************//

	};

} /* namespace llvm */
#endif /* REGIDFG_H_ */


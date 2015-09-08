/*
 * REGIDFG.cpp
 *
 *  Created on: Mar 8, 2013
 *      Author: mahdi
 */

#include "REGIDFG.h"
#include "llvm/Support/raw_ostream.h"


using namespace llvm;

/***********************************************************************REGI_Scheduling_Info*************************************************************************************/

REGI_Scheduling_Info::~REGI_Scheduling_Info()
{
}

REGI_Scheduling_Info::REGI_Scheduling_Info()
{
	ASAP = -1;
	ALAP = -1;
	CURRENT = -1;
	Feasible_ASAP = -1;
	Feasible_ALAP = -1;
	ASAP_initiated = false;
	ALAP_initiated = false;
	CURRENT_initiated = false;
	Feasible_ASAP_initiated = false;
	Feasible_ALAP_initiated = false;
	slack = 0;
	Modulo_Current = 0;
	SCC_Delay = 0;

}

void REGI_Scheduling_Info::set_ASAP(int time)
{
	ASAP_initiated = true;
	ASAP = time;
}

void REGI_Scheduling_Info::set_ALAP(int time)
{
	ALAP_initiated = true;
	ALAP = time;
}

void REGI_Scheduling_Info::set_Height(int time)
{
	Height_initiated = true;
	Height = time;
}

void REGI_Scheduling_Info::set_Current(int time, int II)
{
	CURRENT_initiated = true;
	CURRENT = time;
	Modulo_Current = CURRENT % II;
	if (II == 1)
	{
		Modulo_Current = 0;
	}
}

void REGI_Scheduling_Info::set_Feasible_ASAP(int time)
{
	Feasible_ASAP_initiated = true;
	Feasible_ASAP = time;
}

void REGI_Scheduling_Info::set_Feasible_ALAP(int time)
{
	Feasible_ALAP_initiated = true;
	Feasible_ALAP = time;
}

int REGI_Scheduling_Info::get_ASAP()
{
	return ASAP;
}

int REGI_Scheduling_Info::get_ALAP()
{
	return ALAP;
}

int REGI_Scheduling_Info::get_Height()
{
	return Height;
}

int REGI_Scheduling_Info::get_Current()
{
	return CURRENT;
}

int REGI_Scheduling_Info::get_Modulo_Current()
{
	return Modulo_Current;
}

int REGI_Scheduling_Info::get_Feasible_ASAP()
{
	return Feasible_ASAP;
}

int REGI_Scheduling_Info::get_Feasible_ALAP()
{
	return Feasible_ALAP;
}

bool REGI_Scheduling_Info::is_ASAP_Initiated()
{
	return ASAP_initiated;
}

bool REGI_Scheduling_Info::is_ALAP_Initiated()
{
	return ALAP_initiated;
}

bool REGI_Scheduling_Info::is_Height_Initiated()
{
	return Height_initiated;
}
bool REGI_Scheduling_Info::is_Feasible_ASAP_Initiated()
{
	return Feasible_ASAP_initiated;
}

bool REGI_Scheduling_Info::is_Feasible_ALAP_Initiated()
{
	return Feasible_ALAP_initiated;
}

bool REGI_Scheduling_Info::is_CURRENT_Initiated()
{
	return CURRENT_initiated;
}

void REGI_Scheduling_Info::reset_Current()
{
	CURRENT_initiated = false;
	CURRENT = -1;
}

void REGI_Scheduling_Info::reset_Feasible_ASAP()
{
	Feasible_ASAP_initiated = false;
	Feasible_ASAP = -1;
}

void REGI_Scheduling_Info::reset_Feasible_ALAP()
{
	Feasible_ALAP_initiated = false;
	Feasible_ALAP = -1;
}
void REGI_Scheduling_Info::reset_ASAP()
{
	ASAP_initiated = false;
	ASAP = -1;
}
void REGI_Scheduling_Info::reset_ALAP()
{
	ALAP_initiated = false;
	ALAP = -1;
}

void REGI_Scheduling_Info::set_slack()
{
	slack = Feasible_ALAP - Feasible_ALAP;
}

void REGI_Scheduling_Info::set_slack(int time)
{
	slack = Feasible_ALAP - time;
}
void REGI_Scheduling_Info::update_slack(int time)
{
	slack = time - Feasible_ASAP;
}
int REGI_Scheduling_Info::get_slack()
{
	return slack;
}
void REGI_Scheduling_Info::set_SCC_Delay(int delay)
{
	SCC_Delay = delay;
}

int REGI_Scheduling_Info::get_SCC_Delay()
{
	return SCC_Delay;
}
/***********************************************************************REGI_Scheduling_Info*************************************************************************************/

/***********************************************************************ARC*************************************************************************************/

REGI_ARC::REGI_ARC(int ID, int Inter_Iteration_Distance,int operandOrder)
{
	this->ID = ID;
	this->Inter_Iteration_Distance = Inter_Iteration_Distance;
    this->operandOrder = operandOrder;
}
REGI_ARC::~REGI_ARC()
{

}
void REGI_ARC::Set_From_Node(REGI_NODE* from)
{
	this->from = from;
}
//Set the node that this edge is its incoming edge
void REGI_ARC::Set_To_Node(REGI_NODE* to)
{
	this->to = to;
}

//Set edge distance
void REGI_ARC::Set_Inter_Iteration_Distance(int Inter_Iteration_Distance)
{
	this->Inter_Iteration_Distance = Inter_Iteration_Distance;
}
//Set dependency type
void REGI_ARC::Set_Dependency_Type(DataDepType dep)
{
	this->dependency = dep;
}

//Get dependency type
DataDepType REGI_ARC::Get_Dependency_Type()
{
	return dependency;
}
//Get the node that this edge is its outgoing edge
REGI_NODE* REGI_ARC::get_From_Node()
{
	return from;
}
//Get the node that this edge is its incoming edge
REGI_NODE* REGI_ARC::get_To_Node()
{
	return to;
}
//Return Edge ID
int REGI_ARC::get_ID()
{
	return ID;
}
//Return edge distance
int REGI_ARC::Get_Inter_Iteration_Distance()
{
	return Inter_Iteration_Distance;
}

//Return operandOrder
int REGI_ARC::GetOperandOrder()
{
	return operandOrder;
}

REGI_ARC* REGI_ARC::Copy()
{
	REGI_ARC* new_ARC = new REGI_ARC(ID, Inter_Iteration_Distance);
	new_ARC->Set_From_Node(from);
	new_ARC->Set_To_Node(to);

	return new_ARC;
}
/***********************************************************************ARC*************************************************************************************/

/***********************************************************************NODE*************************************************************************************/
REGI_NODE::REGI_NODE(Instruction_Operation ins, int laten, int id, std::string name, Value* Node_Ins)
{

	Operation = ins;
	cuid = id;

	this->name = name;
	if (name == "")
	{
		std::ostringstream os;
		os << id;
		this->name = os.str();

	}
	latency = laten;
	this->Node_Ins = Node_Ins;
	related = NULL;

	sched_info = new REGI_Scheduling_Info();

	//**************************CycleS*************************************//
	index_cycle = -1;
	low_index_cycle = -1;
	index_defined_cycle = false;
	//**************************CycleE*************************************//

	loop = NULL;
	self_loop = false;
}

void REGI_NODE::set_self_loop(REGI_ARC* s_loop)
{
	self_loop = true;
	loop = s_loop;
}

bool REGI_NODE::has_self_loop()
{
	return self_loop;
}

REGI_ARC* REGI_NODE::get_self_loop()
{
	return loop;
}

REGI_NODE::~REGI_NODE()
{
	inCommingArcs.clear();
	outGoingArcs.clear();
	delete (sched_info);
	//delete (name);
}

void REGI_NODE::set_Instruction(Instruction_Operation ins, int laten, int id, std::string name, Value* Node_Ins)
{
	Operation = ins;
	this->name = name;
	cuid = id;
	latency = laten;
	this->Node_Ins = Node_Ins;
}

int REGI_NODE::get_ID()
{
	return cuid;
}

int REGI_NODE::get_Latency()
{
	return latency;
}
std::string REGI_NODE::get_Name()
{
	return name;
}
Value* REGI_NODE::get_LLVM_Instruction()
{
	return Node_Ins;
}
void REGI_NODE::set_Latency(int laten)
{
	latency = laten;
}

Instruction_Operation REGI_NODE::get_Instruction()
{
	return Operation;
}

void REGI_NODE::set_Load_Address_Generator(REGI_NODE* next)
{

	related = next;
}

void REGI_NODE::set_Load_Data_Bus_Read(REGI_NODE* next)
{

	related = next;
}

void REGI_NODE::set_Store_Address_Generator(REGI_NODE* next)
{
	related = next;
}

void REGI_NODE::set_Store_Data_Bus_Write(REGI_NODE* next)
{
	related = next;
}

bool REGI_NODE::is_Load_Address_Generator()
{
	return (Operation == ld_add);

}

bool REGI_NODE::is_Load_Data_Bus_Read()
{
	return (Operation == ld_data);

}

bool REGI_NODE::is_Store_Address_Generator()
{
	return (Operation == st_add);
}

bool REGI_NODE::is_Store_Data_Bus_Write()
{
	return (Operation == st_data);

}

bool REGI_NODE::is_Mem_Operation()
{
	return ((Operation == ld_add) || (Operation == ld_data) || (Operation == st_add) || (Operation == st_data));
}

bool REGI_NODE::is_Routing_Operation()
{
	return ((Operation == route));
}

REGI_NODE* REGI_NODE::get_Related_Node()
{
	return related;
}
//get the number of incomming edges
int REGI_NODE::get_Number_of_Pred()
{
	return (int) inCommingArcs.size();
}

//get the number of outgoing edges
int REGI_NODE::get_Number_of_Succ()
{
	return (int) outGoingArcs.size();
}

//return the ith incomming egde
REGI_ARC* REGI_NODE::get_Pred_Arc(int i)
{
	return inCommingArcs[i];
}

//return ith outgoing edge
REGI_ARC* REGI_NODE::get_Succ_Arc(int i)
{
	return outGoingArcs[i];
}

//return the set of incomming edges
std::vector<REGI_NODE*> REGI_NODE::Get_Prev_Nodes()
{
	std::vector<REGI_NODE*> retVal;
	int SizeOfIncomming = inCommingArcs.size();
	for (int i = 0; i < SizeOfIncomming; i++)
	{
		retVal.push_back(inCommingArcs[i]->get_From_Node());
	}
	return retVal;
}
//return the set of incomming edges
std::vector<REGI_NODE*> REGI_NODE::Get_Prev_Nodes_Same_Iteration()
{
	std::vector<REGI_NODE*> retVal;
	int SizeOfIncomming = inCommingArcs.size();
	for (int i = 0; i < SizeOfIncomming; i++)
	{
		if (inCommingArcs[i]->Get_Inter_Iteration_Distance() == 0)
			retVal.push_back(inCommingArcs[i]->get_From_Node());
	}
	return retVal;
}
//return the set of outgoing edges
std::vector<REGI_NODE*> REGI_NODE::Get_Next_Nodes()
{
	std::vector<REGI_NODE*> retVal;
	int SizeOfOutGoing = outGoingArcs.size();
	for (int i = 0; i < SizeOfOutGoing; i++)
	{
		retVal.push_back(outGoingArcs[i]->get_To_Node());
	}
	return retVal;
}

std::vector<REGI_NODE*> REGI_NODE::Get_Next_Nodes_Same_Iteration()
{
	std::vector<REGI_NODE*> retVal;
	int SizeOfOutGoing = outGoingArcs.size();
	for (int i = 0; i < SizeOfOutGoing; i++)
	{
		if (outGoingArcs[i]->Get_Inter_Iteration_Distance() == 0)
		{
			retVal.push_back(outGoingArcs[i]->get_To_Node());
		}
	}
	return retVal;
}

//add a new incomming edge
void REGI_NODE::add_Pred_Arc(REGI_ARC* pred_Arc)
{
	inCommingArcs.push_back(pred_Arc);
}

//add a new outgoing edge
void REGI_NODE::add_Succ_Arc(REGI_ARC* succ_Arc)
{
	outGoingArcs.push_back(succ_Arc);
}

//remove an incomming edge
int REGI_NODE::remove_Pred_Arc(REGI_ARC* predArc)
{
	std::vector<REGI_ARC*>::iterator iEdge;

	for (iEdge = inCommingArcs.begin(); iEdge != inCommingArcs.end(); iEdge++)
	{
		if (*iEdge == predArc)
		{
			inCommingArcs.erase(iEdge, iEdge + 1);
			return 0;
		}
	}

	return -1;
}

//remove an outgoing edge
int REGI_NODE::remove_Succ_Arc(REGI_ARC* succArc)
{
	std::vector<REGI_ARC*>::iterator iEdge;

	for (iEdge = outGoingArcs.begin(); iEdge != outGoingArcs.end(); iEdge++)
	{
		if (*iEdge == succArc)
		{
			outGoingArcs.erase(iEdge, iEdge + 1);
			return 0;
		}
	}

	return -1;
}

//returns true if there is an edge between this node and next node
bool REGI_NODE::is_Connected_To(REGI_NODE* nextNode)
{
	std::vector<REGI_NODE*> nextNodes = Get_Next_Nodes();
	for (int i = 0; i < (int) nextNodes.size(); i++)
	{
		if (nextNodes[i]->get_ID() == nextNode->get_ID())
		{
			return true;
		}
	}

	return false;
}
//**************************Scheduling********************************//

REGI_Scheduling_Info* REGI_NODE::get_Sched_Info()
{
	return sched_info;
}

bool REGI_NODE::is_ready_to_schedule_ASAP(int &time)
{
	time = 0;
	int current_time;
	std::vector<REGI_NODE*> prev_nodes = Get_Prev_Nodes_Same_Iteration();
	for (int i = 0; i < (int) prev_nodes.size(); i++)
	{
		if (!prev_nodes[i]->get_Sched_Info()->is_ASAP_Initiated())
		{
			return false;
		}
		current_time = prev_nodes[i]->get_Sched_Info()->get_ASAP() + prev_nodes[i]->get_Latency();
		if (current_time > time)
		{
			time = current_time;
		}
	}
	return true;
}

bool REGI_NODE::is_ready_to_schedule_ALAP(int &time)
{
	time = MAXINT;
	int current_time;
	std::vector<REGI_NODE*> next_nodes = Get_Next_Nodes_Same_Iteration();
	for (int i = 0; i < (int) next_nodes.size(); i++)
	{
		if (!next_nodes[i]->get_Sched_Info()->is_ALAP_Initiated())
		{
			return false;
		}
		current_time = next_nodes[i]->get_Sched_Info()->get_ALAP() - latency;
		if (current_time < time)
		{
			time = current_time;
		}
	}
	return true;
}

bool REGI_NODE::is_ready_to_schedule_Feasible_ASAP(int &time)
{
	time = 0;
	int current_time;
	std::vector<REGI_NODE*> prev_nodes = Get_Prev_Nodes_Same_Iteration();
	for (int i = 0; i < (int) prev_nodes.size(); i++)
	{
		if (!prev_nodes[i]->get_Sched_Info()->is_Feasible_ASAP_Initiated())
		{
			return false;
		}
		current_time = prev_nodes[i]->get_Sched_Info()->get_Feasible_ASAP() + prev_nodes[i]->get_Latency();
		if (current_time > time)
		{
			time = current_time;
		}
	}
	return true;
}

bool REGI_NODE::is_ready_to_schedule_Feasible_ALAP(int &time)
{
	time = MAXINT;
	int current_time;
	std::vector<REGI_NODE*> next_nodes = Get_Next_Nodes_Same_Iteration();
	if ((int) next_nodes.size() > 0)
	{

		for (int i = 0; i < (int) next_nodes.size(); i++)
		{
			if (!next_nodes[i]->get_Sched_Info()->is_Feasible_ALAP_Initiated())
			{
				//printf("Node %d is not scheduled yet\n", next_nodes[i]->get_ID());

				return false;
			}
			current_time = next_nodes[i]->get_Sched_Info()->get_Feasible_ALAP() - latency;
			if (current_time < time)
			{
				time = current_time;
			}
		}
		return true;
	}
	else
	{
		next_nodes = Get_Next_Nodes();
		for (int i = 0; i < (int) next_nodes.size(); i++)
		{
			if (!next_nodes[i]->get_Sched_Info()->is_Feasible_ALAP_Initiated())
			{
				//printf("Node %d is not scheduled yet\n", next_nodes[i]->get_ID());
				return false;
			}
			current_time = next_nodes[i]->get_Sched_Info()->get_Feasible_ALAP() - latency;
			if (current_time < time)
			{
				time = current_time;
			}
		}
		return true;
	}
}
bool REGI_NODE::is_ready_to_schedule_modulo(int &time)
{
	time = 0;
	int current_time;
	if (inCommingArcs.size() == 0)
	{
		time = 0;
		return true;
	}
	std::vector<REGI_NODE*> prev_nodes = Get_Prev_Nodes_Same_Iteration();
	if ((int) prev_nodes.size() != 0)
	{
		for (int i = 0; i < (int) prev_nodes.size(); i++)
		{
			if (!prev_nodes[i]->get_Sched_Info()->is_CURRENT_Initiated())
			{
				return false;
			}
			current_time = prev_nodes[i]->get_Sched_Info()->get_Current() + prev_nodes[i]->get_Latency();
			if (current_time > time)
			{
				time = current_time;
			}
		}
	}
	else
	{
		prev_nodes = Get_Prev_Nodes();
		for (int i = 0; i < (int) prev_nodes.size(); i++)
		{
			if (!prev_nodes[i]->get_Sched_Info()->is_CURRENT_Initiated())
			{
				return false;
			}

		}
		time = 0;
	}

	return true;
}

bool REGI_NODE::is_ready_to_schedule_modulo_backward(int &time)
{

	time = get_Sched_Info()->get_Feasible_ALAP();
	int current_time = get_Sched_Info()->get_Feasible_ALAP();
	if (outGoingArcs.size() == 0)
	{
		time = get_Sched_Info()->get_Feasible_ALAP();
		return true;
	}
	std::vector<REGI_NODE*> next_nodes = Get_Next_Nodes_Same_Iteration();
	if ((int) next_nodes.size() != 0)
	{
		for (int i = 0; i < (int) next_nodes.size(); i++)
		{
			if (!next_nodes[i]->get_Sched_Info()->is_CURRENT_Initiated())
			{
				return false;
			}
			current_time = next_nodes[i]->get_Sched_Info()->get_Current() - get_Latency();
			if (current_time < time)
			{
				time = current_time;
			}
		}
	}
	else
	{
		next_nodes = Get_Next_Nodes();
		for (int i = 0; i < (int) next_nodes.size(); i++)
		{
			if (!next_nodes[i]->get_Sched_Info()->is_CURRENT_Initiated())
			{
				continue;
			}
			current_time = next_nodes[i]->get_Sched_Info()->get_Current() - get_Latency();
			if (current_time < time)
			{
				time = current_time;
			}

		}
	}

	return true;

}

bool REGI_NODE::has_multiple_constrains_modulo_backward_at_time(int time, std::vector<REGI_NODE*> &constrainers)
{

	int counter = 0;
	constrainers.clear();
	std::vector<REGI_NODE*> next_nodes = Get_Next_Nodes_Same_Iteration();

	std::vector<REGI_NODE*> prev_next_node;

	if ((int) next_nodes.size() != 0)
	{
		for (int i = 0; i < (int) next_nodes.size(); i++)
		{
			if (!next_nodes[i]->get_Sched_Info()->is_CURRENT_Initiated())
			{
				continue;
			}
			if (time < next_nodes[i]->get_Sched_Info()->get_Current() - get_Latency())
			{
				next_nodes[i]->has_multiple_constrains_modulo_at_time(next_nodes[i]->get_Sched_Info()->get_Current(), prev_next_node);
				if ((int) prev_next_node.size() > 0)
				{
					constrainers.push_back(next_nodes[i]);
					counter++;
				}
			}

		}
	}
	if (counter > 1)
	{
		return true;

	}
	return false;

}

bool REGI_NODE::has_multiple_constrains_modulo_at_time(int time, std::vector<REGI_NODE*> &constrainers)
{

	int counter = 0;
	constrainers.clear();
	std::vector<REGI_NODE*> prev_nodes = Get_Prev_Nodes_Same_Iteration();
	if ((int) prev_nodes.size() != 0)
	{
		for (int i = 0; i < (int) prev_nodes.size(); i++)
		{
			if (!prev_nodes[i]->get_Sched_Info()->is_CURRENT_Initiated())
			{
				continue;
			}
			if (time > prev_nodes[i]->get_Sched_Info()->get_Current() + prev_nodes[i]->get_Latency())
			{
				counter++;
				constrainers.push_back(prev_nodes[i]);
			}

		}
	}
	if (counter > 1)
	{
		return true;

	}
	return false;

}

bool REGI_NODE::constrains_multiple_modulo_backward_at_time(int time, std::vector<REGI_NODE*> &constrainers)
{
	int counter = 0;
	constrainers.clear();
	std::vector<REGI_NODE*> next_nodes = Get_Next_Nodes_Same_Iteration();

	std::vector<REGI_NODE*> prev_next_node;

	if ((int) next_nodes.size() != 0)
	{
		for (int i = 0; i < (int) next_nodes.size(); i++)
		{
			if (!next_nodes[i]->get_Sched_Info()->is_CURRENT_Initiated())
			{
				continue;
			}
			if (time < next_nodes[i]->get_Sched_Info()->get_Current() - get_Latency())
			{
				constrainers.push_back(next_nodes[i]);
				counter++;

			}

		}
	}
	if (counter > 1)
	{
		return true;

	}
	return false;
}
//**************************Scheduling********************************//

//**************************cycle DetectionS********************************//
void REGI_NODE::Set_Index_Cycle(int index)
{
	this->index_cycle = index;
	index_defined_cycle = true;
}

int REGI_NODE::get_Index_Cycle()
{
	return index_cycle;
}

void REGI_NODE::Set_Low_Index_Cycle(int index)
{
	this->low_index_cycle = index;
}

int REGI_NODE::get_Low_Index_Cycle()
{
	return low_index_cycle;
}

bool REGI_NODE::Is_Index_Defined_Cycle()
{
	return index_defined_cycle;
}

void REGI_NODE::Reset_Cycle_Index()
{
	index_cycle = -1;
	low_index_cycle = -1;
	index_defined_cycle = false;
}

//******************************************************************************NODE************************************************************************************//

//******************************************************************************DFG************************************************************************************//

REGI_DFG::~REGI_DFG()
{
}

REGI_DFG::REGI_DFG()
{
	//keep track of last edge IDs
	ARC_Max_Index = 0;

	//keep track of node IDs
	Node_Max_Index = 0;
	if (DEBUG_1)
	{
		printf("DFG to be created\n");
	}
	MAX_SCHEDULE_LEN = 0;
}

REGI_DFG*
REGI_DFG::Copy()
{
	REGI_DFG* retVal;
	retVal = new REGI_DFG();
	retVal->CGRA_Y_Dim = CGRA_Y_Dim;
	REGI_NODE* tempNode;

	for (int i = 0; i < (int) _node_Set.size(); i++)
	{

		tempNode = new REGI_NODE(_node_Set[i]->get_Instruction(), _node_Set[i]->get_Latency(), _node_Set[i]->get_ID(), _node_Set[i]->get_Name(),
		                _node_Set[i]->get_LLVM_Instruction());

		retVal->insert_Node(tempNode);

		//printf("Node %d is inserted\n",_node_Set[i]->get_ID());
	}

	for (int i = 0; i < (int) _ARC_Set.size(); i++)
	{

		retVal->make_Arc(retVal->get_Node(_ARC_Set[i]->get_From_Node()->get_ID()), retVal->get_Node(_ARC_Set[i]->get_To_Node()->get_ID()),
		                _ARC_Set[i]->get_ID(), _ARC_Set[i]->Get_Inter_Iteration_Distance(), _ARC_Set[i]->Get_Dependency_Type());
		//printf("ARC between node %d and %d is inserted\n",_ARC_Set[i]->get_From_Node()->get_ID(),_ARC_Set[i]->get_To_Node()->get_ID());

	}
	for (int i = 0; i < (int) _node_Set.size(); i++)
	{

		if (_node_Set[i]->is_Load_Address_Generator())
		{
			retVal->get_Node(_node_Set[i]->get_ID())->set_Load_Address_Generator(retVal->get_Node(_node_Set[i]->get_Related_Node()->get_ID()));
		}
		else if (_node_Set[i]->is_Load_Data_Bus_Read())
		{
			retVal->get_Node(_node_Set[i]->get_ID())->set_Load_Data_Bus_Read(retVal->get_Node(_node_Set[i]->get_Related_Node()->get_ID()));
		}
		else if (_node_Set[i]->is_Store_Address_Generator())
		{
			retVal->get_Node(_node_Set[i]->get_ID())->set_Store_Address_Generator(retVal->get_Node(_node_Set[i]->get_Related_Node()->get_ID()));
		}
		else if (_node_Set[i]->is_Store_Data_Bus_Write())
		{
			retVal->get_Node(_node_Set[i]->get_ID())->set_Store_Data_Bus_Write(retVal->get_Node(_node_Set[i]->get_Related_Node()->get_ID()));

		}

	}
	retVal->Node_Max_Index = Node_Max_Index;
	retVal->ARC_Max_Index = ARC_Max_Index;

	return retVal;

}

void REGI_DFG::insert_Node(REGI_NODE *pNode)
{
	//printf("a new node %d is to be inserted\n", pNode->get_ID());
	if (pNode->get_ID() > Node_Max_Index)
	{
		Node_Max_Index = pNode->get_ID();
	}
	_node_Set.push_back(pNode);
}

bool REGI_DFG::insert_Node_in_between_input(REGI_NODE* pNode, REGI_NODE* nNode, REGI_NODE* newNode)
{

	REGI_ARC *arc;
	std::vector<REGI_NODE*> nextNodes;
	std::vector<REGI_ARC*>::iterator iEdge;
	for (iEdge = _ARC_Set.begin(); iEdge != _ARC_Set.end(); iEdge++)
	{
		arc = *iEdge;
		if (arc->get_From_Node()->get_ID() == pNode->get_ID() && arc->get_To_Node()->get_ID() == nNode->get_ID())

		{
			_ARC_Set.erase(iEdge, iEdge + 1);
			pNode->remove_Succ_Arc(arc);
			nNode->remove_Pred_Arc(arc);
			make_Arc(pNode, newNode, ARC_Max_Index++, arc->Get_Inter_Iteration_Distance(), arc->Get_Dependency_Type());
			make_Arc(newNode, nNode, ARC_Max_Index++, 0, TrueDep);
			return true;
		}
	}

	return false;

}

int REGI_DFG::insert_Node_in_between_output(REGI_NODE* pNode, REGI_NODE* nNode, REGI_NODE* newNode)
{

	REGI_ARC *arc;
	std::vector<REGI_NODE*> nextNodes;
	std::vector<REGI_ARC*>::iterator iEdge;
	for (iEdge = _ARC_Set.begin(); iEdge != _ARC_Set.end(); iEdge++)
	{
		arc = *iEdge;
		if (arc->get_From_Node()->get_ID() == pNode->get_ID() && arc->get_To_Node()->get_ID() == nNode->get_ID())

		{
			_ARC_Set.erase(iEdge, iEdge + 1);
			pNode->remove_Succ_Arc(arc);
			nNode->remove_Pred_Arc(arc);
			make_Arc(pNode, newNode, ARC_Max_Index++, 0, TrueDep);
			make_Arc(newNode, nNode, ARC_Max_Index++, arc->Get_Inter_Iteration_Distance(), arc->Get_Dependency_Type());
			return 0;
		}
	}

	return -1;

}
//return a node with given ID number
REGI_NODE*
REGI_DFG::get_Node(int number)
{
	std::vector<REGI_NODE*>::iterator iNode1;
	for (iNode1 = _node_Set.begin(); iNode1 != _node_Set.end(); iNode1++)
	{
		if ((*iNode1)->get_ID() == number)
		{
			//printf("Node number %d is found\n", number);
			return *iNode1;
		}

	}
	//printf("Node number %d is not found\n",number);
	return NULL;
}

REGI_NODE* REGI_DFG::get_Node(Value* ins)
{
	std::vector<REGI_NODE*>::iterator iNode1;
	for (iNode1 = _node_Set.begin(); iNode1 != _node_Set.end(); iNode1++)
	{
		if ((*iNode1)->get_LLVM_Instruction() == ins)
		{
			//printf("Node number %d is found\n", number);
			return *iNode1;
		}

	}
	//printf("Node number %d is not found\n",number);
	return NULL;

}
REGI_NODE* REGI_DFG::get_Node_Mem_Add(Value* ins)
{
	std::vector<REGI_NODE*>::iterator iNode1;
	for (iNode1 = _node_Set.begin(); iNode1 != _node_Set.end(); iNode1++)
	{
		if ((*iNode1)->get_LLVM_Instruction() == ins && ((*iNode1)->get_Instruction() == st_add || (*iNode1)->get_Instruction() == ld_add))
		{
			//printf("Node number %d is found\n", number);
			return *iNode1;
		}

	}
	//printf("Node number %d is not found\n",number);
	return NULL;

}
REGI_NODE* REGI_DFG::get_Node_Mem_Data(Value* ins)
{
	std::vector<REGI_NODE*>::iterator iNode1;
	for (iNode1 = _node_Set.begin(); iNode1 != _node_Set.end(); iNode1++)
	{
		if ((*iNode1)->get_LLVM_Instruction() == ins && ((*iNode1)->get_Instruction() == st_data || (*iNode1)->get_Instruction() == ld_data))
		{
			//printf("Node number %d is found\n", number);
			return *iNode1;
		}

	}
	//printf("Node number %d is not found\n",number);
	return NULL;

}

//make an edge between two nodes
void REGI_DFG::make_Arc(REGI_NODE* pNin, REGI_NODE* pNout, int ID, int Distance,
DataDepType dep,int operandOrder)
{
	if (pNin->is_Connected_To(pNout))
	{
		return;
	}
	if (pNin->get_ID() == pNout->get_ID() && pNin->has_self_loop())
	{
		return;
	}
	REGI_ARC *pArc;
	pArc = new REGI_ARC(ID, Distance,operandOrder);
	pArc->Set_Dependency_Type(dep);
	pArc->Set_From_Node(pNin);
	pArc->Set_To_Node(pNout);

	if (pNin->get_ID() == pNout->get_ID())
	{
		pNin->set_self_loop(pArc);
		//printf("self loop\n");
	}
	else
	{
		pNout->add_Pred_Arc(pArc);
		pNin->add_Succ_Arc(pArc);
		//printf("nonself loop\n");
	}

	_ARC_Set.push_back(pArc);

	if (ARC_Max_Index < ID)
	{
		ARC_Max_Index = ID;
	}

    errs() <<"ARC: "<<pNin->get_ID()<<","<<pNout->get_ID()<<","<<Distance<<"\n";

}
//true if given set contains given node
bool REGI_DFG::contains(std::vector<REGI_NODE*> &nodeset, REGI_NODE* node)
{
	std::vector<REGI_NODE*>::iterator iNode1;
	for (iNode1 = nodeset.begin(); iNode1 != nodeset.end(); iNode1++)
	{
		if ((*iNode1)->get_ID() == node->get_ID())
			return true;

	}
	return false;
}
//true if two given sets have any node in commmon
bool REGI_DFG::Not_Empty_Intersect(std::vector<REGI_NODE*> &nodeset1, std::vector<REGI_NODE*> &nodeset2)
{
	std::vector<REGI_NODE*>::iterator iNode1;
	for (iNode1 = nodeset2.begin(); iNode1 != nodeset2.end(); iNode1++)
	{
		if (contains(nodeset1, *iNode1))
			return true;

	}
	return false;
}
//bool REGI_DFG::contains(std::vector<int> &set, int value);
//remove a node from given set
void REGI_DFG::Remove(std::vector<REGI_NODE*> &nodeset, REGI_NODE* node)
{
	std::vector<REGI_NODE*>::iterator iNode;

	for (iNode = nodeset.begin(); iNode != nodeset.end(); iNode++)
	{
		if ((*iNode)->get_ID() == node->get_ID())
		{
			nodeset.erase(iNode, iNode + 1);
			return;
		}
	}

}

void REGI_DFG::Remove(std::vector<REGI_NODE*> &nodeset, std::vector<REGI_NODE*> &toRemoveNodes)
{
	std::vector<REGI_NODE*>::iterator iNode;
	for (iNode = toRemoveNodes.begin(); iNode != toRemoveNodes.end(); iNode++)
	{
		Remove(nodeset, *iNode);
	}
}
//delete a node from node set
int REGI_DFG::delete_Node(REGI_NODE *pNode)
{
    int retval=0;
    for (std::vector<REGI_NODE*>::iterator it = _node_Set.begin(); it!=_node_Set.end(); ++it)
    {
        if ((*it)==pNode)
        {
            _node_Set.erase(it, it+1);
            retval=1;
            break;
        }

    }
    for (std::vector<REGI_ARC*>::iterator it = _ARC_Set.begin(); it!=_ARC_Set.end(); ++it)
    {
        if ((*it)->get_From_Node()==pNode)
        {
            (*it)->get_To_Node()->remove_Pred_Arc(*it);
            _ARC_Set.erase(it, it+1);
            it=_ARC_Set.begin();
            continue;
        }
        if ((*it)->get_To_Node()==pNode)
        {
            (*it)->get_From_Node()->remove_Succ_Arc(*it);
            _ARC_Set.erase(it, it+1);
            it=_ARC_Set.begin();
            continue;
        }

    }
    return retval;


}

//remove and edge from edge set
void REGI_DFG::Remove_Arc(REGI_ARC* arc)
{
	std::vector<REGI_ARC*>::iterator iEdge;
	for (iEdge = _ARC_Set.begin(); iEdge != _ARC_Set.end(); iEdge++)
	{
		if (*iEdge == arc)
		{
			_ARC_Set.erase(iEdge, iEdge + 1);
			break;

		}
	}
}

//remove the arc between two nodes and from arc set
void REGI_DFG::Remove_Arc(REGI_NODE *pNode, REGI_NODE *nNode)
{
	REGI_ARC *edge;
	std::vector<REGI_ARC*>::iterator iEdge;
	for (iEdge = _ARC_Set.begin(); iEdge != _ARC_Set.end(); iEdge++)
	{
		edge = *iEdge;
		if (edge->get_From_Node()->get_ID() == pNode->get_ID() && edge->get_To_Node()->get_ID() == nNode->get_ID())
		{

			_ARC_Set.erase(iEdge, iEdge + 1);
			pNode->remove_Succ_Arc(edge);
			nNode->remove_Pred_Arc(edge);
			return;
		}
	}
}

//get the edge between two nodes and from edge set
REGI_ARC*
REGI_DFG::get_Arc(REGI_NODE *pNode, REGI_NODE *nNode)
{
	REGI_ARC *edge;
	std::vector<REGI_ARC*>::iterator iEdge;
	for (iEdge = _ARC_Set.begin(); iEdge != _ARC_Set.end(); iEdge++)
	{
		edge = *iEdge;
		if (edge->get_From_Node()->get_ID() == pNode->get_ID() && edge->get_To_Node()->get_ID() == nNode->get_ID())
		{

			return edge;
		}
	}
	return NULL;
}

//remove a set of edges
void REGI_DFG::Remove_Arcs(std::vector<REGI_ARC*> &arcs)
{
	std::vector<REGI_ARC*>::iterator iEdge;
	for (iEdge = arcs.begin(); iEdge != arcs.end(); iEdge++)
	{
		Remove_Arc(*iEdge);
	}

}
//intersect two sets
std::vector<REGI_NODE*> REGI_DFG::Intersect(std::vector<REGI_NODE*> &nodeset1, std::vector<REGI_NODE*> &nodeset2)
{
	std::vector<REGI_NODE*> retVal;
	std::vector<REGI_NODE*>::iterator iNode1;
	for (iNode1 = nodeset2.begin(); iNode1 != nodeset2.end(); iNode1++)
	{
		if (contains(nodeset1, *iNode1) && !contains(retVal, *iNode1))
			retVal.push_back(*iNode1);

	}
	return retVal;

}

//union two sets
std::vector<REGI_NODE*> REGI_DFG::Union(std::vector<REGI_NODE*> &nodeset1, std::vector<REGI_NODE*> &nodeset2)
{
	std::vector<REGI_NODE*> retVal;
	std::vector<REGI_NODE*>::iterator iNode1;
	for (iNode1 = nodeset1.begin(); iNode1 != nodeset1.end(); iNode1++)
	{
		if (!contains(retVal, *iNode1))
			retVal.push_back(*iNode1);

	}
	for (iNode1 = nodeset2.begin(); iNode1 != nodeset2.end(); iNode1++)
	{
		if (!contains(retVal, *iNode1))
			retVal.push_back(*iNode1);

	}
	return retVal;
}

std::vector<REGI_NODE*> REGI_DFG::Subtract(std::vector<REGI_NODE*> &set1, std::vector<REGI_NODE*> &set2)
{
	std::vector<REGI_NODE*> retVal;
	std::vector<REGI_NODE*>::iterator iNode1;
	for (iNode1 = set1.begin(); iNode1 != set1.end(); iNode1++)
	{
		if (!contains(set2, *iNode1))
			retVal.push_back(*iNode1);

	}
	return retVal;
}

//topological sort DFG
std::queue<REGI_NODE*> REGI_DFG::Topological_Sort()
{
	std::vector<REGI_NODE*>::iterator iNode;
	std::queue<REGI_NODE*> visitedQueue;
	std::queue<REGI_NODE*> sorted;
	std::vector<REGI_NODE*> visited;
	std::vector<REGI_NODE*> next;
	std::vector<REGI_NODE*> prevs;
	std::vector<REGI_NODE*> intersect;
	visitedQueue.push(_node_Set[0]);

	REGI_NODE* temp;
	while (true)
	{
		temp = visitedQueue.front();
		visitedQueue.pop();
		sorted.push(temp);
		visited.push_back(temp);
		next = temp->Get_Next_Nodes();

		for (iNode = next.begin(); iNode != next.end(); iNode++)
		{
			prevs = (*iNode)->Get_Prev_Nodes();
			intersect = Intersect(visited, prevs);
			if (intersect.size() == prevs.size())
			{
				visitedQueue.push(*iNode);
			}

		}
		if (visitedQueue.size() == 0 && (visited.size() == _node_Set.size()))
		{
			break;
		}
		if (visitedQueue.size() == 0)
		{
			for (iNode = _node_Set.begin(); iNode != _node_Set.end(); iNode++)
			{

				if (!contains(visited, (*iNode)))
				{
					visitedQueue.push(*iNode);
				}

			}
		}
	}
	return sorted;
}

void REGI_DFG::Strongly_Connected(std::vector<std::vector<REGI_NODE*> > &results)
{
	std::stack<REGI_NODE*> S;
	std::vector<REGI_NODE*> SCopy;
	int index = 0;
	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		if (!_node_Set[i]->Is_Index_Defined_Cycle())
		{

			Strongly_Connected(_node_Set[i], S, SCopy, index, results);

		}

	}
}

void REGI_DFG::Strongly_Connected(REGI_NODE* currentNode, std::stack<REGI_NODE*> &S, std::vector<REGI_NODE*> &SCopy, int &index,
                std::vector<std::vector<REGI_NODE*> > &results)
{
	std::vector<REGI_NODE*> local;
	currentNode->Set_Index_Cycle(index);
	currentNode->Set_Low_Index_Cycle(index);
	index++;
	S.push(currentNode);
	SCopy.push_back(currentNode);
	std::vector<REGI_NODE*> nextNodes = currentNode->Get_Next_Nodes();

	for (int i = 0; i < (int) nextNodes.size(); i++)
	{
		if (!nextNodes[i]->Is_Index_Defined_Cycle())
		{

			Strongly_Connected(nextNodes[i], S, SCopy, index, results);

			if (nextNodes[i]->get_Low_Index_Cycle() < currentNode->get_Low_Index_Cycle())
			{
				currentNode->Set_Low_Index_Cycle(nextNodes[i]->get_Low_Index_Cycle());
			}
		}
		else if (contains(SCopy, nextNodes[i]))
		{
			if (nextNodes[i]->get_Index_Cycle() < currentNode->get_Low_Index_Cycle())
			{
				currentNode->Set_Low_Index_Cycle(nextNodes[i]->get_Index_Cycle());
			}
		}
	}

	if (currentNode->get_Index_Cycle() == currentNode->get_Low_Index_Cycle())
	{
		//cout<<" new Set "<<currentNode->getNumber()<<" Low index "<<currentNode->getLowIndex() << " index "<< currentNode->getIndex()<<endl;
		while ((int) S.size() != 0)
		{
			REGI_NODE* temp = S.top();
			local.push_back(temp);
			Remove(SCopy, temp);
			S.pop();
			if (currentNode->get_ID() == temp->get_ID())
			{
				break;
			}
		}

		results.push_back(local);
	}
	else
	{
		//cout<<" no new Set "<<currentNode->getNumber()<<" Low index "<<currentNode->getLowIndex() << " index "<< currentNode->getIndex()<<endl;
	}
}
//generate a unique ID for nodes
int REGI_DFG::Get_Unique_Index()
{
	return ++Node_Max_Index;
}
int REGI_DFG::Increase_ID_Index()
{
	return ++Node_Max_Index;
}
//return all nodes
std::vector<REGI_NODE*> REGI_DFG::getSetOfVertices()
{
	return _node_Set;
}

//return all nodes
std::vector<REGI_NODE*> REGI_DFG::getSetOfOperations()
{
	return _node_Set;
}
std::vector<REGI_ARC*> REGI_DFG::getSetOfArcs()
{
	return _ARC_Set;
}
void REGI_DFG::Dot_Print_DFG(std::string filename)
{
	std::ofstream dotFile;
	std::string graphname = filename;
	filename.append("DFG.dot");
	dotFile.open(filename.c_str());

	dotFile << "digraph " << graphname << " { \n{";

	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		if (_node_Set[i]->is_Mem_Operation())
		{
			dotFile << "\n" << _node_Set[i]->get_ID() << " [color=blue ];\n";
		}
		else if (_node_Set[i]->is_Routing_Operation())
		{
			dotFile << "\n" << _node_Set[i]->get_ID() << " [color=green ];\n";
		}
		else
		{
			dotFile << "\n" << _node_Set[i]->get_ID() << " [color=red, label=\"" << _node_Set[i]->get_Name() << "\"];\n";

		}

	}
	for (int i = 0; i < (int) _ARC_Set.size(); i++)
	{
		if (_ARC_Set[i]->Get_Dependency_Type() == PredDep)
		{
			if (_ARC_Set[i]->Get_Inter_Iteration_Distance() == 0)
			{
				dotFile << _ARC_Set[i]->get_From_Node()->get_ID() << " -> " << _ARC_Set[i]->get_To_Node()->get_ID()
				                << " [style=bold, color=blue ]\n";
			}
			else
			{
				dotFile << _ARC_Set[i]->get_From_Node()->get_ID() << " -> " << _ARC_Set[i]->get_To_Node()->get_ID()
				                << " [style=bold, color=blue, label=" << _ARC_Set[i]->Get_Inter_Iteration_Distance() << "] \n";
			}

		}

		else if (_ARC_Set[i]->Get_Inter_Iteration_Distance() == 0)
		{
			dotFile << _ARC_Set[i]->get_From_Node()->get_ID() << " -> " << _ARC_Set[i]->get_To_Node()->get_ID() << "\n";
		}
		else
		{
			dotFile << _ARC_Set[i]->get_From_Node()->get_ID() << " -> " << _ARC_Set[i]->get_To_Node()->get_ID() << " [style=bold, color=red, label="
			                << _ARC_Set[i]->Get_Inter_Iteration_Distance() << "] \n";
		}

	}
	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		if (_node_Set[i]->is_Load_Address_Generator() || _node_Set[i]->is_Store_Address_Generator())
		{
			dotFile << _node_Set[i]->get_ID() << " -> " << _node_Set[i]->get_Related_Node()->get_ID()
			                << " [style=dotted, color=blue, label= mem] \n";

		}
	}
	dotFile << "\n}\n";

	dotFile << "\n}";
	dotFile.close();
}

void REGI_DFG::Dot_Print_DFG_With_Schedule(std::string filename)
{
	std::ofstream dotFile;
	std::string graphname = filename;
	filename.append("DFG.dot");
	dotFile.open(filename.c_str());

	dotFile << "digraph " << graphname << " { \n{";

	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		if (_node_Set[i]->is_Mem_Operation())
		{
			dotFile << "\n" << _node_Set[i]->get_ID() << " [color=blue ];\n";
		}

		if (_node_Set[i]->is_Routing_Operation())
		{
			dotFile << "\n" << _node_Set[i]->get_ID() << " [color=green ];\n";
		}

	}

	for (int i = 0; i < (int) _ARC_Set.size(); i++)
	{
		//tempnode=itoa(_edgeSet[i]->getInNode()->getNumber());
		if (_ARC_Set[i]->Get_Inter_Iteration_Distance() == 0)
		{
			dotFile << _ARC_Set[i]->get_From_Node()->get_ID() << " -> " << _ARC_Set[i]->get_To_Node()->get_ID() << "[constraint=false]\n";
		}
		else
		{
			dotFile << _ARC_Set[i]->get_From_Node()->get_ID() << " -> " << _ARC_Set[i]->get_To_Node()->get_ID() << " [style=bold, color=red, label="
			                << _ARC_Set[i]->Get_Inter_Iteration_Distance() << ",constraint=false] \n";
		}

	}

	dotFile << "\n}\n";

	dotFile << "\n{\n node [shape=plaintext]; \n T0 ";
	for (int i = 1; i < MAX_SCHEDULE_LEN + 1; i++)
	{

		dotFile << " -> T" << i;
	}
	dotFile << ";\n}";

	/*for (int i = 0; i < (int) _node_Set.size(); i++)
	 {
	 if (_node_Set[i]->is_Mem_Operation())
	 {
	 dotFile << "{ rank = same; \n";

	 dotFile << _node_Set[i]->get_ID() << "; "
	 << _node_Set[i]->get_Related_Node()->get_ID() << ";\n";
	 dotFile << "}; \n";
	 }
	 }*/

	dotFile << "{ rank = source; \n";
	dotFile << "T" << 0 << ";";
	dotFile << "\n }; \n";

	bool any = true;
	int rank = 0;
	while (any || rank < MAX_SCHEDULE_LEN + 1)
	{

		any = false;
		dotFile << "{ rank = same; \n";
		for (int i = 0; i < (int) _node_Set.size(); i++)
		{
			if (_node_Set[i]->get_Sched_Info()->get_Current() == rank)
			{

				dotFile << _node_Set[i]->get_ID() << "; ";
				any = true;

			}
		}
		if (any)
		{
			dotFile << "T" << rank << ";";
		}
		dotFile << "\n }; \n";
		rank++;

	}
	dotFile << "\n}";
	dotFile.close();
}

void REGI_DFG::Dot_Print_DFG_With_Modulo_Schedule(std::string filename, int II)
{

	std::ofstream dotFile;
	std::string graphname = filename;
	filename.append("DFG.dot");
	dotFile.open(filename.c_str());

	dotFile << "digraph " << graphname << " { \n{";

	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		if (_node_Set[i]->is_Mem_Operation())
		{
			dotFile << "\n" << _node_Set[i]->get_ID() << " [color=blue ];\n";
		}

		if (_node_Set[i]->is_Routing_Operation())
		{
			dotFile << "\n" << _node_Set[i]->get_ID() << " [color=green ];\n";
		}

	}

	for (int i = 0; i < (int) _ARC_Set.size(); i++)
	{
		//tempnode=itoa(_edgeSet[i]->getInNode()->getNumber());
		if (_ARC_Set[i]->Get_Inter_Iteration_Distance() == 0)
		{
			dotFile << _ARC_Set[i]->get_From_Node()->get_ID() << " -> " << _ARC_Set[i]->get_To_Node()->get_ID() << "[constraint=false];\n";
		}
		else
		{
			dotFile << _ARC_Set[i]->get_From_Node()->get_ID() << " -> " << _ARC_Set[i]->get_To_Node()->get_ID() << " [style=bold, color=red, label="
			                << _ARC_Set[i]->Get_Inter_Iteration_Distance() << ", constraint=false] \n";
		}

	}

	dotFile << "\n}\n";

	dotFile << "\n{\n node [shape=plaintext]; \n T0 ";
	for (int i = 1; i < II; i++)
	{

		dotFile << " -> T" << i;
	}
	dotFile << ";\n}";

	/*for (int i = 0; i < (int) _node_Set.size(); i++)
	 {
	 if (_node_Set[i]->is_Mem_Operation())
	 {
	 dotFile << "{ rank = same; \n";

	 dotFile << _node_Set[i]->get_ID() << "; "
	 << _node_Set[i]->get_Related_Node()->get_ID() << ";\n";
	 dotFile << "}; \n";
	 }
	 }*/
	bool any = true;
	int rank = 0;
	while (any)
	{

		any = false;
		dotFile << "{ rank = same; \n";
		for (int i = 0; i < (int) _node_Set.size(); i++)
		{
			if (_node_Set[i]->get_Sched_Info()->get_Modulo_Current() == rank)
			{

				dotFile << _node_Set[i]->get_ID() << "; ";
				any = true;

			}
		}
		if (any)
		{
			dotFile << "T" << rank << ";";
		}
		dotFile << "\n }; \n";
		rank++;

	}
	dotFile << "\n}";
	dotFile.close();

}

void REGI_DFG::PrintSets(std::vector<std::vector<REGI_NODE*> > &sets)
{
	printf("\nCurrent Partition\n");
	for (int i = 0; i < (int) sets.size(); i++)
	{
		PrintSet(sets[i]);
		printf("\n");

	}
	printf("\n");
}

int REGI_DFG::get_number_of_nodes()
{
	return (int) _node_Set.size();
}

void REGI_DFG::PrintSet(std::vector<REGI_NODE*> &set)
{
	std::vector<REGI_NODE*>::iterator iNode;
	for (iNode = set.begin(); iNode != set.end(); iNode++)
	{
		printf("%d ,", (*iNode)->get_ID());

	}

}

std::vector<REGI_NODE*> REGI_DFG::get_next_nodes_same_iteration(std::vector<REGI_NODE*> &nodes)
{
	std::vector<REGI_NODE*> retval;
	std::vector<REGI_NODE*> current_next;
	for (int i = 0; i < (int) nodes.size(); i++)
	{
		current_next = nodes[i]->Get_Next_Nodes_Same_Iteration();
		retval = Union(current_next, retval);
	}
	return retval;
}

std::vector<REGI_NODE*> REGI_DFG::get_next_nodes_same_iteration_update_latency(std::vector<REGI_NODE*> &nodes, bool &change)
{
	std::vector<REGI_NODE*> retval;
	std::vector<REGI_NODE*> current_next;
	int next_latency;
	for (int i = 0; i < (int) nodes.size(); i++)
	{
		current_next = nodes[i]->Get_Next_Nodes_Same_Iteration();
		next_latency = nodes[i]->get_Index_Cycle() + nodes[i]->get_Latency();
		for (int j = 0; j < (int) current_next.size(); j++)
		{
			if (current_next[j]->Is_Index_Defined_Cycle())
			{
				if (next_latency > (current_next[j]->get_Index_Cycle()))
				{
					change = true;
					current_next[j]->Set_Index_Cycle(next_latency);
				}
			}
			else
			{
				current_next[j]->Set_Index_Cycle(next_latency);
			}
		}

		retval = Union(current_next, retval);
	}
	return retval;
}

void REGI_DFG::reset_latency_to_nodes(std::vector<REGI_NODE*> &nodes)
{
	for (int i = 0; i < (int) nodes.size(); i++)
	{
		nodes[i]->Reset_Cycle_Index();
	}
}

std::vector<REGI_NODE*> REGI_DFG::get_set_of_start_nodes()
{
	std::vector<REGI_NODE*> retval;
	std::vector<REGI_NODE*> prev_nodes;
	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		prev_nodes = _node_Set[i]->Get_Prev_Nodes_Same_Iteration();
		if ((int) prev_nodes.size() == 0)
		{
			retval.push_back(_node_Set[i]);
		}

	}
	return retval;

}

std::vector<REGI_NODE*> REGI_DFG::get_set_of_end_nodes()
{
	std::vector<REGI_NODE*> retval;
	std::vector<REGI_NODE*> next_nodes;
	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		next_nodes = _node_Set[i]->Get_Next_Nodes_Same_Iteration();
		if ((int) next_nodes.size() == 0)
		{
			retval.push_back(_node_Set[i]);
		}

	}
	return retval;
}

void REGI_DFG::Fix_Phi_Nodes()
{
	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		REGI_NODE* current = _node_Set[i];
		if (current->get_Instruction() == select)
		{
			if ((int) current->Get_Prev_Nodes().size() > 3)
			{
				std::ostringstream os;
				int id = Get_Unique_Index();
				os << id;
				std::string newName = current->get_Name() + os.str();

				REGI_NODE * newNode = new REGI_NODE(select, current->get_Latency(), id, newName, current->get_LLVM_Instruction());
				std::vector<REGI_NODE *> prev_nodes = current->Get_Prev_Nodes();
				for (int j = 0; j < (int) prev_nodes.size(); j++)
				{
					REGI_ARC* CurrentArc = get_Arc(prev_nodes[j], current);

					if (CurrentArc->Get_Dependency_Type() == PredDep)
					{
						Remove_Arc(prev_nodes[j], current);
						make_Arc(CurrentArc->get_From_Node(), newNode, CurrentArc->get_ID(), CurrentArc->Get_Inter_Iteration_Distance(),
						                PredDep);

						break;
					}
				}
				prev_nodes = current->Get_Prev_Nodes();
				for (int j = 0; j < (int) prev_nodes.size(); j++)
				{
					REGI_ARC* CurrentArc = get_Arc(prev_nodes[j], current);
					//if (CurrentArc==NULL) return;
					if (CurrentArc->Get_Dependency_Type() != PredDep)
					{
						Remove_Arc(prev_nodes[j], current);
						make_Arc(CurrentArc->get_From_Node(), newNode, CurrentArc->get_ID(), CurrentArc->Get_Inter_Iteration_Distance(),
						                CurrentArc->Get_Dependency_Type());

						break;
					}
				}
				prev_nodes = current->Get_Prev_Nodes();
				for (int j = 0; j < (int) prev_nodes.size(); j++)
				{
					REGI_ARC* CurrentArc = get_Arc(prev_nodes[j], current);
					if (CurrentArc->Get_Dependency_Type() != PredDep)
					{
						Remove_Arc(prev_nodes[j], current);
						if (CurrentArc == NULL)
							return;
						make_Arc(CurrentArc->get_From_Node(), newNode, CurrentArc->get_ID(), CurrentArc->Get_Inter_Iteration_Distance(),
						                CurrentArc->Get_Dependency_Type());

						break;
					}
				}
				make_Arc(newNode, current, Get_Unique_Index(), 0, TrueDep);
				insert_Node(newNode);
				i--;

			}
		}

	}
}

bool REGI_DFG::Has_conditional_clause()
{
	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		REGI_NODE* current = _node_Set[i];
		if (current->get_Instruction() == select)
		{
			return true;
		}

	}
	return false;

}

void REGI_DFG::Dump_Loop(std::string filename)
{

//DIPAL VERSION
std::ofstream edgeFile,nodeFile;
	std::string graphname_edge = filename;
	graphname_edge.append("_edge.txt");
	edgeFile.open(graphname_edge.c_str());

	std::string graphname_node = filename;
	graphname_node.append("_node.txt");
	nodeFile.open(graphname_node.c_str());
	
    for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		if (_node_Set[i]->is_Load_Address_Generator())
		{
			edgeFile << _node_Set[i]->get_ID() << "\t" <<
            _node_Set[i]->get_Related_Node()->get_ID() << "\t" << "0" << "\t" <<
            "LRE" << "\t0" << "\n";

		}
		if (_node_Set[i]->is_Store_Address_Generator())
		{
			edgeFile << _node_Set[i]->get_ID() << "\t" <<
            _node_Set[i]->get_Related_Node()->get_ID() << "\t" << "0" << "\t" <<
            "SRE" << "\t0" << "\n";

		}

        nodeFile << _node_Set[i]->get_ID() << "\t" << _node_Set[i]->get_Instruction() << "\t" << _node_Set[i]->get_Name() << "\n";

	}
	for (int i = 0; i < (int) _ARC_Set.size(); i++)
	{
		if (_ARC_Set[i]->Get_Dependency_Type() == PredDep)
		{
			edgeFile << _ARC_Set[i]->get_From_Node()->get_ID() << "\t" << _ARC_Set[i]->get_To_Node()->get_ID() << "\t"
			                << _ARC_Set[i]->Get_Inter_Iteration_Distance() <<
                            "\t" << "PRE"<<"\t" <<_ARC_Set[i]->GetOperandOrder() << "\n";
            printf("\n*********%d***********\n",_ARC_Set[i]->GetOperandOrder());

		}
		else
		{
			edgeFile << _ARC_Set[i]->get_From_Node()->get_ID() << "\t" << _ARC_Set[i]->get_To_Node()->get_ID() << "\t"
			                << _ARC_Set[i]->Get_Inter_Iteration_Distance() <<
                            "\t" << "TRU"<<"\t"<< _ARC_Set[i]->GetOperandOrder() << "\n";

            printf("\n*********%d***********\n",_ARC_Set[i]->GetOperandOrder());
		}

	}

	edgeFile.close();
    nodeFile.close();

//MAHDI VERSION
/*
    std::ostringstream node_file;
    std::ostringstream edge_file;
    node_file <<filename <<"_node.txt";
    edge_file <<filename <<"_edge.txt";
    std::ofstream nodeFile;
    std::ofstream edgeFile;
    nodeFile.open(node_file.str().c_str());
    for (std::vector<REGI_NODE*>::iterator it = _node_Set.begin(); it!=_node_Set.end(); ++ it)
    {
        nodeFile << (*it)->get_ID() <<"\t" << (int)((*it)->get_Instruction()) <<"\n";
    }
    nodeFile.close();

     edgeFile.open(edge_file.str().c_str());
    for (std::vector<REGI_ARC*>::iterator it = _ARC_Set.begin(); it!=_ARC_Set.end(); ++ it)
    {
        if ((*it)->Get_Dependency_Type()==TrueDep ||(*it)->Get_Dependency_Type()==MemoryDep )
        {
            edgeFile << (*it)->get_From_Node()->get_ID()<< "\t " << (*it)->get_To_Node()->get_ID() << "\t TRU\n";
        }

        else if ((*it)->Get_Dependency_Type()==PredDep)
        {
            edgeFile << (*it)->get_From_Node()->get_ID()<< "\t " << (*it)->get_To_Node()->get_ID() << "\t PRE\n";
        }
    }
    edgeFile.close();*/
/*

	for (int i = 0; i < (int) _node_Set.size(); i++)
	{
		if (_node_Set[i]->is_Load_Address_Generator())
		{
			edgeFile << _node_Set[i]->get_ID() << "\t" << _node_Set[i]->get_Related_Node()->get_ID() << "\t" << "0" << "\t" << "LRE" << "\n";

		}
		if (_node_Set[i]->is_Store_Address_Generator())
		{
			edgeFile << _node_Set[i]->get_ID() << "\t" << _node_Set[i]->get_Related_Node()->get_ID() << "\t" << "0" << "\t" << "SRE" << "\n";

		}

	}
	for (int i = 0; i < (int) _ARC_Set.size(); i++)
	{
		if (_ARC_Set[i]->Get_Dependency_Type() == PredDep)
		{
			edgeFile << _ARC_Set[i]->get_From_Node()->get_ID() << "\t" << _ARC_Set[i]->get_To_Node()->get_ID() << "\t"
			                << _ARC_Set[i]->Get_Inter_Iteration_Distance() << "\t" << "PRE" << "\n";

		}
		else
		{
			edgeFile << _ARC_Set[i]->get_From_Node()->get_ID() << "\t" << _ARC_Set[i]->get_To_Node()->get_ID() << "\t"
			                << _ARC_Set[i]->Get_Inter_Iteration_Distance() << "\t" << "TRU" << "\n";

		}

	}

	edgeFile.close();*/
}
void REGI_DFG::print_Loop_stats(int total, int total_dumped, int with_cond)
{
	std::ofstream statfile;
	std::string filename = "states.txt";

	statfile.open(filename.c_str(),std::fstream::app);
	statfile<<"Total = " << total <<"\tTotal Dumped = " << total_dumped << "\tWithCondition = "  << with_cond <<"\n";
	statfile.close();

}
/* namespace llvm */


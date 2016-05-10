//===- Hello.cpp - Example code from "Writing an LLVM Pass" ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements two versions of the LLVM "Hello World" pass described
// in docs/WritingAnLLVMPass.html
//
//===----------------------------------------------------------------------===//

#define DEBUG_TYPE "loopconstantmem"

#include "REGIDFG.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Value.h"
//#include "llvm/Function.h"
//#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopPass.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/Constants.h"
#include <string>
using namespace llvm;

STATISTIC(MahdiNodeID, "Counts number of loops greeted");
STATISTIC(MahdiEdgeID, "Counts number of loops greeted");

STATISTIC(TOTALLOOPS, "Counts number of loops greeted");
STATISTIC(TOTALDUMPEDLOOPS, "Counts number of loops greeted");

STATISTIC(CONDITIONALLOOPS, "Counts number of loops greeted");

namespace llvm
{
  // Hello - The first implementation, without getAnalysisUsage.
  struct LoopConstantMem: public LoopPass
  {
    static char ID;        // Pass identification, replacement for typeid
    int phiCounter;
    LoopConstantMem() :
      LoopPass(ID)
    {

    }
    //distance between 2 instructions, either 0 or 1 at this level
    //this function checks if both instructions are within one basic block
    //if so, we just need to find their  order within the block
    //If not, we need to travers basic blocks to find the order of their basicblocks
    int getDistance(Instruction *ins1, BasicBlock* bb1, Instruction *ins2, BasicBlock* bb2, std::vector<BasicBlock *> bbs, BasicBlock* loopLatch)
    {
      //both within the same basic blocks, find the order in BB
      if (bb1->getName() == bb2->getName())
      {
        errs() <<"************INSIDE getdistancce**************\n";
        for (BasicBlock::iterator BI_temp = bb1->begin(); BI_temp !=bb1->end(); ++BI_temp)
        {
          if (DEBUG_1)
          {
            errs() << "Name=" << BI_temp->getName() << "Value name=" << BI_temp->getValueName() << ",Opcode Name="
              << BI_temp->getOpcodeName() << ",OPCode=" << BI_temp->getOpcode()
              << ",Number of Operands=" << BI_temp->getNumOperands() << "\n";
          }
        }

        for (BasicBlock::iterator BI = bb1->begin(); BI != bb1->end(); ++BI)
        {

          //instruction 1 is visited before ins2-intra iteration dependency
          if (BI->isIdenticalTo(ins1))
          {
            errs() << "INS NAME "<<ins1->getOpcodeName()<<" before "<<ins2->getOpcodeName()<<"\n";
            return 0;

          }
          //instruction 2 is visited before instruction 1-inter-iteration dependency
          if (BI->isIdenticalTo(ins2))
          {
            errs() << "INS NAME "<<ins2->getOpcodeName()<<" before "<<ins1->getOpcodeName()<<"\n";
            return 1;

          }
        }
        //should never reach here
        return -1;
      }
      //2 different blocks
      else
      {
        //if bb1 is looplatch, because looplatch is the last basic block, dependency is loopcarried dependency and distance = 1
        if (bb1->getName()==loopLatch->getName())
        {
          return 1;
        }
        //set of basicblocks to visit
        std::vector<BasicBlock*> to_visit;
        //set of already visited basicblocks
        std::vector<BasicBlock*> visited;
        //we start from bb1
        to_visit.push_back(bb1);
        //travers loop CFG


        while(to_visit.size() > 0)
        {
          BasicBlock* it = to_visit[0];
          to_visit.erase(to_visit.begin());
          errs() << "\ngetdist else BB NAME:"<<it->getName();
          //add this bb to set of visited basicblocks
          visited.push_back(it);
          //what are the set of next basicblocks
          for (succ_iterator pblocks = llvm::succ_begin(it); pblocks != llvm::succ_end(it); pblocks++)
          {
            //if BB is not within loop BB, ignore it
            errs() << "\ngetdist else inner for BB NAME:"<<(*pblocks)->getName();
            if (!contains(*pblocks, bbs))
            {
              continue;
            }
            //if we have reached bb2, it is dependency inside 1 iteration
            if (bb2->getName() == (*pblocks)->getName())
            {
              return 0;
            }
            //we do not travers beyond loop latch, if we dont reach the second block, it is inter iteration
            //we should not stop here though because there might be more blocks in to_visit set that has not traversed yet
            if ((*pblocks)->getName() == loopLatch->getName())
            {
              continue;
            }
            //is this bb already visited? dont add it to travers list
            //errs() << "\n contain2 is fine\n";
            if (contains(*pblocks, visited))
            {
              continue;
            }
            //is it already added to travers list?
            //errs() << "\n contain3 is fine\n";
            if (contains(*pblocks, to_visit))
            {
              continue;
            }
            //errs() << "\n contain4 is fine\n";
            //add it to travers list
            to_visit.push_back(*pblocks);

          }

        }

        //if we are here, it isinter-iteration dependency
        return 1;

      }
    }
    /* 
     * find the last cmp instruction within a basic block
     */
    Instruction* Find_Last_CMP_Instruction(BasicBlock* bb)
    {
      for (BasicBlock::reverse_iterator TBI = bb->rbegin(); TBI != bb->rend(); ++TBI)
      {
        //errs() << " Try to find " << TBI->getName()<<"\n";

        if (TBI->getOpcode() == Instruction::ICmp || TBI->getOpcode() == Instruction::FCmp)
        {

          return &*TBI;
        }
      }
      return NULL;
    }
 
   /* Instruction* Find_Ret_Instruction(BasicBlock* bb)
    {
      for (BasicBlock::reverse_iterator TBI = bb->rbegin(); TBI != bb->rend(); ++TBI)
      { 
        //errs() << " Try to find " << TBI->getName()<<"\n";

        if (TBI->getOpcode() == Instruction::Ret)
        { 
	errs() << "dai goyyala vanteyn da.. "; 
          return &*TBI;
        }
      }
      return NULL;
    }*/ 

    //make a new node from instruction BI and adds it to DFG
    bool Add_Node(Instruction *BI, REGI_DFG* myDFG)
    {
      REGI_NODE* node;
      REGI_NODE* node1; 
      REGI_NODE* node2;
      //REGI_NODE* node3;
      bool retVal = false;
      std::string name="";
      //errs() << " Name is " << BI->getName() <<"\n";

      switch (BI->getOpcode())
      {
        case Instruction::Ret:
	 node = new REGI_NODE(add, 1, MahdiNodeID++, BI->getName().str(), BI); //mahesh jan'16
          myDFG->insert_Node(node);
	 //retVal = false;
          return retVal;
        case Instruction::Br:
	 /* node = new REGI_NODE(add, 1, MahdiNodeID++, BI->getName().str(), BI); //mahesh jan'16
          myDFG->insert_Node(node);*/
          retVal = true;
          return retVal;

        case Instruction::Switch:
          return false;
        case Instruction::IndirectBr:
          return true;
        case Instruction::Invoke:
        case Instruction::Resume:
        case Instruction::Unreachable:
          retVal = false;
          return retVal;

          // Standard binary operators...
        case Instruction::Add:
        case Instruction::FAdd:
          node = new REGI_NODE(add, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;
        case Instruction::Sub:
        case Instruction::FSub:
          node = new REGI_NODE(sub, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;
        case Instruction::Mul:
        case Instruction::FMul:
          node = new REGI_NODE(mult, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;
        case Instruction::UDiv:
        case Instruction::SDiv:
        case Instruction::FDiv:
        case Instruction::URem:
        case Instruction::SRem:
        case Instruction::FRem:
          node = new REGI_NODE(div, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;
          // Logical operators...
        case Instruction::And:
          node = new REGI_NODE(andop, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;
        case Instruction::Or:
          node = new REGI_NODE(orop, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;
        case Instruction::Xor:
          node = new REGI_NODE(xorop, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;

          // Memory instructions...
        case Instruction::Alloca:
          retVal = true;
          return retVal;
        case Instruction::Load:
          //for now we ignore memory
          node = new REGI_NODE(ld_add, 1, MahdiNodeID++, BI->getName().str(), BI);
          node2 = new REGI_NODE(ld_data, 1, MahdiNodeID++, BI->getName().str(), BI);
          node->set_Load_Data_Bus_Read(node2);
          node2->set_Load_Address_Generator(node);
          myDFG->insert_Node(node);
          myDFG->insert_Node(node2);
          retVal = true;
          return retVal;
          /*                    node = new REGI_NODE(add, 1, MahdiNodeID++, BI->getName().str(), BI);
                                myDFG->insert_Node(node);
                                retVal = true;
                                return retVal;*/
        case Instruction::Store:
          node = new REGI_NODE(st_add, 1, MahdiNodeID++, BI->getName().str(), BI);
          node2 = new REGI_NODE(st_data, 1, MahdiNodeID++, BI->getName().str(), BI);
          node->set_Store_Data_Bus_Write(node2);
          node2->set_Store_Address_Generator(node);
          myDFG->insert_Node(node);
          myDFG->insert_Node(node2);
          retVal = true;
          return retVal; 
          /*                    node = new REGI_NODE(add, 1, MahdiNodeID++, BI->getName().str(), BI);
                                myDFG->insert_Node(node);
                                retVal = true;
                                return retVal;*/
        case Instruction::AtomicCmpXchg:
        case Instruction::AtomicRMW:
        case Instruction::Fence:
          return false;
        case Instruction::GetElementPtr:
	  node = new REGI_NODE(add, 1, MahdiNodeID++, BI->getName().str(),BI);
          /*node2 = new REGI_NODE(constant, 1, MahdiNodeID++, "ConstInt4", NULL);
          myDFG->insert_Node(node);
          myDFG->insert_Node(node2);
	  myDFG->make_Arc(node2, node, MahdiEdgeID++, 0, TrueDep);  */
	 myDFG->insert_Node(node); 
          /*node = new REGI_NODE(add, 1, MahdiNodeID++, BI->getName().str(), BI);
	  myDFG->insert_Node(node);*/
         /* for (int i=0; i< BI->getNumOperands(); i++) {
	  node = new REGI_NODE(llvm_route, 1, MahdiNodeID++, BI->getOperand(i)->getName(), BI);}
          node2 = new REGI_NODE(constant, 1, MahdiNodeID++, "ConstInt4", NULL);
          node3 = new REGI_NODE(add,1, MahdiNodeID++, BI->getName().str(), BI); 
          myDFG->insert_Node(node);
          myDFG->insert_Node(node2);
	  myDFG->insert_Node(node3); 
          myDFG->make_Arc(node2, node, MahdiEdgeID++, 0, TrueDep);
          myDFG->make_Arc(node, node3, MahdiEdgeID++,0, TrueDep);*/     
          retVal = true;
          return retVal;

          // Convert instructions...
        case Instruction::Trunc:
        case Instruction::ZExt:
        case Instruction::SExt:
        case Instruction::FPTrunc:
        case Instruction::FPExt:
        case Instruction::FPToUI:
        case Instruction::FPToSI:
        case Instruction::UIToFP:
        case Instruction::SIToFP:
        case Instruction::IntToPtr:
        case Instruction::PtrToInt:
        case Instruction::BitCast:
     	  node = new REGI_NODE(mult, 1, MahdiNodeID++, BI->getName().str(), BI);
	  node2 = new REGI_NODE(constant, 1, MahdiNodeID++, "ConstInt4", NULL);
          myDFG->insert_Node(node);
	  myDFG->insert_Node(node2); 
	   myDFG->make_Arc(node2, node, MahdiEdgeID++, 0, TrueDep);
          retVal = true;
          return retVal;
          // Other instructions...
        case Instruction::ICmp:
        case Instruction::FCmp:
          llvm::Instruction_Operation op;
          if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_OEQ
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_UEQ
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_EQ)
          {
            op = cmpEQ;
          }
          else if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_ONE
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_UNE
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_NE)
          {
            op = cmpNEQ;
          }
          else if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_OGT
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_UGT
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_SGT)
          {
            op = cmpSGT;
          }
          else if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_UGT)
          {
            op = cmpUGT;
          }
          else if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_OGE
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_UGE
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_SGE)
          {
            op = cmpSGEQ;
          }
          else if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_UGE)
          {
            op = cmpUGEQ;
          }

          else if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_OLT
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_ULT
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_SLT)
          {
            op = cmpSLT;
          }
          else if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_ULT)
          {
            op = cmpULT;
          }
          else if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_OLE
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::FCMP_ULE
              || cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_SLE)
          {
            op = cmpSLEQ;
          }
          else if (cast<CmpInst>(BI)->getPredicate() == llvm::CmpInst::ICMP_ULE)
          {
            op = cmpULEQ;
          }
          node = new REGI_NODE(op, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;
        case Instruction::PHI:  
        case Instruction::Select:
          node = new REGI_NODE(select, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          phiCounter++;
          return retVal;
        case Instruction::Call:
          retVal = false;
          return retVal;
        case Instruction::Shl:
          node = new REGI_NODE(shiftl, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;
        case Instruction::LShr:
        case Instruction::AShr:
          node = new REGI_NODE(shiftr, 1, MahdiNodeID++, BI->getName().str(), BI);
          myDFG->insert_Node(node);
          retVal = true;
          return retVal;
        case Instruction::VAArg:
        case Instruction::ExtractElement:
        case Instruction::InsertElement:
        case Instruction::ShuffleVector:
        case Instruction::ExtractValue:
        case Instruction::InsertValue:
        case Instruction::LandingPad:
          retVal = false;
          return retVal;
      }

      return retVal;
    }

    //return true if set contains current basicblock
    bool contains(BasicBlock* current, std::vector<BasicBlock*> set)
    {
      for (std::vector<BasicBlock*>::const_iterator it = set.begin() ; it != set.end(); ++it)
      {
        if (current->getName().str() == (*it)->getName().str())

        {
          return true;
        }
      }
      return false;
    }
    //subtract set1 from sub2
    std::vector<BasicBlock*> Subtract_set(std::vector<BasicBlock*> set1, std::vector<BasicBlock*> set2)
    {
      std::vector<BasicBlock*> retVal;
      std::vector<BasicBlock*>::iterator iBlock1;
      for (iBlock1 = set1.begin(); iBlock1 != set1.end(); iBlock1++)
      {
        if (!contains(*iBlock1, set2))
          retVal.push_back(*iBlock1);

      }
      return retVal;
    }
    //remove current block from set
    void Remove_Block_From_Set(BasicBlock* current, std::vector<BasicBlock*> set)
    {
      std::vector<BasicBlock*>::iterator iBlock1;
      for (iBlock1 = set.begin(); iBlock1 != set.end(); iBlock1++)
      {
        if ((*iBlock1)->getName() == current->getName())
        {
          set.erase(iBlock1, iBlock1 + 1);
          return;

        }
      }
    }

    /*
     * Find the common parent of two given basic block
     * we assume there is only on common parent
     * todo: we need to consider the case when there are multiple parents
     */
    BasicBlock* Find_Common_Parent(BasicBlock* bb1, BasicBlock* bb2)
    {
      //we traverse the BBs graph in level by level order
      //set of parents visited through BB1
      std::vector<BasicBlock*> visited1;
      //set of parents visited though BB2
      std::vector<BasicBlock*> visited2;
      //set to visit though BB1, the parents of each and every BB is to be added to next_to_visit set
      std::vector<BasicBlock*> to_visit1;
      //set to visit though BB2, the parents of each and every BB is to be added to next_to_visit set
      std::vector<BasicBlock*> to_visit2;
      //set of BBS to visit next
      std::vector<BasicBlock*> next_to_visit1;
      std::vector<BasicBlock*> next_to_visit2;
      //initially we are to visit parents of BB1 and BB2
      to_visit1.push_back(bb1);
      to_visit2.push_back(bb2);

      BasicBlock* current;

      //we travers until we find a common parent
      while (true)
      {
        //for each BB in to visit set
        for (std::vector<BasicBlock*>::iterator it = to_visit1.begin(); it != to_visit1.end() ; ++it)
        {

          //is this block already visited through bb2? if so it is the common parent
          if (contains(*it, visited2))
          {
            return *it;
          }
          //
          //is this block to be visited through bb2? if so it is the common parent
          /*if (contains(*it, to_visit2))
            {
            return *it;
            }*/
          //add this block to set of visited blocks
          visited1.push_back(*it);
          //find its predecessors
          for (pred_iterator pblocks = llvm::pred_begin(*it); pblocks != llvm::pred_end(*it); pblocks++)
          {
            //is this block already visited through bb2? if so it is the common parent
            /*if (contains(*pblocks, visited2))
              {
              return *pblocks;
              }*/
            //is this block already visited through bb2? if so it is the common parent
            /*if (contains(*pblocks, to_visit2))
              {
              return *pblocks;
              }*/
            //if this node has not been visited before, 
            if (!contains(*pblocks, visited1))
            {
              next_to_visit1.push_back(*pblocks);
            }

          }

        }
        //for each BB in to visit set
        for (std::vector<BasicBlock*>::iterator it = to_visit2.begin(); it != to_visit2.end() ; ++it)
        {

          //is this block already visited through bb1? if so it is the common parent
          if (contains(*it, visited1))
          {
            return *it;
          }
          //
          //is this block to be visited through bb1? if so it is the common parent
          /*if (contains(*it, to_visit1))
            {
            return *it;
            }*/
          //add this block to set of visited blocks
          visited2.push_back(*it);
          //find its predecessors
          for (pred_iterator pblocks = llvm::pred_begin(*it); pblocks != llvm::pred_end(*it); pblocks++)
          {
            //is this block already visited through bb2? if so it is the common parent
            /*if (contains(*pblocks, visited2))
              {
              return *pblocks;
              }*/
            //is this block already visited through bb2? if so it is the common parent
            /*if (contains(*pblocks, to_visit2))
              {
              return *pblocks;
              }*/
            //if this node has not been visited before, 
            if (!contains(*pblocks, visited2))
            {
              next_to_visit2.push_back(*pblocks);
            }

          }

        }

        //clear to_visit sets
        to_visit2.clear();
        to_visit1.clear();
        //update them with next level
        to_visit2 = next_to_visit2;
        to_visit1 = next_to_visit1;
        //clear next levels
        next_to_visit1.clear();
        next_to_visit2.clear();

        //if there is nothing left to visit, there is no common parent!!!!
        //we should never get here!
        if (to_visit2.size() == 0 && to_visit1.size() == 0)
        {
          return NULL;
        }
      }
      return NULL;

    }



    bool Update_Data_Dependencies(Instruction *BI, REGI_DFG* myDFG, std::vector<BasicBlock *> bbs, BasicBlock* loopLatch)
    {

      //REGI_NODE myNode; 
      REGI_NODE* node; 
      REGI_NODE* node1;
      REGI_NODE* node2;
      REGI_NODE* node3;
      REGI_NODE* node4;
      //REGI_NODE* node_const4 = new REGI_NODE(constant, 1, MahdiNodeID++, "ConstInt4", NULL);
      //myDFG->insert_Node(node_const4);
    //  REGI_NODE* node3 = new REGI_NODE(add, 1,  MahdiNodeID++, "idxprom", NULL);
      REGI_ARC* arc1;
   
      DataDepType dep = TrueDep;
  

	/*if(BI->getOpcode() == Instruction::GetElementPtr && cast<Instruction>(BI->getOperand(j))->getOpcodeName() == "phi") 
	{
	
	if(DEBUG_1)
  	 errs() << "Mangatha da.. ";
	 

	 //if(DEBUG_1)
	   //errs() << *operands; 
	   //errs() << "Vedhalam da... " << "\t" << operands << "\t" << BI->getNumOperands() << "\t" << name << "\t" << BI->getOperand(j)->getName().str() << "\t" << cast<Instruction>(BI->getOperand(j))->getOpcodeName() << "\n";  
	
	//int ins = 

	 //if(name == "phi")
	  //{
		
	   errs() << "Vijay da... "; 

	   node1 = myDFG->get_Node((BI)->getOperand(j)); //phi
	   node2 = new REGI_NODE(constant, 1, MahdiNodeID++, "ConstInt4", NULL); 
	   node3 = new REGI_NODE(llvm_route,1,MahdiNodeID++, "idxprom", BI); 
	   myDFG->insert_Node(node2); 
	   node4 = myDFG->get_Node(BI); 
	
	  if (DEBUG_1)
	    errs() << "Thala ajith da....";

	   myDFG->make_Arc(node2, node3, MahdiEdgeID++, 0, dep);
	   myDFG->make_Arc(node1, node3, MahdiNodeID++, 1, dep); 
	   myDFG->make_Arc(node3, node4, MahdiNodeID++, 1, dep); 
	}*/

       


         /*int num = BI->getValueID(); 
         node = myDFG->get_Node(num); 
         node2 = new REGI_NODE(llvm_route, 1, MahdiNodeID++, "idxprom", NULL); 

	std::vector<REGI_NODE*> succ_node; 
	int succ = llvm::REGI_NODE get_Number_of_Succ();
 
	std::vector<REGI NODE*>::iterator iNode; 	
	
	for (int j=0; j< succ; j++)
	{

	 succ_node = llvm::REGI_NODE Get_Next_Nodes(); 

	}

   
      for (iNode = succ_node.begin(); iNode != succ_node.end(); iNode++)
	{
	 if ((*iNode)->get_LLVM_Instruction == Instruction::GetElementPtr)
	  {

	   myDFG->insert_Node_in_between_output(node, iNode, node2); 
	 
	  }
	}
      }*/
	
	
 
     /*if (BI->getOpcode() == Instruction::PHI)
      {
        //phi node operand are basic blocks
        PHINode::block_iterator block_it = cast<PHINode>(BI)->block_begin();
        BasicBlock* current = (*block_it);
        block_it++;
        BasicBlock* next = (*block_it);
        //if phi input blocks are not within loop, phi is not needed, it will be a simple input
        if (!contains(current, bbs) || !contains(next, bbs))
        {
          myDFG->delete_Node(myDFG->get_Node(BI));
          phiCounter--;
          return true;
        }
        //we do not support if inside loop yet
        else
        {
          //find the common parent
          BasicBlock* common=Find_Common_Parent(current, next);
          //if a common parent is found
          if (common==NULL)
          {
            //is this basicblock within loop body?
            if (contains(common, bbs))
            {
              //find the last cmp instruction
              Instruction *ins=Find_Last_CMP_Instruction(current);
              //construct pred dependency
              myDFG->make_Arc(myDFG->get_Node(ins), myDFG->get_Node(BI), MahdiEdgeID++, 0, PredDep);
            }
            else
            {
              //add a dummy nod
              REGI_NODE* node = new REGI_NODE(llvm_route, 1,  MahdiNodeID++, "Select", NULL);
              myDFG->insert_Node(node);
              //construct pred dependency
              myDFG->make_Arc(node, myDFG->get_Node(BI), MahdiEdgeID++, 0, PredDep);

            }
          }
          else
          {
            //Add a new dummy node
            REGI_NODE* node = new REGI_NODE(llvm_route, 1,  MahdiNodeID++, "Select", NULL);
            myDFG->insert_Node(node);
            //construct pred dependency

            myDFG->make_Arc(node, myDFG->get_Node(BI), MahdiEdgeID++, 0, PredDep);
          }
        }




        //return true;
      }*/
      for (int j = 0; j < BI->getNumOperands(); j++)
      {

	/*if (cast<Instruction>((BI)->getOperand(j))->getOpcode() == Instruction::PHI)
        {
         if (DEBUG_1)
           errs() <<  da..";

         node5 = get_Node((BI)->getOperand(j));
         node6 = get_Node((BI)->getOpcode());
         node7 = new REGI_NODE(constant, 1,  MahdiNodeID++, "ConstInt4", NULL);
        }*/

	
        //constant values can be immediate
        //todo check if it is greater than immediate field
        if (BI->getOperand(j)->getValueID() == llvm::Value::ConstantIntVal)
        {
          std::ostringstream os;
          os << dyn_cast<llvm::ConstantInt>((BI)->getOperand(j))->getSExtValue();
          /* No Direct Constants Are Allowed*/
          std::string name = "ConstInt" + os.str();
          if (myDFG->get_Node((BI)->getOperand(j)) == NULL)
          {
            node1 = new REGI_NODE(constant, 1, MahdiNodeID++, name, (BI)->getOperand(j));
            myDFG->insert_Node(node1);
          }
          node1 = myDFG->get_Node((BI)->getOperand(j));
          node2 = myDFG->get_Node(BI);
          myDFG->make_Arc(node1, node2, MahdiEdgeID++, 0, dep,j);/*
          */
/*
          int constantnode = atoi(os.str()); 
          if(constantnode < 4096)
          {
            std::string name = "ConstInt" + os.str();
            if (myDFG->get_Node((BI)->getOperand(j)) == NULL)
            {
              node1 = new REGI_NODE(constant, 1, MahdiNodeID++, name, (BI)->getOperand(j));
              myDFG->insert_Node(node1);
            }
            node1 = myDFG->get_Node((BI)->getOperand(j));
            node2 = myDFG->get_Node(BI);
            myDFG->make_Arc(node1, node2, MahdiEdgeID++, 0, dep,j);
       	  }
          else
          {
            node = new REGI_NODE(ld_add, 1, MahdiNodeID++, BI->getName().str(), BI);
            node2 = new REGI_NODE(ld_data, 1, MahdiNodeID++, BI->getName().str(), BI);
            node->set_Load_Data_Bus_Read(node2);
            node2->set_Load_Address_Generator(node);
            myDFG->insert_Node(node);
            myDFG->insert_Node(node2);
	  }*/
          continue;

        }
        else if (BI->getOperand(j)->getValueID() == llvm::Value::ConstantFPVal)
        {
          //for now we ignore FP constants
          std::ostringstream os;
          os << cast<ConstantFP>((BI)->getOperand(j))->getValueAPF().convertToFloat();
          //float temp=cast<ConstantFP>((BI)->getOperand(j))->getValueAPF().convertToFloat();

          std::string name = "ConstFP" + os.str();
          //.convertToFloat().str();
          if (myDFG->get_Node((BI)->getOperand(j)) == NULL)
          {
            node1 = new REGI_NODE(constant, 1, MahdiNodeID++, name, (BI)->getOperand(j));
            myDFG->insert_Node(node1);
          }
          node1 = myDFG->get_Node((BI)->getOperand(j));
          node2 = myDFG->get_Node(BI);
          myDFG->make_Arc(node1, node2, MahdiEdgeID++, 0, dep,j);

          continue;
        }

        else if (BI->getOperand(j)->getValueID() == llvm::Value::BasicBlockVal)
        {
          /*
             bool found = false;
             if (DEBUG_1)
             {
             errs() << " Ever get here? Basic block\n";
             }
             for (int i = 0; i < (int) bbs.size(); i++)
             {

             if (BI->getOperand(j)->getName().str() == bbs[i]->getName().str())
             {

             for (BasicBlock::iterator TBI = bbs[i]->end(); TBI != bbs[i]->begin(); --TBI)
             {
             if (myDFG->get_Node(TBI) != NULL)
             {

             node1 = myDFG->get_Node(TBI);
             node2 = myDFG->get_Node(BI);
             myDFG->make_Arc(node1, node2, MahdiEdgeID++,
             getDistance(TBI, TBI->getParent(), BI, BI->getParent(), bbs),
             dep);
          //errs() << "Found arc between " << TBI->getName().str() << " and "
          //                << BI->getName().str() << "\n";
          found = true;
          }
          }
          if (!found)
          {
          //errs() << " not found\n";
          return false;
          }

          }

          }
          if (!found)
          {
          //errs() << " not found2\n";
          if (myDFG->get_Node(BI->getOperand(j)) == NULL)
          {
          node1 = new REGI_NODE(constant, 1, MahdiNodeID++, BI->getOperand(j)->getName().str(),
          (BI)->getOperand(j));
          myDFG->insert_Node(node1);
          }
          node1 = myDFG->get_Node(BI->getOperand(j));
          node2 = myDFG->get_Node(BI);
          myDFG->make_Arc(node1, node2, MahdiEdgeID++, 0, dep);

          }
          */
          continue;

        }
        //MAHDI VERSION
        /*           else if (BI->getOperand(j)->getValueID() >= llvm::Value::InstructionVal)
                     {
                     std::string name = cast<Instruction>((BI)->getOperand(j))->getName().str();
                     int distance = 0;
                     if (myDFG->get_Node((BI)->getOperand(j)) == NULL)
                     {
                     node1 = new REGI_NODE(constant, 1, MahdiNodeID++, name, (BI)->getOperand(j));
                     myDFG->insert_Node(node1);
                     }
                     else
                     {
                     distance = getDistance(cast<Instruction>((BI)->getOperand(j)),
                     cast<Instruction>((BI)->getOperand(j))->getParent(), BI, BI->getParent(), bbs, loopLatch);
                     node1 = myDFG->get_Node((BI)->getOperand(j));
                     }
                     node2 = myDFG->get_Node(BI);
                     myDFG->make_Arc(node1, node2, MahdiEdgeID++, distance, dep);
                     }
                     */
        //DIPAL VERSION
        else if (BI->getOperand(j)->getValueID() >= llvm::Value::InstructionVal)
        {
          if (DEBUG_1)
            errs() << "UPDATE DD NAME:"<< cast<Instruction>((BI)->getOperand(j))->getName().str()<<"\n";

          if (DEBUG_1)
            errs() << "UPDATE DD: InstructionVal\n"; 
          std::string name;
          name = cast<Instruction>((BI)->getOperand(j))->getName().str();
          int distance = 0;


          //if the node has node been created, create it, else get distance
          if (myDFG->get_Node((BI)->getOperand(j)) == NULL)

          {
            node1 = new REGI_NODE(constant, 1, MahdiNodeID++, name, (BI)->getOperand(j)); 
            myDFG->insert_Node(node1); 
          }
          else
          {
            errs() <<"************B4 getdistancce**************\n";
            for (BasicBlock::iterator BI_temp = BI->getParent()->begin(); BI_temp !=BI->getParent()->end(); ++BI_temp)
            {
              if (DEBUG_1)
              {
                errs() << "Name=" << BI_temp->getName() << "Value name=" << BI_temp->getValueName() << ",Opcode Name="
                  << BI_temp->getOpcodeName() << ",OPCode=" << BI_temp->getOpcode()
                  << ",Number of Operands=" << BI_temp->getNumOperands() << "\n";
              }
            }

            distance = getDistance(cast<Instruction>((BI)->getOperand(j)),
                cast<Instruction>((BI)->getOperand(j))->getParent(), BI, BI->getParent(), bbs,loopLatch);

            errs() <<"************AFTER getdistancce**************\n";
            for (BasicBlock::iterator BI_temp = BI->getParent()->begin(); BI_temp !=BI->getParent()->end(); ++BI_temp)
            {
              if (DEBUG_1)
              {
                errs() << "Name=" << BI_temp->getName() << "Value name=" << BI_temp->getValueName() << ",Opcode Name="
                  << BI_temp->getOpcodeName() << ",OPCode=" << BI_temp->getOpcode()
                  << ",Number of Operands=" << BI_temp->getNumOperands() << "\n";
              }
            }
          }
	
          //if the operand instruction corresponds to a load operation
          if (cast<Instruction>((BI)->getOperand(j))->getOpcode() == Instruction::Load)
          {
            if (DEBUG_1)
              errs() << "UPDATE DD: InstructionVal: op->opcode==load\n"; 
            node1 = myDFG->get_Node_Mem_Data(cast<Instruction>((BI)->getOperand(j)));
            if (node1 == NULL)
            {
              node1 = myDFG->get_Node((BI)->getOperand(j));

            }

          }
          else
          {
            node1 = myDFG->get_Node((BI)->getOperand(j));
          }

          //if its a store instruction
          if (BI->getOpcode() == Instruction::Store)
          {
            if (DEBUG_1)
              errs() << "UPDATE DD: InstructionVal: opcode==store\n"; 
            if (cast<Instruction>((BI)->getOperand(j))->getOpcode() == Instruction::GetElementPtr)
            {
              if (DEBUG_1)
                errs() << "UPDATE DD: InstructionVal: STORE: GETELEMENTPTR\n" << BI->getOperand(j); 

               node2 = myDFG->get_Node_Mem_Add(BI); 
	

            }
            else
            {

               node2 = myDFG->get_Node_Mem_Data(BI);

            }
          }
          else if (BI->getOpcode() == Instruction::Load)
          {
            if (DEBUG_1)
              errs() << "UPDATE DD: InstructionVal: opcode==load\n"; 
            if (cast<Instruction>((BI)->getOperand(j))->getOpcode() == Instruction::GetElementPtr)
            {
              if (DEBUG_1)
                errs() << "UPDATE DD: InstructionVal: LOAD: GETELEMENTPTR\n"; 

              node2 = myDFG->get_Node_Mem_Add(BI);

            }
            else
            {

              node2 = myDFG->get_Node_Mem_Data(BI);

            }
          }
          else
          {

            if (DEBUG_1)
              errs() << "UPDATE DD: InstructionVal: opcode!=store,load\n"; 
            node2 = myDFG->get_Node(BI);

          }
          errs().write_escaped(node1->get_Name()) << "->";errs().write_escaped(node2->get_Name())<<'\n';
          
	   myDFG->make_Arc(node1, node2, MahdiEdgeID++, distance,dep,j);                
	}

   }
 


//Mahesh.entry : inclusion for -O3 array idxprom calculation. 

 if(BI->getOpcode() == Instruction::GetElementPtr) 
  {
   for(int i=0; i< BI->getNumOperands(); ++i)
    {
     if(myDFG->get_Node(BI->getOperand(i))->get_Name() >= "indvars.iv")
      {
	node1 = myDFG->get_Node(BI);
	node2 = myDFG->get_Node(BI->getOperand(i)); 
	node3 = new REGI_NODE(mult, 1, MahdiNodeID++, "idxprom", NULL);
        node4 = new REGI_NODE(constant, 1, MahdiNodeID++, "ConstInt4", NULL);	
	myDFG->insert_Node(node3); 
	myDFG->insert_Node(node4); 
	
	myDFG->make_Arc(node4, node3, MahdiEdgeID++, 0, TrueDep);
	myDFG->insert_Node_in_between_input(node2,node1,node3);
	}

     if (myDFG->get_Node(BI->getOperand(i))->get_Name() == "ConstInt0")
      {
	node1 = myDFG->get_Node(BI);
        node2 = myDFG->get_Node(BI->getOperand(i));
	arc1 = myDFG->get_Arc(node2, node1); 
	myDFG->Remove_Arc(arc1); 
     }
  }
}

/*
 if(BI->getOpcode() == Instruction::PHI)
  {
    node1 = myDFG->get_Node(BI); 
    node2 = new REGI_NODE(st_add, 1, MahdiNodeID++, "Phi_st_add", BI); 
    node3 = new REGI_NODE(st_data, 1, MahdiNodeID++, "Phi_st_data", BI);
    node2->set_Store_Data_Bus_Write(node3);
    node3->set_Store_Address_Generator(node2);
    myDFG->insert_Node(node2);
    myDFG->insert_Node(node3);  
    
    myDFG->make_Arc(node1, node3, MahdiEdgeID++, 0, TrueDep); 
   // myDFG->make_Arc(node2, node3, MahdiEdgeID++, 0, TrueDep); 

  }*/   
 /*if(BI->getOpcode() == Instruction::PHI)
  {
   if (myDFG->get_Node(BI->getOperand(0))->get_Name() == "ConstInt0")
   {
   */ 
      	
// Mahesh.end
      return true;
    }

    virtual bool runOnLoop(Loop *L, LPPassManager &LPM)
    {
      std::vector<BasicBlock *> bbs = L->getBlocks();
      phiCounter=0;
      static std::vector<std::string> dumped;
      //is this loop already visited?
      if (std::find(dumped.begin(), dumped.end(), L->getHeader()->getName())!=dumped.end())
      {
        errs() << " Loop " << L->getHeader()->getName() <<" is already visited\n";
        return false;
      }
      //if not add to visited list
      else
      {
        dumped.push_back(L->getHeader()->getName());  
      }

      TOTALLOOPS++;
      REGI_DFG *myDFG = new REGI_DFG();
      REGI_DFG *myDFG1 = new REGI_DFG();

      std::vector<Loop *> subs = L->getSubLoops();
      int size = subs.size();
      SmallVector<BasicBlock*, 8> ExitingBlocks;
      L->getExitingBlocks(ExitingBlocks);

      if (ExitingBlocks.size() == 1 && size == 0)
      {
        //count total number of loops
        if (DEBUG_1)
        {
          errs()
            << "*********************************************Starting Loop**************************************************\n";
        }

        if (DEBUG_1)
        {
          errs() << "Mahdi Loop: ";
          errs() << "Depth=" << L->getLoopDepth() << "\tNumber of BBs=" << bbs.size() << " With one exiting branch\n";
        }
        TOTALDUMPEDLOOPS++;
        if ((int) bbs.size() <=1)
        {
          myDFG->print_Loop_stats(TOTALLOOPS, TOTALDUMPEDLOOPS, CONDITIONALLOOPS); 
          //return false;
        }
        CONDITIONALLOOPS++;
        myDFG->print_Loop_stats(TOTALLOOPS, TOTALDUMPEDLOOPS, CONDITIONALLOOPS);

        for (int i = 0; i < (int) bbs.size(); i++)
        {
          if (DEBUG_1)
          {
            errs() << "\n" << bbs[i]->getName() << " Basic Block " << i << " has " << bbs[i]->size()
              << " instructions\n";

          }
          for (BasicBlock::iterator BI = bbs[i]->begin(); BI != bbs[i]->end(); ++BI)
          {
            if (DEBUG_1)
            {
              errs() << "Name=" << BI->getName() << "Value name=" << BI->getValueName() << ",Opcode Name="
                << BI->getOpcodeName() << ",OPCode=" << BI->getOpcode()
                << ",Number of Operands=" << BI->getNumOperands() << "|\t";
            }
            /*
               for (int j = 0; j < BI->getNumOperands(); j++)
               {
            //errs() << "Type ID " << BI->getOperand(j)->getValueID() << ",\t";
            if (BI->getOperand(j)->getValueID() == llvm::Value::ConstantIntVal)
            {
            if (DEBUG_1)
            {
            errs() << "Constant Int Exp " << ",\t";
            }

            }
            else if (BI->getOperand(j)->getValueID() == llvm::Value::BasicBlockVal)
            {
            if (DEBUG_1)
            {
            errs() << "Basic Block " << ",\t";
            }
            }

            if (BI->getOpcode() == 47)
            {
            if (cast<PHINode>(BI)->getOperand(j)->hasName())
            {
            if (DEBUG_1)
            {

            errs() << BI->getOperand(j)->getName() << ",\t";
            }

            }
            else
            {
            if (cast<ConstantInt>(cast<PHINode>(BI)->getOperand(j)))
            {
            if (DEBUG_1)
            {
            errs()
            << cast<ConstantInt>(
            cast<PHINode>(BI)->getOperand(
            j))->getSExtValue()
            << ",\t";
            }
            }

            else if (cast<ConstantFP>(cast<PHINode>(BI)->getOperand(j)))
            {
            if (DEBUG_1)
            {
            errs()
            << cast<ConstantFP>(
            cast<PHINode>(BI)->getOperand(
            j))->getValueAPF().convertToFloat()
            << ",\t";
            }

            }
            else
            {
            if (DEBUG_1)
            {
            errs() << BI->getOperand(j)->getName() << ",\t";
            }
            }

            }

            }
            else
            {
            if (DEBUG_1)
            {
              errs() << BI->getOperand(j)->getName() << ",\t";
            }
          }

          }
          if (DEBUG_1)
          {
            errs() << "|\n";
          }
          */
            if (!Add_Node(BI, myDFG))
            {
              if (DEBUG_1)
              {
                errs() << "Ignore this loop, Could not resolve instruction \n";
                errs()
                  << "********************************************Ending Loop***************************************************\n";
              }
              return false;
            }

          }
          if (DEBUG_1)
          {
            errs() << "**************************************\n";
          }

        }
        std::ostringstream os;
        os << MahdiNodeID;
        //myDFG->Dot_Print_DFG("loop_graph1" + os.str());
        for (int i = 0; i < (int) bbs.size(); i++)
        {

          for (BasicBlock::iterator BI = bbs[i]->begin(); BI != bbs[i]->end(); ++BI)
          {

            if (myDFG->get_Node(BI) != NULL)
            {
              if (DEBUG_1)
              {
                errs() << " Data Dependency For " << BI->getName() << "\n";
              }
              if (!Update_Data_Dependencies(BI, myDFG, bbs,L->getLoopLatch() ))
              {
                if (DEBUG_1)
                {
                  errs() << "Ignore this loop, Could not resolve data dependencies\n";
                  errs()
                    << "********************************************Ending Loop***************************************************\n";
                }
                return false;
              }
            }
          }
        }
        /*errs() << "Exit block of loop\n";

          for (BasicBlock::const_iterator BI = ExitingBlocks[0]->begin(); BI != ExitingBlocks[0]->end(); ++BI)
          {

          errs() << "Name=" << BI->getName() << ",Opcode Name=" << BI->getOpcodeName() << ",OPCode=" << BI->getOpcode()
          << ",Number of Operands=" << BI->getNumOperands() << "|\t";
          for (int j = 0; j < BI->getNumOperands(); j++)
          {
          errs() << BI->getOperand(j)->getName() << ",\t";
          }
          errs() << "|\n";

          }*/

        //myDFG->Dot_Print_DFG("loop_graph" + os.str());
        //myDFG->Fix_Phi_Nodes();
        //        if (phiCounter > 0)
        //      {
        myDFG->Dot_Print_DFG("loop_graph2" + os.str());
        myDFG->Dump_Loop("loop" + os.str());
        //    }
        if (DEBUG_1)
        {
          errs()
            << "********************************************Ending Loop***************************************************\n";
        }

      }
      else
      {
        if (DEBUG_1)
        {
          errs() << "loop has " << ExitingBlocks.size() << " exit branches\n";
        }
      }
      if (DEBUG_1)
      {
        errs() << "\n";
      }
      delete myDFG;
      delete myDFG1;
      return false;
    }

    bool isBranch(llvm::BasicBlock::const_iterator ins)
    {

      if (ins->getOpcode() == 2)
        return true;
      return false;
    }
    bool isConditionalBranch(llvm::BasicBlock::const_iterator ins)
    {
      if (ins->getOpcode() == 2 && ins->getNumOperands() >= 1)
        return true;
      return false;
    }

  };

}

char LoopConstantMem::ID = 0;
static RegisterPass<LoopConstantMem> X("LoopConstantMem", "Loop For Constant Memory Pass");


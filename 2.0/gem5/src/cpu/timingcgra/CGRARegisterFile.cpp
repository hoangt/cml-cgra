/*
 * RegisterFile.cpp
 *
 *  Created on: May 24, 2011
 *      Author: mahdi
 */

#include "CGRARegisterFile.h"

CGRA_RegisterFile::CGRA_RegisterFile()
{
    //0 to REGFILESIZE-1: rotating
    //REGFILESIZE to 2*REGFILESIZE-1: fixed
	data = new int[2*REGFILESIZE];
	distance=0;
	for(int i=0;i<2*REGFILESIZE;i++)
	{
		data[i]=0;
	}
	// TODO Auto-generated constructor stub

}

CGRA_RegisterFile::~CGRA_RegisterFile()
{
	delete(data);
	// TODO Auto-generated destructor stub
}

int CGRA_RegisterFile::Read(int address)
{
	if (address >= 2*REGFILESIZE)
	{
		throw new CGRAException("Register access out of range");
	}

    printf("\nREG NUMBER: %d dist: %d\n",address,distance);
    printf("\nIN READ REGFILE\n"); 

    //0 to REGFILESIZE-1: rotating
    //REGFILESIZE to 2*REGFILESIZE-1: fixed
    if(address < REGFILESIZE)
    {
        printf("\nREAD PHYS REG NUMBER: %d\n",(address+distance)%REGFILESIZE);
	printf("\nRotating REGS data: %d\n",data[(address+distance)%REGFILESIZE]); 
    	return data[(address+distance)%REGFILESIZE];
    }
    else
        return data[address];
}
void CGRA_RegisterFile::Write(int address, int value)
{
	if (address >= 2*REGFILESIZE)
	{
		throw new CGRAException("Register access out of range");
	}

    //0 to REGFILESIZE-1: rotating
    //REGFILESIZE to 2*REGFILESIZE-1: fixed

    if(address < REGFILESIZE)
    {
        printf("\nWRITE PHYS REG NUMBER: %d\n",(address+distance)%REGFILESIZE);
	    data[(address+distance)%REGFILESIZE] = value;
    }
    else
        data[address] = value;	 

}
void CGRA_RegisterFile::NextIteration()
{
	distance++;
	distance=distance%REGFILESIZE;
 	//printf("\nIN NEXT ITERATION\n"); 

}

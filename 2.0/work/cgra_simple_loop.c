/*
A program to initialize a CGRA execution on gem5 simulator
    Author: Dipal Saluja
*/
/*SOME SAMPLE instructions
0xe7e00000 = NO OP
0x00c0000x = ADD r0,12 i.e PE[Output]=r0+12
0x07c0000f = ADD Output[Self], 15 i.e PE[Output]=PE[Output]+15
0x00022000 = ADD r0,r1 and assert the Address Bus 
0x00021000 = ADD r0,r1 and assert Data Bus
0x05c0100f = ADD DB,15 and assert the DB 
0x05c0000f = ADD DB,15
0x00082000 = ADD r1,r0 and assert AB
0x00c04001 = ADD r0,1
0x00c04004 = ADD r0,4
0x05c00000 = ADD DB,0
0x03800000 = ADD up,down
0x02c01000 = ADD right,0 and assert DB
0xf0020001 = LT r0,r1 and write to controller
0x9600c064 = LDi r1,
*/

#include <assert.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

globalvariabledeclarations

unsigned int *prolog,*epilog,*kernel;

const int activate_CGRA=15;
int var_to_modify=20;

void* run1 (void* arg) {
    printf("Hello from a run1! (thread ID: %d).\n", (int)pthread_self());
    return NULL;
}
int initCGRA[7]={0x77e00000,0x77e00000, //1st instruction, 0xe7e00000 is the opcode for no operation
0,	//II		
0,	//Epilog length
0,	//Prolog length
0,      //KERNEL COUNTER
0};	//Live-Variable Store Epilog Lenth

int *ptr=initCGRA;


/*initialize the registers for the CGRA
r9=II
r8=EPIlog
r7=Prolog
r6=Len
fp=15
set fp to 15 so that CGRA takes over the control*/
void* run2 (void* arg) {
   //for(i=0;i<10;i++)	
    //	printf("\nbefore C= %d",c[i]);   
	printf("HELLO FROM CGRA_MAIN THREAD THE ARRAY IS :\n");
	printf("\nADDRESS TO MODIFY (ARM): %x size of int is %zu",&var_to_modify,sizeof(var_to_modify));
	asm("mov sl,%[value]" : :[value]"r" (initCGRA[1]):);
	asm("mov r8,%[value]" : :[value]"r" (initCGRA[5]):);//KERNEL COUNTER
	asm("mov r6,%[value]" : :[value]"r" (initCGRA[2]):);//II
	asm("mov r1,%[value]" : :[value]"r" (initCGRA[3]):);//EPILOG LENGTH
	asm("mov r2,%[value]" : :[value]"r" (initCGRA[4]):);//PROLOG LENGTH
	asm("mov r4,%[value]" : :[value]"r" (initCGRA[6]):);//LiveVar Store EPILOG LENGTH
	asm("mov r5,%[value]" : :[value]"r" (kernel):); //address of kernel instructions
	asm("mov r12,%[value]" : :[value]"r" (prolog):); //address of prolog instructions
	asm("mov r10,%[value]" : :[value]"r" (epilog):); //address of epilog instructions
	asm("mov r11,%[value]" : :[value]"r" (activate_CGRA):);
  
  printf("BYEEEE FROM CGRA_MAIN THREAD THE ARRAY IS :\n");
    return NULL;
}

int main(int argc, const char** argv) {
    int cgra_iterator;
    FILE* epi,*pro,*kern, *count;

    printf("\n**********DIPAL %d*********\n",argc);

    epi=fopen("./epilog_ins.bin","rb");
    pro=fopen("./prolog_ins.bin","rb");
    kern=fopen("./kernel_ins.bin","rb");

    int episize,prosize,kernelsize, livevar_st_size;

    fread(&episize,sizeof(int),1,epi);
    fread(&prosize,sizeof(int),1,pro);
    fread(&kernelsize,sizeof(int),1,kern);

	printf("\n**********EPISIZE %d*********\n",episize);
	printf("\n**********PROSIZE %d*********\n",prosize);
	printf("\n**********KERNSIZE %d*********\n",kernelsize);
	printf("\n******SIZE OF UNISGNED INT %d*****\n",sizeof(unsigned int));

    epilog=(unsigned int*)malloc(episize*sizeof(unsigned int));
    prolog=(unsigned int*)malloc(prosize*sizeof(unsigned int));
    kernel=(unsigned int*)malloc(kernelsize*sizeof(unsigned int));
    
    fread(epilog,sizeof(int),episize,epi);
    fread(prolog,sizeof(int),prosize,pro);
    fread(kernel,sizeof(int),kernelsize,kern);

    count=fopen("./livevar_st_ins_count.txt","r");
    fscanf(count, "%d", &livevar_st_size);
   
    int II = kernelsize/(16);
    int epiLength = episize/16;
    int prolength = prosize/16;
    initCGRA[2] = II;
    initCGRA[3] = epiLength;
    initCGRA[4] = prolength;
    initCGRA[6] = livevar_st_size/16;
    printf("\n**********livevar_st_size %d*********\n",livevar_st_size);
    printf("\n**********II %d*********\n",II);
    printf("\n**********PROLOG PC %p*********\n",prolog);
    printf("\n**********PROLOG[1]  %x*********\n",prolog[1]);
    printf("\n**********PROLOG[2]  %x*********\n",prolog[2]);
    printf("\n**********KERNEL PC %p*********\n",kernel);
    printf("\n**********EPILOG PC %p*********\n",epilog);

    fclose(epi);
    fclose(pro);
    fclose(kern);
    fclose(count);

    count=fopen("./loop_iterations.txt","r");
    fscanf(count, "%d", &initCGRA[5]);
    fclose(count);

    printf("\nADDRESS TO MODIFY (ARM): %x size of int is %zu",&var_to_modify,sizeof(var_to_modify));
    pthread_t pth;
    pthread_attr_t attr;
    printf("ORIGINAL VALUE: %d ADDRESS=%x",var_to_modify,&var_to_modify);
    printf("Main thread initialized. TID=%d\n", (int)pthread_self());
    int result = pthread_attr_init(&attr);
    assert(result == 0);
    printf("Main thread called pthread_attr_init\n");

    result = pthread_attr_setscope(&attr, PTHREAD_SCOPE_SYSTEM);
    assert(result == 0);

    printf("Main thread called pthread_attr_setscope\n");

    printf("Main thread creating 1st thread...\n");
//    result = pthread_create(&pth, &attr, run1, NULL);

 //  printf("\nbefore C= %d",d);

    pthread_t pth2;
    printf("Main thread creating 2nd thread...\n");
    result = pthread_create(&pth2, &attr, run2, NULL);

   // printf("\nbefore C= %d",d[0]);
    printf("Main thread calling join w/ 1st thread (id=%lx)... (self=%lx)\n", pth, pthread_self());
  //  pthread_join(pth, NULL);
    printf("Main thread calling join w/ 2nd thread (id=%lx)... (self=%lx)\n", pth2, pthread_self());
    pthread_join(pth2, NULL);
  //  printf("\nafter C= %d",d[0]);
   
    printf("Main thread has self=%d\n", (int)pthread_self());
    printf("Printing Results For CGRA Execution.\n");

    printoutputsaftercgraexecution

    printf("\nMain thread done.\n");
	printf("MODIFIED VALUE: %d",var_to_modify);
}



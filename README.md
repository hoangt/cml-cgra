# SMRA v2.0

SMRA (or Software Managed Reconfigurable Accelerator) is initiative of the compiler-microarchitecture lab to boost and promote development of reconfigurable accelerators. It has been developed as an open-source and an automated framework in order to simulate the applications on coarse-grained reconfigurable arrays (CGRAs), which are associated with multi-cores. SMRA’s toolchain consists of LLVM based compiler to gem5 based processor simulator which aims to accelerate the c/c++ applications given as input. CGRA is also modeled as a core in the gem5 on which the performance-critical loops can be accelerated. 

# How It Works?

Work-flow of SMRA implementation is as follows:

1.	**Preprocessing**: This step identifies and extracts the loops from C code. It also creates a multithreaded file where loop is one thread and rest of application code becomes another thread.
	  Input : application.c
    Output: multithreaded.c and application_loop.c
2.	**Compiler Frontend (LLVM)**: An LLVM pass to generate Data Flow graph (DFG) of the loop.
    Input: application_loop.c
    Output: Node file, Edge file.
3.	**Scheduling and Mapping Through Compiler (REGIMap)**: Mapping algorithm that maps and schedule the node to the CGRA architecture.
    Input: Node file, Edge File, CGRA architecture description
    Output: Schedule file (Prolog schedule, Kernel schedule and epilog schedule), Updated Node and Edge files (updated with routing nodes)
4.	**Instruction Generator/Compiler Backend**: Generates 32 bit instructions for CGRA based on the Mapping. It has custom optimized instruction-set architecture (ISA) for CGRAs.
    Input: Schedule files, updated Node File and Edge File.
    Output: Prolog, kernel and epilog binary files. Inserted into the multithreaded.c  in loop thread.
5.	**Architectural Simulator (gem5)**: CGRA implemented as co-processor with a main processor in ARM.
    Input: multithreaded binary file.
    Output: Stats of acceleration and output verification.
    

<p align="center">
  <img src="http://aviral.lab.asu.edu/wp-content/uploads/2013/08/SMRA.png"/>
</p>



# Setting-Up The Infrastructure

1) Automated steps: 

Give execution access to install and dependencies. 

$ ./depedencies

This installs all the dependencies packages required for LLVM and gem5. This script currently works only for Ubuntu (Tested in 14.04 version). If your Linux is different please install the dependencies manually (Use 2. Manual steps to install packages.)

$ ./install 

This script automatically builds, LLVM base, CGRALoopPass, REGIMap, Instruction Generator and gem5 with SMRA. 

2) Manual steps: 
Firstly, you need to download (or pull) this repository. Afterwards, you need to install the dependencies for gem5 and LLVM tools. Afterwards, you need to build the LLVM and gem5 tools, respectively. These can be done by following commands. 

cd /home/cmlasu/cml-cgra/2.0/gem5/

scons build/ARM/gem5.opt

For compiler pass, you need to copy the MahdiLoop pass to the LLVM transformation pass and need to build it with make command. This will generate an output file with extension .so, which in turn, needs to be linked to the script file. For more information on how to write and build a pass, please see LLVM documentation (http://llvm.org/docs/WritingAnLLVMPass.html).

In case if you face any error regarding the locations of the tools, you can set them permanently by modifying the run script.

# Accelerating Loops On SMRA

Currently, SMRA cannot perform simulation of the application-level acceleration. However, you can execute loops on SMRA through automated tool-chain. To do so, go through a work folder and create a new folder with you source file in c. A sample folder (sample_test) is already available for your reference in the work directory to guide you about how the output directories look like. You need to copy multi-threading template file and run script file in your new folder. Then you can execute run.sh and the tool-chain flow will automate the process for you, yielding final output directories.

# Limitations and Assumptions 

Version 2 of SMRA Supports -

1. Works Well With -O3 Compiler Optimizations (Clang)
2. Data Dependencies
3. Inter-Iteration/Loop-Carried Dependencies (Usage Of Phi Nodes)
4. Fixed Implementation of Software Pipelining/Iterative Modulo Scheduling
5. Provision of Storing Live Variables After Loop Execution On CGRA
6. Provision of Validating Output
7. Comparision of the statistics with standalone main processor run
8. Single Script For Flow And Single Script To Clean The Space Inside Work Folder

Currently, This Version Does Not Support

1. Vector/SIMD Instructions
2. Application Level Simulation
3. Loops With Control Flow (if-then-else, unconditional jumps)
4. Irregular Nested Loops
5. Working with other than FOR Loops 
6. Floating Point Implementation
7. Loops Incurring Function Calls

# Contact Us

For any questions or comments on SMRA development, please email us at cmlasu@gmail.com

CML's CGRA Webpage - http://aviral.lab.asu.edu/coarse-grain-reconfigurable-arrays/

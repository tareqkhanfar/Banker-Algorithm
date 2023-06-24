# Banker's Algorithm Simulation in C
This project is an implementation of the Banker's Algorithm in C. It simulates a multi-process,
multi-resource system, aiming to prevent deadlocks by avoiding unsafe states.

# Overview
The Banker’s Algorithm is a deadlock prevention method that tests for safety by simulating the allocation of predetermined maximum possible amounts of all resources,
and then makes an "s-state" check to test for possible deadlock conditions for all other pending activities, before deciding whether allocation should be allowed to continue.

The Banker’s Algorithm is named so because it represents a scenario where a banker tries to avoid a situation where they are unable to fulfill the financial needs of their clients.

# Input/Output
The program reads from a text file containing the number of processes and resources, as well as matrices indicating maximum resource needs and currently allocated resources.

The program outputs the following:

MAXIMUM matrix.
ALLOCATION matrix.
NEEDS matrix.
AVAILABLE array.
Moreover, it will evaluate the system state and print either a safe sequence (if the system is in a safe state), or a warning indicating the system is unsafe.

# Usage
If the system is safe, the program then asks the user to enter a line that contains a process request. This request is in the form of a process ID, followed by an array of integers, representing requests of resources for the given process.

For example: 2 0 1 3 0

This means that process #2 needs: 0 units of R1, 1 unit of R2, 3 units of R3, 0 units of R4

If the system is still safe after granting the process request, the program updates all matrices and prints the new state. If the system would be unsafe, the program rejects the process request.


# Implementation
This project is implemented using only the C programming language and showcases array manipulation techniques.

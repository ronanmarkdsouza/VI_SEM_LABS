/*
Parallel Programming Lab - 2
Question-1: Write a C program to:
				a. Illustrates the fork-join pattern using OpenMP's parallel directive.
				b. Illustrates the fork-join pattern using multiple OpenMP parallel directives and changing the number of threads two ways.
				c. Illustrates the single-program-multiple-data (SPMD) pattern using two basic OpenMP commands.
Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 08-02-2023
*/

#include<stdio.h>
#include<omp.h>

int main(){
	
	#pragma omp parallel
	printf("Hello Ronan!\n");
	return 0;
}

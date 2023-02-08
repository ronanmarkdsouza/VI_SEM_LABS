/*
Parallel Programming Lab - 2
Question-2: Write a OpenMP program to calculate pow(i,x) 
			for all the threads where i is an integer value and x 
			is the thread_Id.
Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 08-02-2023
*/

#include<stdio.h>
#include<omp.h>
#include<math.h>

int main(){
	int i;
	printf("Enter the value for i: ");
	scanf("%d", &i);
	#pragma omp parallel
	{
		int thread_id = omp_get_thread_num();
		printf("pow(i,x) for thread %d: %.1lf\n",thread_id,pow(i,thread_id));
	}
	return 0;
}

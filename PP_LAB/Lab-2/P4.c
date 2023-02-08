/*
Parallel Programming Lab - 2
Question-4: Write a OpenMP program to implement all the four basic operations of a calculator (Add, Sub, Mul, Div). 
			Create a separate thread to perform the operations.

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 08-02-2023
*/
#include<stdio.h>
#include<omp.h>

float add(float a, float b){
	return a+b;
}

float sub(float a, float b){
	return a-b;
}

float mul(float a, float b){
	return a*b;
}

float div(float a, float b){
	return a/b;
}

int main(){
	float a,b;
	printf("Enter A: ");
	scanf("%f", &a);
	printf("Enter B: ");
	scanf("%f", &b);
	#pragma omp parallel
	{
		#pragma omp sections
		{
			#pragma omp section
			 printf ("A+B = %.1f, \n", add(a,b));
			 
			 #pragma omp section
			 printf ("A-B = %.1f, \n", sub(a,b));
			 
			 #pragma omp section
			 printf ("A*B = %.1f, \n", mul(a,b));
			 
			 #pragma omp section
			 printf ("A/B = %.1f, \n", div(a,b));
		}
	}
	
	return 0;
}

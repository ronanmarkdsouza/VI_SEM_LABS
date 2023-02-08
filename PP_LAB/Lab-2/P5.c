/*
Parallel Programming Lab - 2
Question-5: Write an OpenMP program to perform Arithmetic operations (Add, Sub, Mul, Div) 
			on two vectors A and B of size 4.

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 08-02-2023
*/
#include <stdio.h>
#include <omp.h>
#define VEC_SIZE 4
int i =0;
void add_vec(float vec_a[VEC_SIZE], float vec_b[VEC_SIZE]){
	printf("A+B: ");
	for(i=0;i<VEC_SIZE;i++)
		printf("%.1f ",vec_a[i]+vec_b[i]);
	printf("\n");
}

void sub_vec(float vec_a[VEC_SIZE], float vec_b[VEC_SIZE]){
	printf("A-B: ");
	for(i=0;i<VEC_SIZE;i++)
		printf("%.1f ",vec_a[i]-vec_b[i]);
	printf("\n");
}

void mul_vec(float vec_a[VEC_SIZE], float vec_b[VEC_SIZE]){
	printf("A*B: ");
	for(i=0;i<VEC_SIZE;i++)
		printf("%.1f ",vec_a[i]*vec_b[i]);
	printf("\n");
}

void div_vec(float vec_a[VEC_SIZE], float vec_b[VEC_SIZE]){
	printf("A/B: ");
	for(i=0;i<VEC_SIZE;i++)
		printf("%.1f ",vec_a[i]/vec_b[i]);
	printf("\n");
}

int main(){
	float vec_a[VEC_SIZE] = {1,2,3,4};
	float vec_b[VEC_SIZE] = {4,3,2,1};
	
	#pragma omp parallel
	{
		#pragma omp sections
		{
			#pragma omp section
			add_vec(vec_a, vec_b);
			
			#pragma omp section
			sub_vec(vec_a, vec_b);
			
			#pragma omp section
			mul_vec(vec_a, vec_b);
			
			#pragma omp section
			div_vec(vec_a, vec_b);
		}
	}
	return 0;
}

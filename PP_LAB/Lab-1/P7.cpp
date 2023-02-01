/*
Parallel Programming Lab - 1

Question-7:	Write a C program to read a matrix A of size 5x5. 
			It produces a resultant matrix B of size 5x5. It sets all the principal diagonal elements of B matrix with 0. 
			It replaces each row elements in the B matrix in the following manner. 
				- If the element is below the principal diagonal it replaces it with the maximum value of the row in the A matrix having the same row number of B. 
				- If the element is above the principal diagonal it replaces it with the minimum value of the row in the A matrix having the same row number of B. 

Example: 
A
1	2	3	4	5
5	4	3	2	4
10	3	13	14	15
11	2	11	33	44
1	12	5	4	6

B
0	1	1	1	1
5	0	2	2	2
15	15	0	3	3
44	44	44	0	2
12	12	12	12	0

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 01-02-2023
*/

#include <stdio.h>
#include <iostream>
#define MATSIZE 5

using namespace std;

void mod_mat(int mat[MATSIZE][MATSIZE]){
	
	for(int i=0;i<MATSIZE;i++){
		int max=0, min=100000;
		for(int j=0;j<MATSIZE;j++){
			if(mat[i][j]<min)
				min=mat[i][j];
			if(mat[i][j]>max)
				max=mat[i][j];
		}
		for(int j=0;j<MATSIZE;j++)
			if(i==j)
				cout<<0<<" ";
			else if(i<j)
				cout<<min<<" ";
			else
				cout<<max<<" ";
	cout<<endl;
	}
}
int main(){
	int A[MATSIZE][MATSIZE] = {{1,2,3,4,5},
							   {5,4,3,2,4},
							   {10,3,13,14,15},
							   {11,2,11,33,44},
							   {1,12,5,4,6}};
							   
	mod_mat(A);
	return 0;
}

/*
Parallel Programming Lab - 2
Question-3: Write a OpenMP program that performs the sum of even numbers and odd numbers in a given input array. 
			Create a separate thread to perform the sum of even numbers and odd numbers.

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 08-02-2023
*/
#include<stdio.h>
#include<omp.h>
#define ARR_SIZE 10

int main(){
	int arr[ARR_SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int sum_eve=0, sum_odd=0,i=0;
	#pragma omp parallel for
		for(i=0;i<ARR_SIZE;i++){
			if(arr[i]%2==0)
				sum_eve+=arr[i];
			else if(arr[i]%2!=0)
				sum_odd+=arr[i];
		}
	
	
	printf("Even Sum: %d\nOdd Sum %d",sum_eve, sum_odd);
	return 0;
}

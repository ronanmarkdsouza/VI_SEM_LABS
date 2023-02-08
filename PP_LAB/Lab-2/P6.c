/*
Parallel Programming Lab - 2
Question-6: Write a OpenMP program for generating prime numbers 
			from a given starting number to the given ending number.

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 08-02-2023
*/
#include <stdio.h>
#include <omp.h>
#include <math.h>
int i=0;
int prime(int n){
	int flag=0;
	if(n==0 | n==1)
		flag = 1;		
	for (i=2;i<=n/2;++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }  
  return flag;
}

int main(){
	int start, end,i=0;
	printf("Enter start number: ");
	scanf("%d", &start);
	
	printf("Enter end number: ");
	scanf("%d", &end);
	
	#pragma omp parallel for
	for(i=start;i<end;i++)
			if(prime(i)==0)
				printf("%d\n",i);
			
}

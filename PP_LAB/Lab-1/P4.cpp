/*
Parallel Programming Lab - 1

Question-4: Write a C program to read a word of length N and produce the pattern as shown in the example.
Example: Input: PCBD      
		 Output: PCCBBBDDDD

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 01-02-2023
*/

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void out(string in){
	for(int i=0; i<in.length();i++)
		for(int j=0;j<i+1;j++)
			cout<<in[i];
}

int main(){
	out("PCBD");
	return 0;	
}

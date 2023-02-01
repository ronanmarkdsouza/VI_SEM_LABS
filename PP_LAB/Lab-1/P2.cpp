/*
Parallel Programming Lab - 1

Question-2: Write a program in C to simulate the all the operations of a calculator. Given inputs A and B, find the output for A+B, A-B, A*B and A/B

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 01-02-2023
*/

#include <stdio.h>
#include <iostream>
using namespace std;

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
	cout<<"Enter A: ";
	cin>>a;
	cout<<"Enter B: ";
	cin>>b;
	
	cout<<"A+B: "<<add(a,b)<<" A-B: "<<sub(a,b)<<" A*B: "<<mul(a,b)<<" A/B: "<<div(a,b)<<endl;
	
	return 0;
}


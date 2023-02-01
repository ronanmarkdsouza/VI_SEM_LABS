/*
Parallel Programming Lab - 1

Question-1: Write a program in C to reverse the digits of the following inter array of size 9. Initialize the input array to the following values.
Input array: 18, 523, 301, 1234, 2, 14, 108, 150, 1928
Output array: 81, 325, 103, 4321, 2, 41, 801, 51, 8291

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 01-02-2023
*/

#include <stdio.h>
#include <iostream>
#define ARR_SIZE 9

using namespace std;


int rev(int n){
	int rem, reversed_number;
	while(n != 0) {
    rem = n % 10;
    reversed_number = reversed_number * 10 + rem;
    n /= 10;
  }
  return reversed_number;
}


int main(){
	int arr[ARR_SIZE];
	cout<<"Enter the input numbers: "<<endl;
	for(int i=0; i<9; i++){
		cin>>arr[i];
		arr[i] = rev(arr[i]);
	}
	
	for(int i=0; i<9; i++)
		cout<<arr[i]<<" ";
	return 0;
}

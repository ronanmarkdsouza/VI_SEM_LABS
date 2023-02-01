/*
Parallel Programming Lab - 1

Question-5:	Write a C program to read two strings S1 and S2 of same length and produce the resultant string as shown below.
S1: string      S2: length     Resultant String: slternigntgh

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 01-02-2023
*/

#include <stdio.h>
#include <iostream>
using namespace std;

void str_alt(string a, string b){
	if(a.length() == b.length())
		for(int i=0; i<a.length(); i++)
			cout<<a[i]<<b[i];
	else
		cout<<"Enter strings with same length and try again!";
}

int main(){
	str_alt("string", "length");
	return 0;
}

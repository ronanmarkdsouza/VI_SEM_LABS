/*
Parallel Programming Lab - 1

Question-3: Write a program in C to toggle the character of a given string. 
Example: suppose the string is "HeLLo", then the output should be "hEllO".

Author: Ronan Mark D'souza - 200968256
		DSCA, Manipal Institute of Technology
Date: 01-02-2023
*/

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

string toggle(string str){
	int n = str.length();
	
	for(int i=0;i<n;i++){
		
		if(isalpha(str[i])){
			if(islower(str[i])){
				str[i] = toupper(str[i]);
			}
			
			else{
				str[i] = tolower(str[i]);
			}
		}
		
		else{
			str[i] = str[i];
		}
	}
	return str;
}


int main(){
	string inp;
	cout<<"Enter input string: ";
	cin>>inp;
	cout<<"Toggled case: "<<toggle(inp);
	return 0;
}

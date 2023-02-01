# Lab-1
1)	Write a program in C to reverse the digits of the following inter array of size 9. Initialize the input array to the following values.
Input array: 18, 523, 301, 1234, 2, 14, 108, 150, 1928
Output array: 81, 325, 103, 4321, 2, 41, 801, 51, 8291
<br>
2)	Write a program in C to simulate the all the operations of a calculator. Given inputs A and B, find the output for A+B, A-B, A*B and A/B. 
<br>
3)	Write a program in C to toggle the character of a given string. 
Example: suppose the string is “HeLLo”, then the output should be “hEllO”.
<br>
4)	Write a C program to read a word of length N and produce the pattern as shown in the example.
Example: Input: PCBD      Output: PCCBBBDDDD
<br>
5)	Write a C program to read two strings S1 and S2 of same length and produce the resultant string as shown below.
S1: string      S2: length     Resultant String: slternigntgh
<br>
6)	Write a C program to perform Matrix times vector product operation.
<br>
7)	Write a C program to read a matrix A of size 5x5. It produces a resultant matrix B of size 5x5. It sets all the principal diagonal elements of B matrix with 0. It replaces each row elements in the B matrix in the following manner. If the element is below the principal diagonal it replaces it with the maximum value of the row in the A matrix having the same row number of B. If the element is above the principal diagonal it replaces it with the minimum value of the row in the A matrix having the same row number of B. 
<br>
Example: 
<pre>
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
</pre>
<br>
8)	Write a C program that reads a matrix of size MxN and produce an output matrix B of same size such that it replaces all the non-border elements of A with its equivalent 1’s complement and remaining elements same as matrix A. Also produce a matrix D as shown below.
Example:  
<pre>
A
1	2	3	4
6	5	8	3
2	4	10	1
9	1	2	5

B
1	2	3	4
6	10	111	3
2	11	101	1
9	1	2	5

D
1	2	3	4
6	2	7	3
2	3	5	1
9	1	2	5
</pre>
<br>
9)	Write a C program that reads a character type matrix and integer type matrix B of size MxN. It produces and output string STR such that, every character of A is repeated r times (where r is the integer value in matrix B which is having the same index as that of the character taken in A). 

Example:              A					B
		p     C    a    P 		                     1   2   4   3
		e    X     a    M                                       2   4    3   2

Output string STR: pCCaaaaPPPeeXXXXaaaMM

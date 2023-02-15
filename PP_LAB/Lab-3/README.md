# Lab-3
1. Write an OpenMP program to implement Matrix multiplication.<br>  a.Analyze the speedup and efficiency of the parallelized code.<br>  b.Vary  the  size  of  your  matrices  from 200,  400,  600,  800and  1000and measure the runtime with one threadand four threads.<br>  c.For each matrix size, change the number of threads from 2,4,6 and 8and plot the speedup versus the number of threads. Compute the efficiency.
2. Write an OpenMP program to perform Matrix times vector multiplication. Vary the matrix and vector size and analyze the speedup and efficiency of the parallelized code.
3. Write an OpenMpprogram to read a matrix A of size 5x5. It produces a resultant matrix B of size 5x5. It setsall the principal diagonal elements of B  matrix  with  0.  It  replaces  each  row  elements  in  the  B  matrix  in  the following  manner.  If  the  element  is  below  the  principal  diagonal  it replaces it with the maximum value of the rowin the A matrix having the same row number of B. If the element is above the principal diagonal it replaces it with the minimum value of the rowin the A matrix having the same  row  number  of  B.Analyze  the  speedup  and  efficiency  of  the parallelized code.
4. Write aparallel program using OpenMPthat reads a matrix of size MxN and produce an output matrix B of same size such that it replaces all the non-border  elements  of  A  with  its  equivalent  1’s  complement  and remaining elements same as matrix A.Also produce a matrix D as shown below.
Example: 
<pre>
A
1   2  	3   4
6   5   8   3
2   4   10  1
9   1   2   5

B
1   2  	3   4
6   10  111 3
2   11  101 1
9   1   2   5

D
1   2  	3   4
6   2   7   3
2   3   5   1
9   1   2   5
</pre>
5. Write a parallelprogram in OpenMP to reverse the digits of the following integer array of size 9.Initialize the input array to the following values:
<pre> 
  a.Input array: 18, 523, 301, 1234, 2, 14, 108, 150, 1928
  b.Output array: 81, 325, 103, 4321, 2, 41, 801, 51, 8291
</pre>

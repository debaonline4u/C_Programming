#include <stdio.h>
 
int main(void) {
	int test,number,devidor,counter;
	scanf("%d%d",&test,&devidor);	// Taking input of Number of test cases and Devidor.
	if(test>10000000)			// Constraints check
	    test=0;
	if(devidor>10000000)		// Constraint check
	    test=0;
	counter=0;
	while(test--)
	{
	    number=0;
	    scanf("%d",&number);		// Taking input of desired numbers
	    if(number>1000000000)		// Constraint check of number. 
	   {
	        test=0;
	        continue;
	   }
	    if(number%devidor==0)		// Real Logic. 
	        counter++;
	}
	printf("%d",counter);
	return 0;
}
 
 
 /* *********** PROBLEM DETALS *****************************
 
 The purpose of this problem is to verify whether the method you are using to read input data is sufficiently
  fast to handle problems branded with the enormous Input/Output warning. 
  You are expected to be able to process at least 2.5MB of input data per second at runtime.

Input:
-------------
The input begins with two positive integers n k (n, k<=10^7). The next n lines of input contain one 
positive integer ti, not greater than 10^9, each.

Output:
--------------
Write a single integer to output, denoting how many integers t[i] are divisible by k.

Example:
----------------
Input:
----------------
7 3
1
51
966369
7
9
999996
11

Output:
---------------
4

************************************************************************* */
 

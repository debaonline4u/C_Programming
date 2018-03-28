#include<stdio.h>
// Split Sums Problem Code: SPSUM

int gcd(long long int s1,long long int s2)
{
	if(s1==0)
		return s2;
	else
		return(gcd(s2%s1,s1));
}

int main()
{
	
	int test_case;
	long long int n,m,sum,diff,s1,s2;

	// Taking input for test case and run each test_case.
	for(scanf("%d",&test_case);test_case>0;test_case--)
	{	
		if(test_case>20)	// Check for constraints
		{
			test_case=0;
			break;
		}
		// Take input for n and m (according to problem n and m are defined)
		scanf("%lld%lld",&n,&m);
		// Check for constraints
		if(n<1 || n>1000000000 || m<0 || m>1000000000000000000)
		{
			test_case=0;
			break;
		}
	
		sum=(n*(n+1))/2;
		if((sum+m)%2!=0)
		{
			printf("No\n");
			continue;	
		}
			
	
		s1=(sum+m)/2;
		s2=(sum-m)/2;
	
		if(gcd(s1,s2)==1)
			printf("Yes\n");
		else
			printf("No\n");
	}	


	return 0;

}










/* ****************** PROBLEM STATEMENT   *****************************

A and B are brothers and like playing with marbles.Their mother buys them N marbles to play with.
The preciousness of each marble is a natural number from 1 to N and no two marbles have same preciousness.

Since A and B are good at maths they want to divide all those N marbles among them in such a way that sum of the preciousness
 of all marbles that A receives and sum of the preciousness of all marbles that B receives after distribution are co-primes 
 i.e the gcd(greatest common divisor) of their sum is 1.

Also the absolute value of difference between the sum of the preciousness of marbles of A and B should be exactly M.

Help A and B in finding whether such a distribution of N marbles between them is possible or not.

Formally, you have to tell whether you can distribute first N natural numbers in two sets such that the absolute difference 
of the sum of numbers in the two sets is equal to M and the gcd of their sum is 1.


Note that one of the set can be empty and greatest common divisor of 0 and k is k 

Input
------------------------
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two integers N and M denoting the number of marbles and the absolute difference of sum respectively.

Output
-----------------------
For each test case, output a single line.
Print �Yes� if there exist a valid distribution of marbles between A and B else print �No�.

Constraints
-----------------------
1 = T = 20
1 = N = 1,000,000,000
0 = M = 1018
Example
Input:
----------------------
2
5 7
1 2 


Output:
---------------------
Yes
No 





***************************************************** */


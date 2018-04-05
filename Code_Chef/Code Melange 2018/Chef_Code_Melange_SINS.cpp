#include<stdio.h>
// The Deadly Sin Problem Code: SINS
// Problem Link: https://www.codechef.com/CMEL2018/problems/SINS

long long int gcd(long long int m,long long int b)
{
	if(b==0)
		return m;
	
	return gcd(b,m%b);
}

int main()
{
	long int test;
	long long int m,b;
	printf("Enter Number of test cases: ");
	for(scanf("%ld",&test);test>0;test--)
	{
		printf("Enter Number of Chocolates Meliodas and Ban have correspondingly: ");
		scanf("%lld%lld",&m,&b);
		printf("Remaining Chocolates: ");
		printf("%lld\n",2*gcd(m,b));
	}
	
	return 0;
}
		
		
/********** PROBLEM STATEMENT *********************8

Meliodas and Ban are fighting over chocolates. Meliodas has X chocolates, while Ban has Y. 
Whoever has lesser number of chocolates eats as many chocolates as he has from the other's collection. 
This eatfest war continues till either they have the same number of chocolates, or atleast one of them is left with no chocolates.
Can you help Elizabeth predict the total no of chocolates they'll be left with at the end of their war?

Input:
-----------------
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, which contains two integers X,Y, the no of chocolates Meliodas and Ban have, respectively.
Output:
-----------------
For each testcase, output in a single line the no of chocolates that remain after Ban and Meliodas stop fighting.

Constraints
-----------------
1=T=100000
0=X,Y=109
Sample Input:
------------------
3
5 3
10 10
4 8

Sample Output:
-------------------
2
20
8

EXPLANATION:
--------------------
Denoting Meliodas as M, Ban as B.

Testcase 1:
M=5, B=3
Ban eates 3 chocolates of Meliodas.
M=2, B=3
Meliodas eats 2 chocolates of Ban.
M=2, B=1
Ban eates 1 chocolate of Meliodas.
M=1, B=1
Since they have the same no of candies, they stop quarreling.
Total candies left: 2

Testcase 2:
M=10, B=10
Since both of them had the same candies to begin with, there was no point in fighting.
Total candies left: 20

Testcase 3:
M=4, B=8
Meliodas eats 4 chocolates of Ban.
M=4, B=4
Since they have the same no of candies, they stop quarreling.
Total candies left: 8



***********************************************************************************************   */

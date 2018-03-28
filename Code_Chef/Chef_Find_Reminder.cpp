// Find Remainder
// Write a program to find the remainder when two given numbers are divided.
#include<stdio.h>
int main()
{
	int test_case;
	long long int first,second;
	for(scanf("%d",&test_case);test_case>0;test_case--)
	{
		if(test_case<0 || test_case>1000)
		{
			test_case=0;
			break;
		}
		scanf("%lld%lld",&first,&second);
		if(first<0 || first>10000 || second<0 || second>10000)
			continue;
		printf("%d\n",first%second);
		
	}
	
	return 0;
}

/*   ************************** PROBLEM STATEMENT ****************************8

Write a program to find the remainder when two given numbers are divided.

Input
--------------
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output
---------------
Find remainder when A is divided by B.

Constraints
------------------
1 = T = 1000
1 = A,B = 10000
Example
Input
-----------------
3 
1 2
100 200
10 40

Output
--------------------
1
100
10






*********************************************** */




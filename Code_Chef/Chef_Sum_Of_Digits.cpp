#include<stdio.h>

int main()
{
	int test_case,num,sum=0,temp=0;
	for(scanf("%d",&test_case);test_case>0;test_case--)	// Handles test case
	{
		if(test_case<1 || test_case>1000)	// Constraints for test case
		{
			test_case=0;
			break;
		}
		scanf("%d",&num);		// Collect number
		if(num<1 || num>1000000)	// Constraints for each number
		{
			test_case=0;
			break;
		}
			
		
		while(num>0)	// Calculate sum
		{
			temp=num%10;
			sum+=temp;
			num=num/10;
		}
		printf("%d\n",sum);
		sum=0;
	}
	
	return 0;
}















/*
*********************** PROBLEM STATEMTNT  *************************************

You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
-----------------
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
----------------
Calculate the sum of digits of N.

Constraints
----------------
1 = T = 1000
1 = N = 1000000
Example

Input
------------------
3 
12345
31203
2123
Output
15
9
8

*/

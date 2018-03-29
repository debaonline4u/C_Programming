// First and Last Digit Problem Code: FLOW004

#include<stdio.h>
int main()
{
	int test_case,sum=0;
	long int num;
	for(scanf("%d",&test_case);test_case>0;test_case--)
	{
		if(test_case<0 || test_case>1000)
		{
			test_case=0;
			break;
		}
		scanf("%ld",&num);
		if(num<0 || num>1000000)
			continue;
		
		if(num<10)
		{
			printf("%ld\n",num);
			continue;
		}
		sum+=num%10;
		while(num>=10)
			num=num/10;
		sum+=num;
		printf("%d\n",sum);
		sum=0;
			
	}
	return 0;
}

/* **********  PROBLE STATEMENT   *************************

If Give an integer N . Write a program to obtain the sum of the first and last digit of this number.

Input
--------------
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains an integer N.

Output
-----------
Display the sum of first and last digit of N.

Constraints
---------------
1 = T = 1000
1 = N = 1000000
Example
Input
-------------
3 
1234
124894
242323

Output
----------------------
5
5
5

*******************************************************************   */






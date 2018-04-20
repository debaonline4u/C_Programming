// Reverse The Number Problem Code: FLOW007

#include<stdio.h>

int main()
{
	int test;
	long int num;
	for(scanf("%d",&test);test>0;test--)
	{
		if(test<1 || test>1000)
			break;
		scanf("%ld",&num);
		if(num<1 || num>100000)
			continue;
		int temp,flag=0;
		while(num>0)
		{
			temp=num%10;
			if(temp>0)
				flag=1;
			if(flag==1)
				printf("%d",temp);
			num=num/10;
		}
		printf("\n");
	}
	
	return 0;
}


/* ************************ PROBLEM STATEMENT **************************************

If an Integer N, write a program to reverse the given number.

Input
-----------
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
-------------
Display the reverse of the given number N.

Constraints
------------------
1 = T = 1000
1 = N = 100000	[This constraint is not valid]

Example
Input
-------------
4
12345
31203
2123
2300

Output
--------------
54321
30213
3212
32


********************************************************************************************  */


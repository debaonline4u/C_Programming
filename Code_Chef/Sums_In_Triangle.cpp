// Sums in a Triangle Problem Code: SUMTRIAN

#include<stdio.h>

int main()
{
	int test;
	for(scanf("%d",&test);test>0;test--)
	{
		int n;
		scanf("%d",&n);
		
		int arr[n][n];
		for(int i=0;i<n;i++)			// Taking input to array. 
			for(int j=0;j<i+1;j++)
				scanf("%d",&arr[i][j]);
		
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<i+1;j++)
//				printf("%d",arr[i][j]);
//			printf("\n");
//		}
		
		for(int i=n-1;i>0;i--)
		{
			for(int j=0;j<i;j++)
			{
				if(arr[i][j]>arr[i][j+1])
					arr[i-1][j]=arr[i-1][j]+arr[i][j];
				else
					arr[i-1][j]=arr[i-1][j]+arr[i][j+1];
				
//				printf("%d ",arr[i-1][j]);
			}
		}
		
		printf("%d\n",arr[0][0]);
			
	}
	
	return 0;
}



/* *****************  PROBLEM STATEMENT ***************************************

Let's consider a triangle of numbers in which a number appears in the first line, two numbers appear in the second line, three in the third line, etc. 
Develop a program which will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that:

on each path the next number is located on the row below, more precisely either directly below or below and one place to the right;
the number of rows is strictly positive, but less than 100
all numbers are positive integers between 0 and 99.

Input
---------------
In the first line integer n - the number of test cases (equal to about 1000). 
Then n test cases follow. Each test case starts with the number of lines which is followed by their content.

Output
----------------
For each test case write the determined value in a separate line.

Example
Input:
----------
2
3
1
2 1
1 2 3
4 
1 
1 2 
4 1 2
2 3 1 1 

Output:
--------------
5
9

Problem Explanation:
https://www.youtube.com/watch?v=ZSNWyyaxFYM

*******************************************************************************************  */




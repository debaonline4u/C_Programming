// Second Largest Problem Code: FLOW017
// I just tried some funny acts

#include<stdio.h>

int main()
{
	int test;
	for(scanf("%d",&test);test>0;test--)
	{
		long int arr[3];
		scanf("%ld %ld %ld",arr+0,arr+1,arr+2);
		long int largest=arr[0],smallest=arr[0],sum=arr[0];
		for(int i=1;i<3;i++)		// Here I collected Largest and Smallest number and then subtract sum of both from total Sum.  School math. 
		{
			if(arr[i]>largest)
				largest=arr[i];
			if(arr[i]<smallest)
				smallest=arr[i];
			sum+=arr[i];
		}
//		printf("Largest=%ld Smallest=%ld\n",largest,smallest);
		printf("%ld\n",sum-(largest+smallest));
	}
	return 0;
}

/*************** PROBLEM STATEMENTS ****************************************
Three numbers A, B and C are the inputs. Write a program to find second largest among three numbers.

Input
----------------
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three integers A, B and C.

Output
---------------
Display the second largest among A, B and C.

Constraints
--------------------
1 = T = 1000
1 = A,B,C = 1000000

Example
Input
-------------
3 
120 11 400
10213 312 10
10 3 450

Output
------------------------
120
312
10

******************************************************************** */

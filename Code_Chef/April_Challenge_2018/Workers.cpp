#include<stdio.h>
#include<stdlib.h>

// Workers Problem Code: CHEFWORK

int main()
{
	int n,token=1;
	scanf("%d",&n);
	if(n<1 || n>1000)		// Constraints for n
	{
		n=0;
		token=0;
	}
	if(token==1)	// If constraints for n is ok, then proceed. 
	{
		long int cost[n];
		int type[n];
		long int cost1=100000,cost2=100000,cost3=100000;
		
		for(int i=0;i<n;i++)
		{
			scanf("%ld",&cost[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&type[i]);
		}
		for(int i=0;i<n;i++)
		{
			if(type[i]==1 && cost[i]<cost1)
				cost1=cost[i];
			if(type[i]==2 && cost[i]<cost2)
				cost2=cost[i];
			if(type[i]==3 && cost[i]<cost3)
				cost3=cost[i];
		}
	//	printf("Min Cost1=%d, Min Cost2=%d, Min Cost3=%d",cost1,cost2,cost3);
		if(cost1+cost2 < cost3)
			printf("%ld",cost1+cost2);
		else
			printf("%ld",cost3);
	}
	
	return 0;	
}


/* ************************************* PROBLEM STATEMENT ***************************************

There are N workers; each worker is of one of the following three types:

A translator translates some text from Chef's language to another langague.
An author writes some text in Chef's language.
An author-translator can both write a text in Chef's language and translate it to another language.
Chef wants to have some text written and translated into some language (different from Chef's language). 
Chef can't do either of those tasks, but he can hire workers. For each i (1=i=N), if he hires the i-th worker, he must pay that worker ci coins.

Help Chef find the minimum total number of coins he needs to pay to have a text written and translated. 
It is guaranteed that it is possible to write and translate a text.

Input
------------
The first line of the input contains a single integer N denoting the number of workers.
The second line contins N space-separated integers c1,c2,...,cN denoting the numbers of coins Chef has to pay each hired worker.
The third line contains N space-separated integers t1,t2,...,tN denoting the types of workers. For each valid i, the i-th worker is a translator if ti=1, 
an author if ti=2 or an author-translator if ti=3.

Output
---------------
Print a single line containing one integer — the minimum number of coins Chef has to pay.

Constraints
----------------
1=N=1,000
1=ci=100,000 for each valid i
1=ti=3 for each valid i

Subtasks
-----------------
Subtask #1 (15 points): all workers are author-translators

Subtask #2 (85 points): original constraints

Example Input
-------------------
5
1 3 4 6 8 
1 2 1 2 3
Example Output
--------------------
4
Explanation
---------------------
Chef can hire 2 workers: worker 1, who is a translator, and worker 2, who is an author. In total, he pays them 1+3=4 coins.

********************************************************************************************************************************  */



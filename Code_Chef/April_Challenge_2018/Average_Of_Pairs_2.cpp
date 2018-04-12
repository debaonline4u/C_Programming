// Average of Pairs Problem Code: AVGPR
// This approach is working fine for given test cases, but codechef online judge is showing Wrong Answer.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int test,temp=0,count=0,token=1;
	long int max_value=0;
	for(scanf("%d",&test);test>0;test--)
	{
		if(test<1 || test>10)		// Constraints for Test Cases. 
		{
			test=0;
			break;
		}
		long int size;
		scanf("%ld",&size);
		if(size<1 || size>100000)		// Constraints for N or size. 
			continue;
		
		int arr[size];
		for(int i=0;i<size;i++)			// Input to array
		{	
			scanf("%d",&arr[i]);
			if(arr[i]>1000 || arr[i]<-1000)			// Constraints for each value of the array. 
			{
				token=0;
				break;
			}
			if(arr[i]>max_value)		// While taking input, we are keeping track of max value entered. 
				max_value=arr[i];
		}

		if(token==0)		// if any value of array is violating constraint, then skip the process, and execute next one. 
		{
			token=1;
			continue;
		}
		if(max_value>size)
			max_value++;
		else
			max_value=size+1;
			
//		 Now create a Hash table to store presence of each number. 
		int hash_table[max_value];		
		for(int i=0;i<max_value;i++)		// array members initialized to ZERO
			hash_table[i]=0;
			
//		 Creating entries in hash table. [Presence of each element in hash table.]
		for(int i=0;i<size;i++)		
		{
			temp=arr[i];
//			printf("Temp=%d\n",temp);
			hash_table[temp]=1;
		}
					
		// Now come to actual logic to count the pairs present in array, that satisfy our problem statement. 
		for(int i=0;i<size-1;i++)
		{
			temp=0;
			for(int j=i+1;j<size;j++)
			{
				temp=arr[i]+arr[j];
				if(temp%2==0)
				{
//					printf("Pair <%d %d>\n",arr[i],arr[j]);
					temp=temp/2;
					if(hash_table[temp]==1)
						count++;
				}	
				temp=0;
			}
		}	// End of for
		
		printf("%d\n",count);
		count=0;
		
	}
	
	return 0;
}



/****************************** PROBLEM STATEMENT *******************************************************

You are given an integer sequence A with length N.

Find the number of (unordered) pairs of elements such that the average of these two elements is also present in the sequence. 
Formally, find the number of pairs (i,j) such that 1=i<j=N and there is an index k (1=k=N) for which 2Ak=Ai+Aj holds.

Input
----------------
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.

Output
----------------
For each test case, print a single line containing one integer — the number of valid pairs (i,j).

Constraints
-----------------
1=T=10
1=N=105
|Ai|=103 for each valid i
Subtasks
Subtask #1 (30 points): 1=N=103
Subtask #2 (70 points): 1=N=105

Example Input
-------------------
3
2
2 2
3
2 1 3
6
4 2 5 1 3 5

Example Output
-------------------
1
1
7

Explanation
--------------------
Example case 1: We can take k for Ak to be either 1 or 2, since Ak=2 either way. 
Since the problem asks for unordered pairs, (1,2) is the only possible valid pair (the same as (2,1)). Hence, the answer is 1.

Example case 2: We see that A1=2=(1+3)/2. No other valid pair exists.

**************************************************************************************************************  */







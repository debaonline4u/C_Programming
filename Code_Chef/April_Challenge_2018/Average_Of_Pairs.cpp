// Average of Pairs Problem Code: AVGPR
// This approach is working fine for given test cases, but codechef online judge is showing Runtime Error. 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int test,max_value=0,temp=0,count=0,token=1;
	for(scanf("%d",&test);test>0;test--)
	{
		if(test<1 || test>10)		// Constraints for Test Cases. 
		{
			test=0;
			break;
		}
		int size;
		scanf("%d",&size);
		if(size<1 || size>100000)		// Constraints for N or size. 
			continue;
		
		int arr[size];
		for(int i=0;i<size;i++)			// Input to array
		{	
			scanf("%d",&arr[i]);
			if(arr[i]>1000)			// Constraints for each value of the array. 
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
		max_value++;		// We want to an extra space in hash table. 
		// Now create a Hash table to store presence of each number. 
		int hash_table[max_value];		
		for(int i=0;i<max_value;i++)		// array members initialized to ZERO
			hash_table[i]=0;
			
		int presence[max_value][max_value];		// Creating presence array to avoid repeatedly checking
		for(int i=0;i<max_value;i++)
			for(int j=0;j<max_value;j++)
				presence[i][j]=0;
		
		for(int i=0;i<size;i++)		// Creating entries in hash table. [Presence of each element in hash table.]
		{
			temp=arr[i];
//			printf("Temp=%d\n",temp);
			hash_table[temp]=1;
		}
			

//		for(int i=0;i<max_value;i++)		// Printing hash table. 
//			printf("%d ",hash_table[i]);

		// Now come to actual logic to count the pairs present in array, that satisfy our problem statement. 
		for(int i=0;i<size-1;i++)
		{
			temp=0;
			for(int j=i+1;j<size;j++)
			{
				int x=arr[i];
				int y=arr[j];
//				printf("Presence [i=%d][j=%d] = %d\n",x,y,presence[x][y]);
				if(presence[x][y]==0)
				{
					presence[x][y]=1;
					temp=arr[i]+arr[j];
					if(temp%2==0)
					{
						
//						printf("Arr[i=%d]+Arr[j=%d]\n",arr[i],arr[j]);

						temp=temp/2;
						if(hash_table[temp]==1)
							count++;
					}	
				}
				
			}
		}	// End of for
		
		printf("%d\n",count);
		count=0;
		
	}
	
	return 0;
}






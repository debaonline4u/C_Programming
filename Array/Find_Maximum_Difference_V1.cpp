// Find maximum difference between two elements in an array such that larger number appears after the smaller number.
#include<stdio.h>
#include<stdlib.h>
// Naive approach  is followed here. 
int FindMaxDiff(int arr[],int size) 
{
	int a,b,curr_max=0;
	for(int index=0;index<size;index++)
	{
		a=arr[index];
		
		for(int index2=index+1;index2<size;index2++)
		{
			if(arr[index2]>arr[index])	
			{
				b=arr[index2];
				if((b-a)>=curr_max)
					curr_max=b-a;
			}
		}
	}
	return(curr_max);
}

int main()
{
	int size;
	int *arr;
	
	printf("Enter How  many elements in array: "); // Asking user about size of array
	scanf("%d",&size);
	
	arr=(int *)malloc(sizeof(int)*size);
	
	printf("\nEnter %d numbers to Array: ",size); // Taking inputs to array. Input should be sorted in order. 
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	
	printf("\nMaximum difference in array is: %d",FindMaxDiff(arr,size));
	
	return 0;
}

/*

Time Complexity=O(n^2)
Space Complexity=O(1)


*/















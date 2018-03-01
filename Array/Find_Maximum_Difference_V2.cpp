// Find maximum difference between two elements in an array such that larger number appears after the smaller number.
#include<stdio.h>
#include<stdlib.h>
/*

Algorithm:
1. Construct the difference array from given array.
2. Find the maximum sum subarray in difference array. 

*/

int FindMaxDiff(int arr[],int size)
{
	int current_diff=0,new_size=size-1;
	int *diff=(int *)malloc(sizeof(int)*new_size);
	
	for(int index=0;index<new_size;index++)  // Constructing difference array. 
	{
		diff[index]=arr[index+1]-arr[index];
	}
//	for(int index=0;index<new_size;index++)  // Printing difference array.
//	{
//		printf("%d\t",diff[index]);
//	}
	if(diff[0]>0)      			// if first element of diff array is positive then store it to current_diff, otherwise it's value is already 0. 
		current_diff=diff[0]; 
	
	// We have to find 1st +ve no in diff array and start our rest of logic. 
	int new_index;
	for(int index=0;index<new_size;index++)
	{
		if(diff[index]>=0)
		{			
			new_index=index;
			break;			
		}
	}
	
	for(int index=new_index;index<new_size-1;index++)		 // Now find max sum subarray in difference array. 
	{
		diff[index+1]=diff[index]+diff[index+1];
		if(diff[index+1]>current_diff)
			current_diff=diff[index+1];
//		printf("\nCurrent_Diff: %d\t",current_diff);
	}
	return(current_diff);
	
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

Time Complexity=O(n)
Space Complexity=O(n) - for difference array. 

Optimization in Space: If we can calculate the difference dynamically, so we don't have to store it in a separate array.
By this way we can reduce the space complexity to O(1). 

*/









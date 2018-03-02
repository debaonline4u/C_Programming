// Find maximum difference between two elements in an array such that larger number appears after the smaller number.
#include<stdio.h>
#include<stdlib.h>

int getMaxDiff(int arr[],int size)
{
	int min_ele_so_far=arr[0]; 			// this element take care of "minimum element found so far in the loop".
	int max_diff_so_far=arr[1]-arr[0];	// this element takes care of "maximum element found  so far in the loop".
	int curr_diff=arr[1]-arr[0];		// this element takes care of "current difference between current element and minimum element found so far".
	for(int index=1;index<size;index++)
	{
		if(arr[index]<min_ele_so_far)	// if current element is lesser than minimum element, then assign it to minimum element. 
			min_ele_so_far=arr[index];
		else
		{
			curr_diff=arr[index]-min_ele_so_far;	// find current difference 
			if(curr_diff>max_diff_so_far)			// and if current difference is greater than max difference, then assign it to maximum difference. 
				max_diff_so_far=curr_diff;
		}
	}
	return max_diff_so_far;				// if array is in descending order,then a -ve number is returned. 
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
	
	printf("\nMaximum difference in array is: %d",getMaxDiff(arr,size));
	
	return 0;
}




/*

Time Complexity=O(n)
Space Compexity=O(1)

*/





// Given an array, find two elements  whose sum is closest to ZERO.
/*
1. Sort the array
2. Use two pointers left and right, scan entire array
*/

#include<stdio.h>
#include<stdlib.h>

#define INT_MAX 99999;	// Here we can get a warning as INT_MAX redefined - which is defined as 2147483647

int compareFun(const void * a, const void * b) { 	// This function is impleented by Quick Sort. 
   return ( *(int*)a - *(int*)b );
}


void sumCloseToZero(int arr[],int size)
{
	int curr_sum,closest_sum,l_index=0,r_index=size-1,min_l_index=l_index,min_r_index=size-1;
	closest_sum=INT_MAX;
	
	qsort(arr,size,sizeof(int),compareFun); // Sort array using Quick Sort.
	
	while(l_index<r_index)
	{
		curr_sum=arr[l_index]+arr[r_index];	// Calculating the current sum
		if(abs(curr_sum)<abs(closest_sum))	// if our current sum is smaller than previously stored closest sum, then we store it. 
		{
			closest_sum=curr_sum;
			min_l_index=l_index;
			min_r_index=r_index;
		}
		if(curr_sum<0)
			l_index++;
		else
			r_index--;
	}
	printf("\nThe Two Elements whose sum is closest to ZERO %d and %d\nand Sum is %d",arr[min_l_index],arr[min_r_index],closest_sum);
}

int main()
{
	int *arr,size;
	
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	arr=(int *)malloc(size*sizeof(int));
	
	printf("Enter %d elements\n",size);
	for(int index=0;index<size;index++)
		scanf("%d",&arr[index]);
	
	sumCloseToZero(arr,size);
	
	return 0;
}



/*
Time Complexity = O(n logn) for Quick sort best case + O(n) for implementation of function.
finally Time complexity = O(nlogn)

Space Complexity = O(1) - Constant space is used. No extra space is used. 

*/













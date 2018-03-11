// Separate 0's and 1's in an array - Approach 2 (Partition Method)
// Here we scan array with two pointers left and right. When left points to an 1 and when right points to  an 0, then swap both 1 and 0.
// Continue this untill we've left < right.
#include<stdio.h>
#include<stdlib.h>

int * separateZeroWithOneV2(int arr[],int size)
{
	int left,right,temp;
	for(left=0,right=size-1;left<right;)
	{
		if(arr[left]==0)	// Move left pointer towards right if  we find a zero. otherwise we'll pause the left pointer here.
			left++;
		if(arr[right]==1)	// Move right pointer towards left if we find a one. otherwise we'll pause the right pointer  here.
			right--;
		if(arr[left]==1 && arr[right]==0)	// When  we find that  our situation is fabourable, then swap two numbers. 
		{
			// Swap both the elements.
			temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
		}
	}
	
	return arr;
	
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
		
	arr=separateZeroWithOneV2(arr,size);
	
	printf("\nAfter Segregation of zero's and 1's Array elements: \n");
	for(int index=0;index<size;index++)
		printf("%d  ",arr[index]);
		
	return 0;
		
}

/*

Time Complexity = O(n)
Space Compleixy = O(1)

*/













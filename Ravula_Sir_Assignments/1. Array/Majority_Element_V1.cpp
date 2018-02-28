// Finding majority element of an array. - Naive approach.
// a majority element should present atleast (n/2)+1 time in the array. 
#include<stdio.h>
#include<stdlib.h>

int majorityElement(int arr[],int size)
{
	int n=(size/2)+1;
	int index;
	for(index=0;index<size;index++)
	{
		if(arr[index]==arr[index+n-1])
			return (arr[index]);
	}
	if(index==size)
		return -121;
}

int main()
{
	int size;
	int *arr;
	
	printf("Enter How  many elements in array: "); // Asking user about size of array
	scanf("%d",&size);
	
	arr=(int *)malloc(sizeof(int)*size);
	
	printf("\nEnter %d numbers to Array: [Sorted Input] ",size); // Taking inputs to array. Input should be sorted in order. 
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	
	int result=majorityElement(arr,size);
	if(result==-121)
		printf("Array has NO majority element.");
	else
		printf("%d is majority element.",result);
	
	return 0;
}




// Time Complexity O(n)
// Space Complexity O(1) - No extra space required.










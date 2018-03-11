// Separate 0's and 1's in an array [Approach -1]. (Counting Sort Method)
// Here we count number of 0's and 1's in the array, and overwrite  the  array with all 0's and  1's.
#include<stdio.h>
#include<stdlib.h>

int* separateZeroWithOne(int arr[],int  size)
{
	int index,count=0;
	for(index=0;index<size;index++) // Here we are counting  Number of zero's in the array
	{
		if(arr[index]==0)
			count++;
	}
	for(index=0;index<size;index++) // Here we'are overwriting array with  contineous  zero's and 1's
	{	
		if(index<count)				
			arr[index]=0;
		else
			arr[index]=1;
	}
	
		
	return arr;  // Returning array back to main function. 

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
		
	arr=separateZeroWithOne(arr,size);
	
	printf("\nAfter Segregation of zero's and 1's Array elements: \n");
	for(int index=0;index<size;index++)
		printf("%d  ",arr[index]);
		
	return 0;
		
}


/*

Time Complexity = O(n)
Space Compleixy = O(1)

*/







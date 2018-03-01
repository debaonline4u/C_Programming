// Majority Element in array by Moore Voters Algorithm
#include<stdio.h>
#include<stdlib.h>

int majorityElementFinder(int arr[],int size) // This function will find majority element for every case. Later we have to conform whether 
// 												number returned by this function is really a majority element or not. 
{
	int majorityIndex=0,count=0;
	for(int index=0;index<size;index++)
	{
		if(arr[majorityIndex]==arr[index])
			count++;
		else 
			count--;
		if(count==0)
		{
			majorityIndex=index;
			count=1;
		}
	}
	return(arr[majorityIndex]);
}

int majorityElementChecker(int arr[],int size,int majorityElement) // This function will return number of occurance of  majority element, which is provided to it. 
{
	int count=0;
	for(int index=0;index<size;index++)
	{
		if(arr[index]==majorityElement)
			count++;
	}
	return(count);
}

int main()
{
	int size;
	int *arr;
	
	printf("Enter How  many elements in array: "); // Asking user about size of array
	scanf("%d",&size);
	
	arr=(int *)malloc(sizeof(int)*size);
	
	printf("\nEnter %d numbers to Array: ",size); // Taking inputs to array. Input need not be sorted. 
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	
	int result=majorityElementFinder(arr,size);
	if(majorityElementChecker(arr,size,result)>(int)(size/2)) // after getting result we are confirming here. 
		printf("%d is Majority Element in this array. ",result);
	else
		printf("No Majority Element in this array.");
	
	return 0;
}





















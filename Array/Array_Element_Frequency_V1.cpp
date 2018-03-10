// Program to check frequency of array elements in an  array. 
// Here we expect a sorted input from user. 
#include<stdio.h>
#include<stdlib.h>

void arrayElementFrequency(int arr[],int size) // This function prints frequency of each array element.
{
	int count=0,index1,index2,temp,temp2=-9999999;
	for(index1=0;index1<size;index1++)
	{
		if(arr[index1]==temp2)
			continue;
		temp=arr[index1];
		
		
		count=1;
		for(index2=index1+1;index2<size;index2++)
		{
			if(arr[index2]==temp)
			{
				count++;
			}
			else
				continue;
		}
		printf("\nElement: %d ->> Frequency: %d",temp,count);
		temp2=temp;
	}
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
	arrayElementFrequency(arr,size);
	
	return 0;
		
}



/* 
Time Complexity= O(n^2)
Space Complexity= O(1) - No extra space.

*/









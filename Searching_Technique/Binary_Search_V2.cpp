// Implementing binary search, Recurssive approach. 
#include<stdio.h>
#include<stdlib.h>


int binarySearch(int arr[],int first,int last,int target);
int main()
{
	int arr[10]={12,17,23,34,45,56,67,78,89,90};
	int target;
	
	printf("Enter Target:");
	scanf("%d",&target);
		
	int result=binarySearch(arr,0,9,target);
	if(result==-1)
		printf("%d not present %d\n",target,result);
	else
		printf("%d is present in index:%d",target,result);
	
	return 0;
}
int binarySearch(int arr[],int first,int last,int target)
{
	// Recurssive approach implimentation. 
		static int mid;
		int return_Value;
	
		mid=(int)((first+last)/2);
//		printf("Mid=%d\n",mid);   // This printf i used for checking purpose. 

		
		if(arr[mid]==target)
			return mid;
		
		if(first==last) // this line is master piece code
			return -1;
		
		if(target<arr[mid]) // Searching Left part of Array. 
		{
			last=mid-1;
			return_Value=binarySearch(arr,first,last,target);
		}
			
		else 				// Searching Right part of Array. 
			{
				first=mid+1;
				return_Value=binarySearch(arr,first,last,target);
			}
}







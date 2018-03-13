// Implementing binary search, iterative approach. 
#include<stdio.h>
#include<string.h>

int binarySearch(int arr[],int first,int last,int target);
int main()
{
	int arr[10]={12,17,23,34,45,56,67,78,89,90};
	int target;
	
	printf("Enter Target:");
	scanf("%d",&target);
		
	int result=binarySearch(arr,0,9,target);
	if(result==-1)
		printf("%d not present\n",target);
	else
		printf("%d is present in index:%d",target,result);
	
	return 0;
}
int binarySearch(int arr[],int first,int last,int target)
{
	while(first<=last) // Iterative approach implimentation. 
	{
		int mid=(int)((first+last)/2);
//		printf("Mid=%d\n",mid);   // This printf i used for checking purpose. 

		if(arr[mid]==target)
			return(mid);
		if(target<arr[mid])
			last=mid-1;
		else 
			first=mid+1;		
	}
	
	return -1;
}







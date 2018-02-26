// Find pair whose sum is X,, hash approach.
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void findPair(int arr[],int size,int sum)
{
	int temp,index;
	int hash[MAX];
	for(int i=0;i<MAX;i++) // assigning elements of all hash array to 0. 
		hash[i]=0;
		
	for(index=0;index<size;index++)
	{
		temp=sum-arr[index];
		if(temp>=0 &&  hash[temp]==1)
			printf("Pair with given sum %d is (%d,%d)\n",sum,arr[index],temp);
		hash[arr[index]]=1;
	}
	
	
}


int main()
{
	int *arr;
	int size,sum;
	printf("Enter number of elements you want to enter: ");
	scanf("%d",&size);
	arr=(int *)malloc(sizeof(int)*size); // Dynamic allocation of array. 
	printf("Enter %d Elements: ",size);
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
		
		
//	for(int i=0;i<size;i++)
//		printf("%d",arr[i]);
	printf("Enter Required sum: ");
	scanf("%d",&sum);
	
	findPair(arr,size,sum);

	
	return 0;	
}


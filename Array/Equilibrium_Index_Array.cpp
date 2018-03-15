/* 

Finding the Equilibrium index in an array.
Def: Equilibrium index is such that, sum of all elements till that index is equal to sum of remaining elements.

*/

#include<stdio.h>
#include<stdlib.h>

int equilibriumIndex(int arr[],int size)
{
	int index,sum=0,leftSum=0;
	
	for(index=0;index<size;index++)		// Here we calculate the sum of all elements and saved to a variabe. 
		sum+=arr[index];
	
	for(index=0;index<size;index++)
	{
		sum-=arr[index];				// Now sum contains sum of all variables right of the index
		leftSum+=arr[index];			// Here left sum is stored.
		if(leftSum==sum)
			return index;
	}
	return -1;
}

int main()
{
	int *arr,size,result=0;
	
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	arr=(int *)malloc(size*sizeof(int));		// Dynamically allocate array. 
	
	printf("Enter %d elements\n",size);
	for(int index=0;index<size;index++)			// Taking input from user for array. 
		scanf("%d",&arr[index]);
	
	result=equilibriumIndex(arr,size);
	
	if(result!=-1)
		printf("Equilibrium Index is: %d",result+1);
		
		
	else
		printf("Equilibrium Index not Exists");
		
		
	return 0;
}









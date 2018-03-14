/* Given an array, find three elements such that their sum is equal to X
 -  Finding a Triplet in an array. 

1. Sort the array
2. Use two pointers left and right, scan entire array
*/
#include<stdio.h>
#include<stdlib.h>

int compareFunction(const void *a, const void *b)	// Compare function is to compare two numbers,it's used by Quick Sort. 
{
	return(*(int *)a-*(int *)b);
}
bool tripletInArray(int arr[],int size,int desired_num)
{
	int l_index,r_index,index,sum=0;
	qsort(arr,size,sizeof(int),compareFunction);	// Calling Quick Sort to sort the array. 
	for(index=0;index<size-2;index++)
	{
		l_index=index+1;
		r_index=size-1;
		while(l_index<r_index)
		{
			sum=arr[index]+arr[l_index]+arr[r_index];
			if(sum==desired_num)				// If we get our desired triplet then print and return true. 
			{
				printf("Triplet found: %d %d %d for Desired Sum: %d",arr[index],arr[l_index],arr[r_index],desired_num);
				return true;
			}
				
			if(sum<desired_num)				// If our sum is less, then we've to increase the number. So we move towards right. 
				l_index++;
			else
				r_index--;					// If our sum is greater than desired Number, then we move left to decrease the sum. 
		}
		
	}
	return false;			// Finnally if we don't find any triplet, then return false. 
	
}

int main()
{
	int *arr,size,desired_num;
	
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	arr=(int *)malloc(size*sizeof(int));		// Dynamically allocate array. 
	
	printf("Enter %d elements\n",size);
	for(int index=0;index<size;index++)			// Taking input from user for array. 
		scanf("%d",&arr[index]);
	
	printf("Enter desired Sum: ");
	scanf("%d",&desired_num);					// Taking the desired sum. 
	
	if(!tripletInArray(arr,size,desired_num))					// We get false as a result from this function. 
	  	printf("\nDesired Triplet is Not Present in Array");
	
	return 0;
}

/*
Time Complexity = O(n^2)
Space Complexity = O(1)

*/







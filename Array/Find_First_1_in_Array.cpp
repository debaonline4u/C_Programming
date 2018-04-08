// Given an array with all 0's in the begining and 1's in the end. 
// Find the index where 1's start. 

#include<stdio.h>
#include<stdlib.h>

int resultantFunction(int *arr,int first,int last)		// this function takes first and last and returns the position of first ONE in the array. 
{
	if(arr[first]==0 && arr[last]==1)
	{
		while(first<last)
		{
			if(arr[first]==1)
				return first;
			if(arr[last]==0)
				return (last+1);
			
			first++;
			last--;
		}
	}
	else
		return -1;
}

int find_First_One_In_Array(int *arr,int counter)
{
	int start=0,end=1;			// start and end used to keep track of lower and upper boundary. 
	int incrementor=1;
	for(;incrementor<counter;)
	{
		if(arr[incrementor]==1)
		{
			end=incrementor;
			break;
		}
		incrementor*=2;
		start=end;
		end=incrementor;
	}
//	printf("Start=%d End=%d",start,end);
	if(end>counter)		// this is used to prevent array out of bound
		end=counter-1;
	int result=resultantFunction(arr,start,end);
	if(result==-1)
		printf("\nNot Possible to find First ONE in array. ");
	else
		printf("\nFirst ONE found in array position: [%d]",result);
	
	return 0;
	
}

int main()
{
	int *arr;
	int initial_size=5,counter=0;
	int size=initial_size;
	arr=(int *)malloc(size*sizeof(int));
	printf("Enter 0's and 1's, Enter 999 to end your input: \n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		counter++;
		if(counter>(size-1))
		{
			size=size+initial_size;
			arr=(int *)realloc(arr,size*sizeof(int));
		}
		if(arr[i]==999)
		{
			arr[i]=0;
			counter--;
			break;
		}
	}
	for(int i=0;i<counter;i++)
		printf("%d ",arr[i]);
	find_First_One_In_Array(arr,counter);
	// Now find first one in array. 
	
	
	return 0;
}


// Find the number occuring odd number of times in an array given that exactly one number occurs odd number of times. 
#include<stdio.h>
#include<stdlib.h>

/*
This method works for perticular type of data set. 
1. array size has to be odd.
2. 1 number has to be odd number of times. 
3. rest of the numbers must occur even number of times(so that they can nullify themselves in XOR operation). 
e.g: array size 7 and inputs: 1,2,3,1,1,2,3.
Here 1 is 3 times. (2 and 2) nullify. (3 and 3) nullify. bcz 2 XOR 2 =0 and 3 XOR 3 = 0. 1 XOR 1 XOR 1 = 1 which is our answer. 
*/

int getOddOccuranceNumber(int *arr,int size)
{
	int result=0,index,count=0;
	for(index=0;index<size;index++)		// doing XOR operation for all the numbers in the array. 
		result=result^arr[index];
	printf("\nResult:%d",result);
	for(index=0;index<size;index++)		// counting how many number of times our result really occuring in array. 
		if(arr[index]==result)
			count++;
	
	if(count%2!=0) 			// our result really occuring odd number of times.
		return(result);
	else
		return(-1);			// failure case.
	
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
	
	int result=getOddOccuranceNumber(arr,size);
	printf("\nResult:%d",result);
	// Prints the result if it's not -1. If result == -1, then it's a failure case. 
	result!=-1?printf("\nNumber occuring Odd Number of times in array is: %d",result):printf("\nThere is no such number in this array.");
	
	return 0;
}



// Time Complexity = O(n).

// Space Complexity = O(1) - No extra space used. 









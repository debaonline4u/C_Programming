#include<stdio.h>
#include<stdlib.h>
 
int compfun(const void * a, const void * b)	// Compare function used by Quick sort
{
    return ( *(int*)a - *(int*)b );
}
 
int main()
{
    int size,i,j,temp;
    scanf("%d",&size);	// Taking input about size of array [Test Cases]
    int arr[size];
    for(i=0;i<size;i++)		// Taking input to array
         scanf("%d",arr+i);
/*    for(i=0;i<size;i++)		// Bubble sort is implemented. But it takes O(n^2), so code chef shown: Time Exceeded message for this approach. 
    {
        for(j=i;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                // Swap Required
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else
                continue;
        }
    }  */
    qsort(arr,size,sizeof(int),compfun);		// Qsort is implemented from Library. 
    for(i=0;i<size;i++)
        printf("%d\n",arr[i]);			// Sorted output from array. 
} 

/*  ***************** DETAILS ABOUT PROBLEM  **************************************

Given the list of numbers, you are to sort them in non decreasing order.
Input:
---------------
t – the number of numbers in list, then t lines follow [t <= 10^6]. 
Each line contains one integer: N [0 <= N <= 10^6]

Output:
----------------
Output given numbers in non decreasing order.
Example:
-------------------
Input:
--------------------
5
5
3
6
7
1

Output:
----------------------
1
3
5
6
7


*************************************************************************************   */










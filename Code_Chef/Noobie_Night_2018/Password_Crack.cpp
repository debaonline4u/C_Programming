// Rahul and password crack Problem Code: NN04

#include<stdio.h>

long long int countOnes(long long int num)
{
//	printf("Counting Number of 1's for %lld\n",num);
	long long int count=0;
	while(num>0)
	{
		if(num%2!=0)
			count++;
		num=num/2;
	}
//	printf("Count=%lld\n",count);
	return count;
}

int main()
{
	long long int m,count=0;
	int n;
	
	scanf("%lld%d",&m,&n);		// m is main wire and n is number of sub wires
	
	long long int arr[n];
	
	for(int i=0;i<n;i++)
		scanf("%lld",&arr[i]);
		
	for(int i=0;i<n;i++)
	{
		long long int temp;
		temp=m^arr[i];
//		printf("temp=%lld\n",temp);
		count+=countOnes(temp);
	}
	printf("%lld",count);
	
	return 0;
}




/************************* PROBLEM STATEMENT *****************************

One time Rahul and his friend Tarun went to the bank. 
They saw that the bank has been robbed and the robbers have set up an electronic time bomb. 
The bank clerk said that there is a password which can defuse the bomb which he heard when the robbers were talking. 
There are many wires in the bomb but they can be divided into two categories, main wire and sub wires and they are all numbered. 
The password is formed by the summation of all toggle bit conversion from main wire number to sub wires number. 
There is one main wire numbered M and N sub wires numbered from W1,W2,W3….WN.

Please help them to determine the defuse code (password) of the bomb, so that they can save the life of others and become heroes.

Input:
---------
The first line of the input contains two space-separated integers M and N denoting the main wire numbered and total sub wires number respectively.
The second line contains N space-separated integers W1,W2,...,WN.
Output:
------------
print a single line containing defuse code.

Constraints
--------------
1=N=100
0=M=2147483647
0=W1,W2,......,WN=2147483647

Sample Input:
-----------------
    18 4
    14 16 20 2
    
Sample Output:
-------------------
     7
     
EXPLANATION:
----------------------
  here main wire number is 18 and its  binary is 10010
  and there are four sub wires 14 16 20 2 and its 
  binaries are :
  01110
  10000
  10100
  00010 respectively.
  toggle bits of 18 to 14 = 3 at positions 1, 2 and 3 from the 
  left side.
  toggle bits of 18 to 16 = 1 at position 4 from the left side .
  toggle bits of 18 to 20 = 2 at positions 3 and 4  from the 
  left side .
  toggle bits of 18 to 2 = 1 at position 1 from the left side .
  so the total toggle bits are 3 + 1 + 2 + 1 = 7.
  
  
  
  
  **********************************************************************************   */
  
  
  










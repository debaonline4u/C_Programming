// Weight of Numbers Problem Code: WGHTNUM
// This program is giving correct answer but in Code_Chef it's score is 100/100.

#include<stdio.h>
#include<math.h>
#define D 1000000007

long long powr(long long a, long long b)		// This function is fastest way of finding power of 10 by squaring. 
{												// instead of using library power function, we here customized it. 
         long long result=1ll;		// 1 is type cased as long long and stored to result. 
         while(b)
         {	
//         	 printf("b=%d , b&1 = %d\n",b,b&1);
             if(b&1)
             	result = (result*a)%D;
//             printf("Intermediate Result = %lld\n",result);
             a = (a*a)%D;
             b = b>>1;		// devide by 2. 
         }
         return result;
}

int weight_Calculator_2(unsigned long long int size,int weight)
{
	unsigned long long int num=0;
	int i;
	if(weight==0)		// for weight=0
	{
		num=9;
		
//		for(i=1;i<size-1;i++)
//			num=(num*10)%1000000007;

		num=num*powr(10,size-2);
		num=num%D;
		printf("%llu\n",num);
	}
	else if(weight>0 && weight<9)		// for weight 1 to 9
	{
		num=9-weight;
		
//		for(i=1;i<size-1;i++)
//			num=(num*10)%1000000007;

		num=num*powr(10,size-2);		// fastest way of finding power of 10 by squaring method. 
		num=num%D;
		printf("%llu\n",num);		
	}
	else if(weight<0 && weight>-10)		// for weight -1 to -9
	{
		num=weight+10;
//		for(i=1;i<size-1;i++)
//			num=(num*10)%1000000007;
	
		num=num*powr(10,size-2);
		num=num%D;
		printf("%llu\n",num);		
	}
	else 
		printf("0\n");		// for weight above 9 or -9
}

int main()
{
	long int test_case,counter=0;
	int weight=0;
	scanf("%ld",&test_case);
	while(test_case--)
	{
		unsigned long long int size;
		int weight;
		scanf("%llu",&size);		
		scanf("%d",&weight);
		
		weight_Calculator_2(size,weight);
	}
	return 0;
	
}

/* ************************ PROBLEM STATEMENT ***************************************

VK gave a problem to Chef, but Chef is too lazy, so he asked you to solve the problem for him. The statement of the problem follows.

Consider an integer with N digits (in decimal notation, without leading zeroes) D1,D2,D3,…,DN. Here, 
D1 is the most significant digit and DN the least significant. The weight of this integer is defined as
?i=2N(Di-Di-1).
You are given integers N and W. Find the number of positive integers with N digits (without leading zeroes) and weight equal to W. 
Compute this number modulo 109+7.

Input
----------------
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N and W denoting the number of digits and the required weight.

Output
-----------------
For each test case, print a single line containing one integer — the number of N-digit positive integers with weight W, modulo 109+7.

Constraints
-----------------
1=T=105
2=N=1018
|W|=300
Subtasks
Subtask #1 (20 points):

1=T=103
2=N=103
Subtask #2 (80 points): original constraints

Example Input
------------------
1
2 3
Example Output
--------------------
6
Explanation
--------------------
Example case 1: Remember that the digits are arranged from most significant to least significant as D1,D2. 
The two-digit integers with weight 3 are 14,25,36,47,58,69. For example, the weight of 14 is D2-D1=4-1=3. 
We can see that there are no other possible numbers.

************************************************************************************* */




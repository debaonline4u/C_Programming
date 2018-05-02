#include<stdio.h>
#include<math.h>
long long weight_calculator(long long);		// part of weight is calculated here. 
int main()
{
    long long t,i;
   scanf("%lld",&t);	// test case input. 
    while(t--)
    {
        long long u,w,a;		
       	scanf("%lld%lld",&u,&w);		// input for N and W
        if(w>=-9&&w<=9)				// for weight within 9 and -9
        {
            a=weight_calculator(u-2);
            printf("a=%lld\n",a);
        
			// final work is done here
            if(w>=0)
                a=((9-w)*a)%1000000007;		
            else
                a=(a*(10-abs(w)))%1000000007;
           printf("%lld\n",a);
        }
        else
           printf("0\n");
    }
    return 0;
}
 
long long weight_calculator(long long k)		// k=u-2
{
//	printf("k=%lld\n",k);
    long long y;
    if(k==0)
    {
 
        return 1;
    }
    else if(k==1)
        return 10;
    else
    {
        y=weight_calculator(k/2);		 // use of recurssion. 
//        printf("intermediate y=%lld\n",y);
        y=(y*y)%1000000007;
//        printf("intermediate y=%lld\n",y);
        if(k%2)			// if k is odd number then it will work
            y=(y*10)%1000000007;
        
//        printf("final y=%lld\n",y);
        return y;
    }
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




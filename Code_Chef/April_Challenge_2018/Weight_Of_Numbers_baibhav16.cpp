#include <stdio.h>
 #include <stdlib.h>
 #include<math.h>
 #define D 1000000007
 long long powr(long long a, long long b)
{
         long long result=1ll;
         printf("1st time result = %lld\n",result);
         while(b)
         {	
         	 printf("b=%d , b&1 = %d\n",b,b&1);
             if(b&1)
             	result = (result*a)%D;
             printf("Intermediate Result = %lld\n",result);
             a = (a*a)%D;
             b = b>>1;
         }
         return result;
}
int main(void) 
{
             int T;
            scanf("%d",&T);
            while(T--)
            {
                long long N,W,i;
                long long count=0;
                scanf("%lld %lld",&N,&W);		// input to N and W
                for(i=10;i<100;i++)		// this logic finds desired weight between 10 and 100
                {
                   if((i%10)-(i/10) == W)
                   {
//                   		printf("i=%d\n",i);
                   		++count;       
				   }
                    
               }
               printf("1st time count=%lld\n",count);
               count=count*powr(10,N-2);		// now it's time to give power to our final result. 
               count=count%D;
               printf("%lld\n",count);
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




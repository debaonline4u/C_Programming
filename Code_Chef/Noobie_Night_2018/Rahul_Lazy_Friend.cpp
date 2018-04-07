// Rahul and his lazy friend Problem Code: NN03
#include<stdio.h>
int main()
{
	int test;
	for(scanf("%d",&test);test>0;test--)
	{
		if(test<0 || test>10)		// Constraints
		{
			test=0;
			break;
		}
		long int x,y,max_value=0;
		scanf("%ld%ld",&x,&y);
		if(x<1 || x> 1000000 || y<1 || y>1000000)		// Constraints
			continue;
		long int num1,num2,temp,GCD,LCM;
		num1=x;
		num2=y;
		// Finding GCD
		while(num2!=0)
		{
			temp=num2;
			num2=num1%num2;
			num1=temp;
		}
		GCD=num1;
		LCM=(x*y)/GCD;
		printf("%ld\n",LCM);
		
	}
	
	return 0;
}


/* ******************************* PROBLEM STATEMENTS *************************************

Rahul and his friend Saurabh are very lazy person they used their own alarm clock for waking up . 
both alarm commence ringing together and ring at interval X and Y seconds respectively. 
Rahul and saurabh wake up in a condition when both alarm Ring together. find the minimum time taken by the alarms so they wake up.

Note:- they don’t wake up at the beginning of ringing the alarm.  

Input
--------------
The first line of input contains T, the number of test cases, the next T lines contain X and Y seconds.
 

Output
-------------
Print the minimum time taken by the alarm for each test case.
 

Constraints
-----------------
1 = T = 10
1 = X,Y = 1000000
 

Example
Input:
---------------
2
2 3
8 24

Output:
6
24



*************************************************************************************************  */

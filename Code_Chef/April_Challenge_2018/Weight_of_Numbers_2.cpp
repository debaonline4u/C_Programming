// Weight of Numbers Problem Code: WGHTNUM

#include<stdio.h>
#include<math.h>
int weight_Calculator_2(unsigned long long int size,int weight);
int weight_Calculator(unsigned long long int num,unsigned long long int max_number,int size,int weight)
{
	
	long long int counter=0;
//	unsigned long long int max_number=num*9;
	unsigned long long int temp;
	int current_weight=0;
	for(;num<=max_number;num++)
	{
//		printf("%llu\n",num);
		int arr[size];
		temp=num;
		for(int i=0;i<size;i++)			// Here number is transfer to array
		{
			arr[size-i-1]=temp%10;
			temp=temp/10;
		}
		temp=0;
		current_weight=0;
		for(int i=0,j=1;i<size-1;i++,j++)		// Now we'll calculate desired number
		{
			
//			printf("%d",arr[i]);
			temp=arr[j]-arr[i];
			current_weight+=temp;
			
		}
		
	//	printf("Current_Weight=%d\n",current_weight);
		if(current_weight==weight)
		{
//			printf("Number=%llu\n",num);
			counter++;
		}
			
	}
	printf("%lld\n",counter%1000000007);
	return 0;
}

int main()
{
	long int test_case,counter=0;
	int weight=0;
	for(scanf("%ld",&test_case);test_case>0;test_case--)
	{
		if(test_case<1 || test_case>100000)		// Constraints for Test cases. 
		{
			test_case=0;
			break;
		}
		unsigned long long int size;
		int weight;
		scanf("%llu",&size);
		if(size<2 || size>1000000000000000000)		// Constraints for N(size)
			continue;
		scanf("%d",&weight);
		if(weight<-300 || weight>300)			// Constraints for Weight
			continue;
		
		unsigned long long int num=1,max_num=0;		// According to size start and end number is generated. 
		num=pow(10,size-1);
		max_num=pow(10,size)-1;
		
//		printf("%llu\n%llu",num,max_num);
//		weight_Calculator(num,max_num,size,weight);
		weight_Calculator_2(size,weight);
		
	}
	
	
	return 0;
	
}

int weight_Calculator_2(unsigned long long int size,int weight)
{
	unsigned long long int num=0;
	int i;
	if(weight==0)		// for weight=0
	{
		num=9;
		
		for(i=1;i<size-1;i++)
			num=(num*10)%1000000007;
		
		printf("%llu\n",num%1000000007);
	}
	else if(weight>0 && weight<9)		// for weight 1 to 9
	{
		num=9-weight;
		for(i=1;i<size-1;i++)
			num=(num*10)%1000000007;
		
		printf("%llu\n",num%1000000007);
	}
	else if(weight<0 && weight>-10)		// for weight -1 to -9
	{
		num=weight+10;
		for(i=1;i<size-1;i++)
			num=(num*10)%1000000007;
		
		printf("%llu\n",num%1000000007);
	}
	else 
		printf("0\n");		// for weight above 9 or -9
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





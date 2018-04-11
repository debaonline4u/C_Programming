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
	if(weight==0)
	{
		num=9;
		
		for(i=1;i<size-1;i++)
			num=num*10;
		
		printf("%llu\n",num%1000000007);
	}
	else if(weight>0 && weight<9)
	{
		num=9-weight;
		for(i=1;i<size-1;i++)
			num=num*10;
		
		printf("%llu\n",num%1000000007);
	}
	else if(weight<0 && weight>-10)
	{
		num=weight+10;
		for(i=1;i<size-1;i++)
			num=num*10;
		
		printf("%llu\n",num%1000000007);
	}
	else 
		printf("0\n");
}





// Weight of Numbers Problem Code: WGHTNUM

#include<stdio.h>

int weight_Calculator(unsigned long long int num,int size,int weight)
{
	
	long long int counter=0;
	unsigned long long int max_number=num*9;
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
		//	printf("Number=%llu\n",num);
			counter++;
		}
			
	}
	printf("%lld\n",counter%1000000007);
	return 0;
}

int main()
{	printf("Warning !! \nThis Program is printing Wrong Result.\n");
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
		
		unsigned long long int num=0,max_num=0;		// According to size start and end number is generated. 
		for(int i=0;i<size;i++)
		{
	    	num=num*10+1;
//	    	max_num=max_num*10+9;
		}
//		printf("%llu\n%llu",num,max_num);
		int arr[size];
		weight_Calculator(num,size,weight);
			
		
	}
	
	
	return 0;
	
}

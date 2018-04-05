#include<stdio.h>
// The Deadly Sin Problem Code: SINS

// This problem is producing correct output, but it's taking more time than desired. 
// Here we've to introduce gcd function for optimization. 

int main()
{
	long int test;
	long long int m,b;
	for(scanf("%ld",&test);test>0;test--)
	{
		if(test<1 || test>100000)
		{
			test=0;
			break;
		}
		
		scanf("%lld%lld",&m,&b);
		if(m<0 || m>1000000000 || b<0 || b>1000000000)
			continue;
		
		while(m!=b)
		{
			
			if(m>b)
				m=m-b;
			else
				b=b-m;
		}
		if(m==b || m==0 || b==0)
			printf("%lld\n",m+b);
		
	}
	return 0;
}

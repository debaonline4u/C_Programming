// Chef and Remissness Problem Code: REMISS

#include<stdio.h>

int main()
{
	int test;
	long int first,second;
	for(scanf("%d",&test);test>0;test--)
	{
		scanf("%ld %ld",&first,&second);
		first>second?printf("%ld %ld\n",first,first+second):printf("%ld %ld\n",second,first+second);
//		printf("%ld\n",first+second);
	}
	return 0;
}

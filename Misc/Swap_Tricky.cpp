#include<stdio.h>

// Swap Tricky
void swap(int &a,int &b);
int main()
{
	int a=5,b=10;
	swap(a,b);
	printf("In Main - %d %d",a,b);
	return 0;
}
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("In Swap - %d %d\n\n",a,b);
}

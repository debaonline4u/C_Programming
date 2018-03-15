#include<stdio.h>
int main()  // Program to use Void Pointer
{
	void *vp;
	char ch='g';
	char *cp="goofy";
	int j=20;
	vp=&ch;
	printf("%c",*(char *)vp);
	vp=&j;
	printf("\n%d",*(int *)vp);
	vp=cp;
	printf("\n%s",(char *)vp);
	
	return 0;
}
 


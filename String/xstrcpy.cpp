#include<stdio.h>
#include<string.h>
void xstrcpy(char *,char *);
int main()
{
	printf("*********** Program to Demonstrate STRCPY() ****************************");
	char str1[20]="Debashis",str2[20];
	xstrcpy(str1,str2);
	printf("\n\nAfter copy string is: %s",str2);
	
	return 0;
	
}
void xstrcpy(char *st1,char *st2)
{
	int i=0;
	while(*st1!='\0')
	{
		*st2=*st1;
		st1++;
		st2++;
	}
	*st2='\0';
}

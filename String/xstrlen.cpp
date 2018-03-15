// Program for string Length
#include<stdio.h>
int xstrlen(char *);
int main()
{
	char str[20];
	printf("/************ Program to Calcuate Length of String  ***************/ \n");
	printf("\n\nEnter a string:");
	gets(str);
	//scanf("%s",&str);
	printf("\n\nLength of the string %s is:= %d",str,xstrlen(str));
	return 0;
	
} // Obj:- This program works for string input larger than 20, despite of the array size.
int xstrlen(char *str)
{
	int len=0,i=0;
	while(*(str+i)!='\0')
	{
		len++;
		i++;
	}
	return len;
}

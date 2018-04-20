#include<stdio.h>
#include<string.h>  // This program prints Length of String by Strlen(), it doesn't count \0 value
int main()
{
	char s[]="Debashis \0sahoo";
	char *t="Papani";
	printf("First String Length=%d\n",strlen(s));	// Doesn't count \0 value. 
	printf("Second Stirng Lengh=%d\n",strlen(t));
	return 0;
}

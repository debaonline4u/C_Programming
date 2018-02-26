// Length of file and example of fseek() and ftell()
#include<stdio.h>
int main()
{
	FILE *fp;
	int len;
	fp=fopen("ExampleOfFileLength.txt","w+");
	if(fp==NULL)
		printf("Error Opening file\n");
	fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ",fp);
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	printf("Total size of file is %d Bytes.",len);
	
	return 0;
	
}

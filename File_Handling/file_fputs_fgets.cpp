/* Receives strings from keyboard and writes them to file */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char str_buf[100],ch;
	fp=fopen("File_IO.txt","a+");
	if(fp==NULL)
	{
		printf("Can't Open File\n");
		exit(0);
	}
	printf("Enter New Lines of Text:\n");
	while(strlen(gets(str_buf))>0) // Loop till input string greater than length 0
	{
		fputs(str_buf,fp); // Entering line by line to file.
		fputs("\n",fp);
	}
	fclose(fp);
	fp=fopen("File_IO.txt","r");
	printf("\nContent of file:");
	while((ch=fgetc(fp))!=EOF) // reading data from file to screen.
		printf("%c",ch);
	fclose(fp);
	
	return 0;
}

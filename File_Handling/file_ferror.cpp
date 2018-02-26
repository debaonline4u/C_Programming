#include<stdio.h>

// This program to demonstrate how fgetc() generates an error while reading an empty file which is opened for writing.

int main()
{
	FILE *fp;
	char ch;
	fp=fopen("file2.txt","w");  // Here error is we have opened file for writng mode and then we'r reading from it. 
	ch=fgetc(fp);
	if(ferror(fp))
		printf("Error in reading from file\n");
	clearerr(fp);
	if(ferror(fp))
		printf("Error is still persisting.\n");
	fclose(fp);
	
	if(remove("file2.txt")==0)
		printf("File Deleted Successfully.");
	
	return 0;
}

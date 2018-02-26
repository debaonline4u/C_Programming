#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("file1.txt","w");
	fprintf(fp,"%s","Hello, this is my first file handling program ");
	fclose(fp);
	printf("File is  ready to open");
	
	return 0;
}

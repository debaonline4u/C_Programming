#include<stdio.h>
#include<unistd.h> // To use sleep() in program
int main()
{
	FILE *fp;
	int c;
	
	fp=fopen("Test.cpp","r");
	while(1)
	{
		c=fgetc(fp);
		if(feof(fp))
			break;
		printf("%c",c);
		if(c=='.')		// Sleeps for 2 sec when it founds any . inside the file
			sleep(2);
		
	}
	
	fclose(fp);
	
	return 0;
}

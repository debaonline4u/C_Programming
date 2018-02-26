// GIving Unlimited input to file and read it.

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("Unlimited_IO_File.txt","w+");
	printf("Enter Data to File: [Put Ctrl + Z and then enter to end your input.] \n");
	while((ch=getchar())!=EOF)  // this takes unlimited content from user. 
		putc(ch,fp);
//	fclose(fp); 	// here we're closing bcz after writing into file our fp is in last of file. to bring back to first of file simply close the file and again open
	// Now we've to read the file and show the content to user.
	
	//fp=fopen("Unlimited_IO_File.txt","r");
	
	fseek(fp,0,SEEK_SET);  // this method also works, bringing back the file pointer to start of file.
							// so that we don't have to close and reopen the file. 
	while((ch=getc(fp))!=EOF)
		printf("%c",ch);
		
	fclose(fp);
	return 0;
}

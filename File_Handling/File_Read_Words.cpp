// Read words from a file
#include<stdio.h>
int main()
{
	FILE *fp,*lfp;
	char str[100],ch;
	fp=fopen("File_Read_Word.txt","r");


//	fputs("Hello brother, use your time very wisely. Thank you!!!",fp);

/*	printf("Enter Data to File: [Put Ctrl + Z and then enter to end your input.] \n");
	while((ch=getchar())!=EOF)  // this takes unlimited content from user. 
		putc(ch,fp); */
	
//	fseek(fp,0,SEEK_SET);  

	lfp=fopen("log_file.txt","w+");
	
	while(fscanf(fp,"%s",str)!=EOF)
	{
		if(str[0]=='S' || str[0]=='s')
		{
			//	printf("%s\n",str);
			fprintf(lfp,"%s\n",str);
		}
		
			
	}
	fseek(lfp,0,SEEK_SET);
	
	while((ch=fgetc(lfp))!=EOF)
		printf("%c",ch);
	
	
	fclose(fp);
	fclose(lfp);
			
	return 0;
}

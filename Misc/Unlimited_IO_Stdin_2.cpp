#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// This program takes endless input from user until the user press 'Enter" in  his input. 
int main(){
    int size = 10;
    char* str;
    
    printf("Hello user, you can enter endless input,\nPress Enter to abort endless input: ");
    
	str = (char*) calloc(size,sizeof(char));
    char c;
    c = getchar();
    
	int t = 0;
    int cnt = 0;
    int len;
	
    while(c!='\n') {
        if(cnt > size) {
            str = (char*) realloc(str,2*cnt);
        }

        str[t] = c;
        c = getchar();
        t++;
        cnt++;
    }
        str[t]='\0';
    printf("\nThe string is: %s\n",str);
    len = strlen(str);
    printf("The size is: %d",len);
    
    return 0;
}

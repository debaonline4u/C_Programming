// Rahul and his encryption Problem Code: NN02

#include<stdio.h>
#include<string.h>

int main()
{
	int test;
	for(scanf("%d",&test);test>0;test--)
	{
		// Constraints for Testcase
		if(test<1 || test>10)
		{
			test=0;
			break;
		}
		
		char str[100];
		scanf("%s",str);
		int length=strlen(str);
		
		// Constraints for each string. 
		if(length<1 || length>100)
			continue;
		
		for(int i=0;i<length;i++)
		{
			if(str[i]=='a' || str[i]=='k' || str[i]=='u')
				printf(")");
			if(str[i]=='b' || str[i]=='l' || str[i]=='v')
				printf("!");
			if(str[i]=='c' || str[i]=='m' || str[i]=='w')
				printf("@");

			if(str[i]=='d' || str[i]=='n' || str[i]=='x')
				printf("#");
			if(str[i]=='e' || str[i]=='o' || str[i]=='y')
				printf("$");
			if(str[i]=='f' || str[i]=='p' || str[i]=='z')
				printf("%%");

			if(str[i]=='g' || str[i]=='q')
				printf("^");
			if(str[i]=='h' || str[i]=='r')
				printf("&");
			
			if(str[i]=='i' || str[i]=='s')
				printf("*");
			if(str[i]=='j' || str[i]=='t')
				printf("(");
			
		}
		printf("\n");
	}	
	return 0;
}


/* *************************** PROBLEM STATEMENT ***********************************

Rahul wants to encode lower case alphabet in to special symbol . in such a way that ‘)’ for a , ‘!’ for b , ‘@’ for c. 
The pattern repeats after j ie ‘)’ for k, ‘!’ for l, and t ie ’)’ for u and so on. You can also see on your numeric symbol 0 to 9. 
Rahul is given a string , please help him to encode lower case alphabet in to special symbol.

 

Input
-------------
The first line of input contains T, the number of test cases, the next T lines contain one string each.
 

Output
-----------------
Print a single containing the encoded string For each test case.
 

Constraints
--------------------
1 = T = 10
1 = length of string = 100
 

Example
Input:
--------------
2
abcd
rahul

Output:
-------------------------
)!@#
&)&)!


**********************************************************************************************   */




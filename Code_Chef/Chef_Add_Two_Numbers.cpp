#include <stdio.h>
 
int main(void) {
    
    int test_case,num1,num2;
    scanf("%d",&test_case);
    
    while(test_case--)
    {
        scanf("%d%d",&num1,&num2);
        printf("%d\n",num1+num2);
    }
    
	return 0;
}

/* *************** Problem Statement ************************

Shivam is the youngest programmer in the world, 
he is just 12 years old. Shivam is learning programming and today he is writing his first program. 

Program is very simple, Given two integers A and B, write a program to add these two numbers.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output
Add A and B and display it.

Constraints
1 = T = 1000
1 = A,B = 10000
Example
Input
3 
1 2
100 200
10 40

Output
3
300
50


******************************************************************  */




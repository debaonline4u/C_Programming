#include<stdio.h>
int main()
{
    int num,rev,t,n,reminder;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&num);
        n=num;
        rev=0;
        while(num>0)
        {
            reminder=num%10;
            rev=rev*10+reminder;
            num=num/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}

/* ************************ PROBLEM STATEMENT **************************************

If an Integer N, write a program to reverse the given number.

Input
-----------
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
-------------
Display the reverse of the given number N.

Constraints
------------------
1 = T = 1000
1 = N = 100000	[This constraint is not valid]

Example
Input
-------------
4
12345
31203
2123
2300

Output
--------------
54321
30213
3212
32


********************************************************************************************  */




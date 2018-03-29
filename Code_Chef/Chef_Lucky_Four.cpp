// Lucky Four 
#include<stdio.h>

int main()
{
	long long int test_case,num;
	int count=0;
	for(scanf("%lld",&test_case);test_case>0;test_case--)
	{
		scanf("%lld",&num);
		while(num>0)
		{
			if(num%10==4)
				count++;
			num=num/10;
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
	
}


/*  ***********  PROBLEM STATEMENT  **********************************

Kostya likes the number 4 much. Of course! This number has such a lot of properties, like:

Four is the smallest composite number;
It is also the smallest Smith number;
The smallest non-cyclic group has four elements;
Four is the maximal degree of the equation that can be solved in radicals;
There is four-color theorem that states that any map can be colored in no more than four colors in such a way that no two adjacent regions are colored in the same color;
Lagrange's four-square theorem states that every positive integer can be written as the sum of at most four square numbers;
Four is the maximum number of dimensions of a real division algebra;
In bases 6 and 12, 4 is a 1-automorphic number;
And there are a lot more cool stuff about this number!
Impressed by the power of this number, Kostya has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.

Input
----------------
The first line of input consists of a single integer T, denoting the number of integers in Kostya's list.

Then, there are T lines, each of them contain a single integer from the list.

Output
-------------------
Output T lines. Each of these lines should contain the number of occurences of the digit 4 in the respective integer from Kostya's list.

Constraints
---------------------
1 = T = 105
(Subtask 1): 0 = Numbers from the list = 9 - 33 points.
(Subtask 2): 0 = Numbers from the list = 109 - 67 points.
Example
Input:
-----------------
5
447474
228
6664
40
81

Output:
--------------
4
0
1
1
0


**********************************************************************************   */

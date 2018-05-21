// Secret Recipe Problem Code: CHEFRUN

#include<stdio.h>

int main()
{
	long int test;
	for(scanf("%li",&test);test>0;test--)
	{
		if(test<1 || test>100000)
			break;
		long int x1,x2,x3,v1,v2;
		scanf("%li%li%li%li%li",&x1,&x2,&x3,&v1,&v2);
		if(x1>100000 || x2>100000 || x3>100000 || v1<1 || v1>100000 || v2<1 || v2>100000)
			continue;
		if(x1>x3 || x1>x2 || x3>x2)
			continue;
		float distance1,distance2;
		distance1=x3-x1;
		distance2=x2-x3;
		
		float time1,time2;
		time1=distance1/v1;
		time2=distance2/v2;
		if(time1<time2)
			printf("Chef\n");
		else if(time1>time2)
			printf("Kefa\n");
		else
			printf("Draw\n");
	}
	
	return 0;
}

/* ****************************** PROBLEM STATEMENT **********************************

Chef and his competitor Kefa own two restaurants located at a straight road. 
The position of Chef's restaurant is X1, the position of Kefa's restaurant is X2.

Chef and Kefa found out at the same time that a bottle with a secret recipe is located on the road between their restaurants. 
The position of the bottle is X3.

The cooks immediately started to run to the bottle. Chef runs with speed V1, Kefa with speed V2.

Your task is to figure out who reaches the bottle first and gets the secret recipe (of course, it is possible that both cooks reach the bottle at the same time).

Input
------------
The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
The first and only line of each test case contains five space-separated integers X1, X2, X3, V1 and V2.

Output
------------
For each test case, print a single line containing the string "Chef" if Chef reaches the bottle first, 

"Kefa" if Kefa reaches the bottle first or "Draw" if Chef and Kefa reach the bottle at the same time (without quotes).

Constraints
--------------
1=T=105
|X1|,|X2|,|X3|=105
X1<X3<X2
1=V1=105
1=V2=105

Example Input
----------------
3
1 3 2 1 2
1 5 2 1 2
1 5 3 2 2

Example Output
------------------
Kefa
Chef
Draw

Explanation
-----------------
Example case 1. Chef and Kefa are on the same distance from the bottle, but Kefa has speed 2, while Chef has speed 1.

************************************************************************************* */

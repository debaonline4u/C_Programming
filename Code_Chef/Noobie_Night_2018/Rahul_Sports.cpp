// Rahul and his sports Problem Code: NN01
#include<stdio.h>
int main()
{
	int cse[7],mech[7];
	int point_cse=0,point_mech=0;
	for(int i=0;i<7;i++)
		scanf("%d",&cse[i]);
	for(int i=0;i<7;i++)
		scanf("%d",&mech[i]);
	for(int i=0;i<7;i++)
	{
		point_cse+=cse[i];
		point_mech+=mech[i];
	}
//	printf("CSE Points: %d and MECH points: %d\n",point_cse,point_mech);
	if(point_cse>point_mech)
		printf("cse\n");
	else if(point_cse<point_mech)
		printf("mech\n");
	else
		printf("draw");
		
	return 0;
}



/* ************************************ PROBLEM STATEMENT ********************************

Recently Sports meet 2018 in Bit Deoghar has ended there was a match between cse and mech team. in each team has 7 players .
 you have to print out the winner team name ie “cse” if cse won , ”mech” if mech won , “draw” if points of both team would equal .
  winner team name will be decided on the basis of total points maked by a team.

Points make by cse players are c1,c2,c3,c4,c5,c6,c7 .

Points make by mech players are m1,m2,m3,m4,m5,m6,m7 .  

Input
--------------
1st line contain basket points maked by cse student c1,c2,………..,c7.
2nd line contain basket points maked by mech student m1,m2,………..,m7.
 

Output
--------------
print a single line containing the string "cse" if cse won, "mech" if mech won or "draw" if the result is a draw (without quotes).

 

Constraints
-----------------
0 = c1,c2,c3,c4,c5,c6,c7 = 1000
0 = m1,m2,m3,m4,m5,m6,m7 = 1000
 

Example
Input1:
---------------
0 1 2 3 4 5 6
0 2 2 3 4 5 6

Output1:
mech

Input2:
--------------------
4 5 6 7 8 9 3
1 2 3 4 5 6 7

Output2:
cse

Input3:
---------------------
7 6 5 4 3 2 1
1 2 3 4 5 6 7

Output3:
draw

********************************************************************************************************  */


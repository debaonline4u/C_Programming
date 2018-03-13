// Code Chef problem - Packaging Cupcakes

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n;
	printf("Enter Number of Test Cases: ");
	scanf("%d",&t);
	if(t<1 || t>1000)	// This condition is to satisfy input  constraints. 
		exit(1);
	while(t--)
	{
		printf("\nEnter Number of Cup Cakes: ");
		scanf("%d",&n);
		if(n<2 || n>10000000) // This condition is to satisfy input constraints
			exit(1);
		printf("Package Size= %d",(n/2)+1);
	}
	
	return 0;
}
























/*
Problem: 
------------------
Now that Chef has finished baking and frosting his cupcakes, it's time to package them. 
Chef has N cupcakes, and needs to decide how many cupcakes to place in each package. 
Each package must contain the same number of cupcakes. 
Chef will choose an integer A between 1 and N, inclusive, and place exactly A cupcakes into each package. 
Chef makes as many packages as possible. Chef then gets to eat the remaining cupcakes. 
Chef enjoys eating cupcakes very much. Help Chef choose the package size A that will let him eat as many cupcakes as possible.

Input
---------------
Input begins with an integer T, the number of test cases. 
Each test case consists of a single integer N, the number of cupcakes.

Output
------------
For each test case, output the package size that will maximize the number of leftover cupcakes. 
If multiple package sizes will result in the same number of leftover cupcakes, print the largest such size.



*/

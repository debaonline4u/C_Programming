// Code Chef problem to withdraw money from ATM.
// Withdraw amount should be multiple of 5. 

#include<stdio.h>
#include<stdlib.h>

int checkXY(int x,float y);

int main()
{
	int x; // amount to be with drawn
	float y; // current amount
	
	printf("Enter amout to withdraw and Current amount: \n"); // Withdraw amount should be multiple of 5.
	scanf("%d%f",&x,&y);
	if(checkXY(x,y)) // if x and y are not in correct format, or in incompatible entries, then check should not allow them to go further. 
						// print the  initial amout x an close the program.
	{
		printf("Withdraw Not Possible, Your Current Balance is: %.2f",y);
		exit(0);
	}
	// else continue
	//printf("all ok");
	if(y>=((float)x+0.5))	
		y-=((float)x+0.5);
	printf("Your Current Balance is: %.2f",y);
	
}

int checkXY(int x,float y)
{
	if((x<0 || x>2000) || (y<0 || y>2000) || (x%5!=0) || (x>=y))
		return 1;
	else 
		return 0;
}

/*

		Problem Statement
----------------------------------
		
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, 
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). 
For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.

		Input
--------------------------------------
Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.

		Output
--------------------------------------
Output the account balance after the attempted transaction, given as a number with two digits of precision. 
If there is not enough money in the account to complete the transaction, output the current bank balance.


*/

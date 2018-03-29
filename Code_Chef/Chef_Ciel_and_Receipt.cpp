// Ciel and Receipt

#include<stdio.h>

long int itemCount(long int cash)
{
	int i;
	long int item=0,temp=0;
	int price[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	for(i=11;i>=0 || cash>0;i--)
	{
		if(cash>=price[i])
		{
			temp=cash/price[i];
			item+=temp;
			cash=cash%price[i];
		}
	}
	return item;
}

int main()
{
	int test_case;
	long int cash;
	for(scanf("%d",&test_case);test_case>0;test_case--)
	{
		if(test_case<0 || test_case>5)	// Constratints for test_case
		{
			test_case=0;
			break;
		}
		scanf("%ld",&cash);
		if(cash<1 || cash>100000)	// Constraints for cash value
			continue;
			
		printf("%ld\n",itemCount(cash));
		
	}
	return 0;
}


/********************* PROBLEM STATEMENT  *****************************

Tomya is a girl. She loves Chef Ciel very much.

Tomya like a positive integer p, and now she wants to get a receipt of Ciel's restaurant whose total price is exactly p. 
The current menus of Ciel's restaurant are shown the following table.

Name of Menu	price
--------------------------
eel flavored water								1
deep-fried eel bones							2
clear soup made with eel livers					4
grilled eel livers served with grated radish	8
savory egg custard with eel						16
eel fried rice (S)								32
eel fried rice (L)								64
grilled eel wrapped in cooked egg				128
eel curry rice									256
grilled eel over rice							512
deluxe grilled eel over rice					1024
eel full-course									2048

Note that the i-th menu has the price 2i-1 (1 = i = 12).

Since Tomya is a pretty girl, she cannot eat a lot. So please find the minimum number of menus whose total price is exactly p. Note that if she orders the same menu twice, then it is considered as two menus are ordered. (See Explanations for details)

Input
----------------
The first line contains an integer T, the number of test cases. Then T test cases follow. Each test case contains an integer p.

Output
---------------
For each test case, print the minimum number of menus whose total price is exactly p.

Constraints
----------------
1 = T = 5
1 = p = 100000 (105)
There exists combinations of menus whose total price is exactly p.
Sample Input
-----------------
4
10
256
255
4096
Sample Output
------------------
2
1
8
2

************************************************************************************ */




















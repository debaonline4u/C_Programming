#include<stdio.h>
 // https://www.codechef.com/problems/LADDU
int main()
{
	char activity[20], origin[16];
	int activities, laddus, rank, severity, T;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %s", &activities, origin);
		laddus = 0;
		while (activities--)
		{
			scanf("%s", activity);
			if ((activity[0] == 'C') && (activity[8] == 'W'))
			{
				scanf("%d", &rank);
				laddus += 300 + ((rank < 20) ? (20 - rank) : 0);
			}
			else if (activity[0] == 'T')
				laddus += 300;
			else if (activity[0] == 'B')
			{
				scanf("%d", &severity);
				laddus += severity;
			}
			else
				laddus += 50;
		}
		if (origin[0] == 'I')
			printf("%d\n", laddus / 200);
		else
			printf("%d\n", laddus / 400);
	}
	return 0;
} 

// Printing of Swastica Pattern

#include<stdio.h>
#include<string.h>

int main()
{
	int row,col,n,i,j;
	printf("Enter Row and Column:\n");
	printf("Row/Col: ");
	scanf("%d",&row);
	
	(row%2==0)?n=(row/2)+1,row+=1:n=(row+1)/2; // Adjusting row value because we need an Odd value for row and col. 
	col=row;
	
	char str[row][col]; // N X N matrix is ready for practice.
	
//	printf("Row=%d,n=%d",row,n);
	n--;  // Here we have made it one less, as we are starting index from 0.
	
	// assignment of space to every place of matrix.
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			str[i][j]=' ';
			
	for(i=0,j=0;i<row,j<col;i++,j++)
	{
		// Middle row and Middle col should be a *
		str[n][j]='*';
		str[i][n]='*';
	}
	// Now we'll create * for side rows and cols
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			
			if( ((i==0)&&(j>n)) || ((i==row-1)&&(j<n)) || ((j==0)&&(i<n))  ||  ((j==col-1)&&(i>n)) )
				str[i][j]='*';
		
		/*	
			if((i==0)&&(j>n))
				str[i][j]='*';
			if((i==row-1)&&(j<n))
				str[i][j]='*';
			if((j==0)&&(i<n))
				str[i][j]='*';
			if((j==col-1)&&(i>n))
				str[i][j]='*';
		*/
			
		}
	}
	
	// Printing Swastika Pattern
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%c ",str[i][j]);
		printf("\n");
	}
	return 0;
}















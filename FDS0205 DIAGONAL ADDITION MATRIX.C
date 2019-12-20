//ADDITION OF MAJOR DIAGONAL ELEMENTS OF A MATRIX
#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[10][10],i,j,rows,cols,sum=0;
	clrscr();
	printf("Enter number of rows and columns for matrix: ");
	scanf("%d %d",&rows,&cols);
	if(rows==cols)
	{
		printf("Enter %d elements for matrix:\n",rows*cols);
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				scanf("%d",&matrix[i][j]);
			}
		}
		//ADDITION
		for(i=0;i<rows;i++)
		{
			sum=sum+matrix[i][i];
		}
		printf("Sum of major diagonal elements= %d",sum);
	}
	else
	{
		printf("Addition not possible.");
	}
	getch();
}

//CONSTRUCTION OF LOWER TRIANGULAR MATRIX
#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[10][10],i,j,rows,cols,n=0;
	clrscr();
	printf("Enter number of rows and columns: ");
	scanf("%d %d",&rows,&cols);
	if(rows==cols)
	{
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				if(j<=i)
				{
					n++;
				}
			}
		}
		printf("Enter %d elements for lower traingle matrix: ",n);
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				if(j<=i)
				{
					scanf("%d",&matrix[i][j]);
				}
				else
				{
					matrix[i][j]=0;
				}
			}
		}
		printf("Matrix=\n");
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				printf("%d\t",matrix[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Cannot be constructed.");
	}
	getch();
}

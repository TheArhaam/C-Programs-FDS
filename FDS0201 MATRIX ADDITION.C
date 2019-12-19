//MATRIX ADDITION
#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix1[10][10],matrix2[10][10],res[10][10],i,j,rows,cols;
	clrscr();
	printf("Enter the number of rows and columns: ");
	scanf("%d %d",&rows,&cols);
	printf("Enter %d elements for 1st matrix:\n",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Enter %d elements for 2nd matrix:\n",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	//ADDITION
	printf("\nResult=\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			res[i][j]=matrix1[i][j]+matrix2[i][j];
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	getch();
}

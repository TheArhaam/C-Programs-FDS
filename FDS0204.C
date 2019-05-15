//GREATEST NUMBER IN EACH ROW OF A MATRIX
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,large,c,r,arr1[10][10];
	clrscr();
	printf("Enter number of rows and columns for matrix:");
	scanf("%d %d",&r,&c);
	printf("Enter %d elements for matrix:\n",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	//FINDING GREATEST
	printf("Matrix=\n");
	for(i=0;i<r;i++)
	{
		large=0;
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr1[i][j]);
			if(arr1[i][j]>=large)
			{
				large=arr1[i][j];
			}
		}
		printf("Greatest=%d\n",large);
	}
	getch();
}



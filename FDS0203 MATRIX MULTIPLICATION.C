//MATRIX MULTIPLICATION
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,prod=0;
	int rows1,rows2,cols1,cols2,resr,resc;
	int arr1[10][10],arr2[10][10],res[10][10];
	clrscr();
	printf("Enter number of rows and columns for 1st Matrix:");
	scanf("%d %d",&rows1,&cols1);
	printf("Enter number of rows and columns for 2nd Matrix:");
	scanf("%d %d",&rows2,&cols2);
	if(cols1==rows2)
	{
		resr=rows1;
		resc=cols2;
		printf("Enter %d elements for 1st Matrix:\n",rows1*cols1);
		for(i=0;i<rows1;i++)
		{
			for(j=0;j<cols1;j++)
			{
				scanf("%d",&arr1[i][j]);
			}
		}
		/*printf("1st:\n");
		for(i=0;i<rows1;i++)
		{
			for(j=0;j<cols1;j++)
			{
				printf("%d\t",arr1[i][j]);
			}
			printf("\n");
		}*/
		printf("Enter %d elements for 2nd Matrix:\n",rows2*cols2);
		for(i=0;i<rows2;i++)
		{
			for(j=0;j<cols2;j++)
			{
				scanf("%d",&arr2[i][j]);
			}
		}
		/*printf("2nd:\n");
		for(i=0;i<rows2;i++)
		{
			for(j=0;j<cols2;j++)
			{
				printf("%d\t",arr2[i][j]);
			}
			printf("\n");
		}*/
		//MULTIPLICATION
		for(i=0;i<rows1;i++)
		{
			for(j=0;j<cols2;j++)
			{
				for(k=0;k<rows2;k++)
				{
					prod=prod+(arr1[i][k]*arr2[k][j]);
				}
				res[i][j]=prod;
				prod=0;
			}
		}
		printf("Result=\n");
		for(i=0;i<resr;i++)
		{
			for(j=0;j<resc;j++)
			{
				printf("%d\t",res[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("The two matrices cannot be multiplied.");
	}
	getch();
}

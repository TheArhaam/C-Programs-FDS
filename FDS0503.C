//MULTIPLICATION OF TWO MATRICES USING DYNAMIC MEMORY ALLOCATION
#include<stdio.h>
#include<conio.h>
void main()
{
	int *a=0,*b=0,*res=0,i,j,k,r1,c1,r2,c2,prod=0;//variable declaration
	clrscr();

	//FIRST MATRIX INPUT
	printf("Enter number of rows and columns for 1st matrix: ");
	scanf("%d %d",&r1,&c1);
	a=(int *)malloc(r1*c1*sizeof(int));
	printf("Enter %d elements for 1st matrix:\n",r1*c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",(a+(i*c1)+j));
		}
	}

	//SECOND MATRIX INPUT
	printf("Enter number of rows and columns for 2nd matrix: ");
	scanf("%d %d",&r2,&c2);
	b=(int *)malloc(r2*c2*sizeof(int));
	printf("Enter %d elements for 2nd matrix:\n",r2*c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",(b+(i*c2)+j));
		}
	}

	//DISPLAYING BOTH MATRICES
	//first matrix
	printf("1st=\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",*(a+(i*c1)+j));
		}
		printf("\n");
	}
	//second matrix
	printf("2nd=\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",*(b+(i*c2)+j));
		}
		printf("\n");
	}

	//MULTIPLICATION
	if(c1!=r2)
	{
		printf("The two matrices cannot be multiplied.");
	}
	else
	{
		res=(int *)malloc(r1*c2*sizeof(int));
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				prod=0;
				for(k=0;k<r2;k++)
				{
					prod=prod+(*(a+(k+i*c1)))*(*(b+(j+k*c2)));
				}
				*(res+(i*c2)+j)=prod;
			}
		}
		//Displaying result
		printf("Result=\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",*(res+(i*c2)+j));
			}
			printf("\n");
		}
	}
	getch();
}


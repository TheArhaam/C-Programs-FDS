//SPARSE MATRIX REPRESENTATION
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],r,c,i,j,nz=0,k=1,sp[10][3];
	clrscr();
	printf("Enter number of rows and columns: ");
	scanf("%d %d",&r,&c);
	//Accepting a sparse matrix
	printf("Enter a sparse matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	//Generating Sparse Matrix Representation
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				sp[k][0]=i;
				sp[k][1]=j;
				sp[k][2]=a[i][j];
				k++;
				nz++;
			}
		}
	}
	//Adding the header (Rows, Columns and number of Non-Zero elements
	sp[0][0]=r;
	sp[0][1]=c;
	sp[0][2]=nz;

	//Displaying the Sparse Matrix Representation
	printf("Sparse matrix representation=\n");
	printf("ROWS\tCOLS\tNZ\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sp[i][j]);
		}
		printf("\n");
	}
	getch();
}
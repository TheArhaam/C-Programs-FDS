//SPARSE MATRIX ADDITION
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[10][10],arr2[10][10],sp1[10][3],sp2[10][3],res[10][3];
	int i,j,t1,t2,nz=0,r,c,k=1,k2=1;
	clrscr();

	//FIRST MATRIX
	printf("Enter number of rows and columns for 1st matrix: ");
	scanf("%d %d",&r,&c);
	//Reading 1st Matrix
	printf("Enter a sparse matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	//Creating sparse matrix representation for 1st Matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr1[i][j]!=0)
			{
				sp1[k][0]=i;
				sp1[k][1]=j;
				sp1[k][2]=arr1[i][j];
				nz++;
				k++;
			}
		}
	}
	sp1[0][0]=r;
	sp1[0][1]=c;
	sp1[0][2]=nz;

	//SECOND MATRIX
	nz=0;
	printf("Enter number of rows and columns for 2nd matrix: ");
	scanf("%d %d",&r,&c);
	//Reading 2nd Matrix
	printf("Enter a sparse matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	//Creating sparse matrix representation for 2nd Matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr2[i][j]!=0)
			{
				sp2[k2][0]=i;
				sp2[k2][1]=j;
				sp2[k2][2]=arr2[i][j];
				nz++;
				k2++;
			}
		}
	}
	sp2[0][0]=r;
	sp2[0][1]=c;
	sp2[0][2]=nz;

	//DISPLAYING THE SPARSE REPRESENTATION OF BOTH MATRICES
		//First
	printf("First sparse representation:\n");
	printf("ROWS\tCOLS\tNZ\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sp1[i][j]);
		}
		printf("\n");
	}
		//Second
	printf("Second sparse representation:\n");
	printf("ROWS\tCOLS\tNZ\n");
	for(i=0;i<k2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sp2[i][j]);
		}
		printf("\n");
	}

	//ADDITION OF THE TWO SPARSE REPRESENTATIONS
	if((sp1[0][0]!=sp2[0][0])||(sp1[0][1]!=sp2[0][1]))
	{
		printf("Addition the two matrices is not possible.");
	}
	else
	{
		t1=sp1[0][2];//Non zero in 1st matrix
		t2=sp2[0][2];//Non zero in 2nd matrix
		i=j=k=1;
		res[0][0]=sp1[0][0];//Rows
		res[0][1]=sp1[0][1];//Columns
		while((i<=t1)&&(j<=t2))
		{
			if(sp1[i][0]<sp2[j][0])//if row1<row2
			{
				res[k][0]=sp1[i][0];
				res[k][1]=sp1[i][1];
				res[k][2]=sp1[i][2];
				i++;k++;
			}
			else if(sp2[j][0]<sp1[i][0])//if row2<row1
			{
				res[k][0]=sp2[j][0];
				res[k][1]=sp2[j][1];
				res[k][2]=sp2[j][2];
				j++;k++;
			}
			else if(sp1[i][1]<sp2[j][1])//if col1<col2
			{
				res[k][0]=sp1[i][0];
				res[k][1]=sp1[i][1];
				res[k][2]=sp1[i][2];
				i++;k++;
			}
			else if(sp2[j][1]<sp1[i][1])//if col2<col1
			{
				res[k][0]=sp2[j][0];
				res[k][1]=sp2[j][1];
				res[k][2]=sp2[j][2];
				j++;k++;
			}
			else//if row1==row2 && col1==col2
			{
				res[k][0]=sp1[i][0];
				res[k][1]=sp1[i][1];
				res[k][2]=sp1[i][2]+sp2[j][2];
				i++;j++;k++;
			}
		}
		//Following code is used to add the remaining elements to res
			//From 1st
		while(i<=t1)
		{
			res[k][0]=sp1[i][0];
			res[k][1]=sp1[i][1];
			res[k][2]=sp1[i][2];
			i++;k++;
		}
			//From 2nd
		while(j<=t2)
		{
			res[k][0]=sp2[j][0];
			res[k][1]=sp2[j][1];
			res[k][2]=sp2[j][2];
			k++;j++;
		}
		res[0][2]=k-1;
		//DISPLAYING RESULT
		printf("Addition=\n");
		printf("ROWS\tCOLS\tNZ\n");
		for(i=0;i<k;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",res[i][j]);
			}
			printf("\n");
		}
	}
	getch();
}
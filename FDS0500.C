//MATRIX OPERATIONS USING DYNAMIC MEMORY ALLOCATION
#include<stdio.h>
#include<conio.h>
void main()
{
	int *a=0,*b=0,*res=0,i,j,k,r1,c1,r2,c2,ch,prod;
	clrscr();

	//FIRST MATRIX
	printf("Enter number of rows and columns for 1st matrix: ");
	scanf("%d %d",&r1,&c1);
	a=(int *)malloc(r1*c1*sizeof(int));//memory allocation
	printf("Enter %d elements for 1st matrix:\n",r1*c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",(a+(i*c1)+j));
		}
	}

	//SECOND MATRIX
	printf("Enter number of rows and columns for 2nd matrix: ");
	scanf("%d %d",&r2,&c2);
	b=(int *)malloc(r2*c2*sizeof(int));//memory allocation
	printf("Enter %d elements for 2nd matrix:\n",r2*c2);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",(b+(i*c1)+j));
		}
	}

	do
	{
		//MENU
		printf("1)Addition");
		printf("\n2)Subtraction");
		printf("\n3)Multiplication");
		printf("\n4)Exit");
		printf("\nEnter your choice [1/2/3/4]: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: //ADDITION
				if(r1!=r2||c1!=c2)
				{
					printf("The two matrices cannot be added.");
				}
				else
				{
					res=(int *)malloc(r1*c1*sizeof(int));
					printf("SUM=\n");
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
						{
							*(res+(i*c1)+j)=(*(a+(i*c1)+j)) + (*(b+(i*c1)+j));
							printf("%d\t",*(res+(i*c1)+j));
						}
						printf("\n");
					}
				}
				break;
			case 2: //SUBTRACTION
				if(r1!=r2||c1!=c2)
				{
					printf("The two matrices cannot be subtracted.");
				}
				else
				{
					res=(int *)malloc(r1*c1*sizeof(int));
					printf("DIFFERENCE=\n");
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
						{
							*(res+(i*c1)+j)=(*(a+(i*c1)+j)) - (*(b+(i*c1)+j));
							printf("%d\t",*(res+(i*c1)+j));
						}
						printf("\n");
					}
				}
				break;
			case 3: //MULTIPLICATION
				if(r2!=c1)
				{
					printf("Matrices cannot be subtracted.");
				}
				else
				{
					res=(int *)malloc(r1*c2*sizeof(int));
					printf("PRODUCT=\n");
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
							printf("%d\t",prod);
						}
						printf("\n");
					}
				}
				break;
			case 4:	//EXIT
				goto EXIT;
				break;
			default:printf("Invalid choice.");
				break;
		}
		printf("====================\n");
	}while(ch!=4);
	getch();
	EXIT:
}





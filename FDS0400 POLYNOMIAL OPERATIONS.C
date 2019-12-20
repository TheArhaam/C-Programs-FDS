//POLYNOMIAL OPERATIONS
#include<stdio.h>
#include<conio.h>

//Structure for polynomial
typedef struct
{
	int coef;
	int exp;
}poly;

void readPoly(poly [],int);//For reading the polynomial
void printPoly(poly [],int);//For displaying the polynomial
void addPoly(poly [],poly [],int,int);//For adding the polynomials
void subPoly(poly [],poly [],int,int);//For subtracting one polynomial from another
void prodPoly(poly [],poly [],int,int);//For multiplying the two polynomials

void main()
{
	poly p1[10],p2[10];//Structure array
	int terms1,terms2,ch;
	clrscr();
	do
	{
		//MENU
		printf("1)Create");
		printf("\n2)Print");
		printf("\n3)Addition");
		printf("\n4)Subtraction");
		printf("\n5)Multiplication");
		printf("\n6)Exit");
		printf("\nEnter your choice [1/2/3/4/5/6]: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: //CREATE
				printf("Enter the number of terms for 1st polynomial: ");
				scanf("%d",&terms1);
				readPoly(p1,terms1);
				printf("Enter the number of terms for 2nd polynomial: ");
				scanf("%d",&terms2);
				readPoly(p2,terms2);
				break;
			case 2: //PRINT
				printf("1st polynomial= ");
				printPoly(p1,terms1);
				printf("2nd polynomial= ");
				printPoly(p2,terms2);
				break;
			case 3: //ADDITION
				printf("Addition= ");
				addPoly(p1,p2,terms1,terms2);
				break;
			case 4: //SUBTRACTION
				printf("Subtraction= ");
				subPoly(p1,p2,terms1,terms2);
				break;
			case 5: //MULTIPLICATION
				printf("Product= ");
				prodPoly(p1,p2,terms1,terms2);
				break;
			case 6: //EXIT
				goto EXIT;
			default://For invalid choice
				printf("Invalid choice.\n");
		}
		printf("====================\n");
	}while(ch!=6);
	getch();
	EXIT:
}
void readPoly(poly p[],int t)
{
	int i;
	for(i=0;i<t;i++)
	{
		printf("Enter coefficient: ");
		scanf("%d",&p[i].coef);
		printf("Enter exponent: ");
		scanf("%d",&p[i].exp);
	}
}
void printPoly(poly p[],int t)
{
	int i;
	for(i=0;i<t;i++)
	{
		if(p[i].exp!=0)
		{
			printf("(%dx^%d)",p[i].coef,p[i].exp);
		}
		else
		{
			printf("%d",p[i].coef);
		}
		if(i!=t-1)
		{
			printf(" + ");
		}
	}
	printf("\n");
}
void addPoly(poly po1[],poly po2[],int t1,int t2)
{
	poly res[20];
	int i=0,j=0,k=0;
	//i is used for po1
	//j is used for po2
	//k is used for res
	while((i<t1)&&(j<t2))
	{
		if(po1[i].exp==po2[j].exp)
		{
			res[k].exp=po1[i].exp;
			res[k].coef=po1[i].coef+po2[j].coef;
			i++;j++;k++;
		}
		else if(po2[j].exp>po1[i].exp)
		{
			res[k].exp=po2[j].exp;
			res[k].coef=po2[j].coef;
			k++;j++;
		}
		else if(po1[i].exp>po2[j].exp)
		{
			res[k].exp=po1[i].exp;
			res[k].coef=po1[i].coef;
			k++;i++;
		}
	}
	//For remaining elements in po1
	while(i<t1)
	{
		res[k].exp=po1[i].exp;
		res[k].coef=po1[i].coef;
		k++;i++;
	}
	//For remaining elements in po2
	while(j<t2)
	{
		res[k].exp=po2[j].exp;
		res[k].coef=po2[j].coef;
		k++;j++;
	}
	printPoly(res,k);
}
void subPoly(poly po1[],poly po2[],int t1,int t2)
{
	poly res[20];
	int i=0,j=0,k=0;
	//i is used for po1
	//j is used for po2
	//k is used for res
	while((i<t1)&&(j<t2))
	{
		if(po1[i].exp==po2[j].exp)
		{
			res[k].exp=po1[i].exp;
			res[k].coef=po1[i].coef-po2[j].coef;
			i++;j++;k++;
		}
		else if(po2[j].exp>po1[i].exp)
		{
			res[k].exp=po2[j].exp;
			res[k].coef=po2[j].coef;
			k++;j++;
		}
		else if(po1[i].exp>po2[j].exp)
		{
			res[k].exp=po1[i].exp;
			res[k].coef=po1[i].coef;
			k++;i++;
		}
	}
	//For remaining elements in po1
	while(i<t1)
	{
		res[k].exp=po1[i].exp;
		res[k].coef=po1[i].coef;
		k++;i++;
	}
	//For remaining elements in po2
	while(j<t2)
	{
		res[k].exp=po2[j].exp;
		res[k].coef=po2[j].coef;
		k++;j++;
	}
	printPoly(res,k);
}
void prodPoly(poly po1[],poly po2[],int t1,int t2)
{
	poly res[20];
	int i=0,j=0,k=0;
	//i is used for po1
	//j is used for po2
	//k is used for res
	while((i<t1)&&(j<t2))
	{
		res[k].exp=po1[i].exp+po2[j].exp;
		res[k].coef=po1[i].coef*po2[j].coef;
		k++;i++;j++;
	}
	//For remaining elements in po1
	while(i<t1)
	{
		res[k].exp=po1[i].exp;
		res[k].coef=po1[i].coef;
		k++;i++;
	}
	//For remaining elements in po2
	while(j<t2)
	{
		res[k].exp=po2[j].exp;
		res[k].coef=po2[j].coef;
		k++;j++;
	}
	printPoly(res,k);
}





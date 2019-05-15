//Employee Data FILE MANIPULATION
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
	int empno;
	char name[30][30],name1[30][30];
	int basic,grade;
}e[10];

int main()
{
	int i,j,n,total=0;
	char temp[20];
	FILE *fp=fopen("employee.txt","a+");
	clrscr();
	printf("Enter number of employees: ");
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++)
	{
		printf("\nEnter the employee number: ");
		scanf("%d", &e[i].empno) ;
		printf("\nEnter the name : ") ;
		scanf("%s", e[i].name) ;
		strcpy(e[i].name1,e[i].name);
		printf("\nEnter the basic pay, grade : ") ;
		scanf("%d %d", &e[i].basic, &e[i].grade) ;
	}
	fprintf(fp,"\nEmp. No. Name \t Bpay \t Grade \n\n") ;
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%d\t",e[i].empno);
		fprintf(fp,"%s\t",e[i].name);
		fprintf(fp,"%d\t",e[i].basic);
		fprintf(fp,"%d\n",e[i].grade);
	}
	fclose(fp);
	printf("\n------------------------\n");
	printf("The missing employee number: ");
	for(i=0;i<n-1;i++)
	{
		if(e[i].empno<e[i+1].empno)
		{
			if(e[i].empno==(e[i].empno+1));
			else
			printf("%d ",e[i].empno+1);
		}
	}
	printf("\n------------------------\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(e[i].name,e[j].name)>0)
			{
				strcpy(temp,e[i].name);
				strcpy(e[i].name,e[j].name);
				strcpy(e[j].name,temp);
			}
		}
	}
	printf("Input Names\tSorted names\n");
	for(i=0;i<=n;i++)
	{
		printf("%s\t\t%s\n", e[i].name1, e[i].name);
	}
	getch();
}

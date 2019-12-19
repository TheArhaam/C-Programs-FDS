//Multiplication Table 1-10
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,res;
	clrscr();
	for(a=1;a<=10;a++)
	{
		printf("%d\n",a);
		for(b=1;b<=10;b++)
		{
			res=a*b;
			printf("%d*%d=%d ",a,b,res);
		}
		printf("\n");
	}
	getch();
}

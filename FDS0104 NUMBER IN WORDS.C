//PRINT A NUMBER IN WORDS 1-9999
#include<stdio.h>
#include<conio.h>
void checkones(int);
void checktens(int);
void main()
{
	int num,n,r;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	num=n;
	LOOP:
	if(num>0&&num<20)
	{
		checkones(num);
	}
	else if(num>=20&&num<100)
	{
		if(num%10==0)
		{
			checktens(num/10);
		}
		else
		{
			r=num%10;
			num=num/10;
			checktens(num);
			checkones(r);
		}
	}
	else if(num>=100&&num<1000)
	{
		r=num%100;
		num=num/100;
		checkones(num);
		printf("hundred ");
		num=r;
		goto LOOP;
	}
	else if(num>=1000&&num<10000)
	{
		r=num%1000;
		num=num/1000;
		checkones(num);
		printf("thousand ");
		num=r;
		goto LOOP;
	}
	getch();
}
void checkones(int n)
{
	switch(n)
	{
		case 1:printf("one ");break;
		case 2:printf("two ");break;
		case 3:printf("three ");break;
		case 4:printf("four ");break;
		case 5:printf("five ");break;
		case 6:printf("six ");break;
		case 7:printf("seven ");break;
		case 8:printf("eight ");break;
		case 9:printf("nine ");break;
		case 10:printf("ten ");break;
		case 11:printf("eleven ");break;
		case 12:printf("twelve ");break;
		case 13:printf("thirteen ");break;
		case 14:printf("fourteen ");break;
		case 15:printf("fifteen ");break;
		case 16:printf("sixteen ");break;
		case 17:printf("seventeen ");break;
		case 18:printf("eighteen ");break;
		case 19:printf("nineteen ");break;
	}
}
void checktens(int n)
{
	switch(n)
	{
		case 2:printf("twenty ");break;
		case 3:printf("thirty ");break;
		case 4:printf("forty ");break;
		case 5:printf("fifty ");break;
		case 6:printf("sixty ");break;
		case 7:printf("seventy ");break;
		case 8:printf("eighty ");break;
		case 9:printf("ninety ");break;
	}
}

//ONES COMPLEMENT AND TWOS COMPLEMENT
#include<stdio.h>
#include<conio.h>
void main()
{
	char binary[20],onesc[20],twosc[20];
	int size,i,carry=1;
	clrscr();
	printf("Enter size of binary number: ");
	scanf("%d",&size);
	size++;
	printf("Enter binary number: ");
	for(i=0;i<size;i++)
	{
		scanf("%c",&binary[i]);
	}
	for(i=0;i<size;i++)
	{
		if(binary[i]=='0')
		{
			onesc[i]='1';
		}
		else if(binary[i]=='1')
		{
			onesc[i]='0';
		}
	}
	onesc[size]='\0';
	for(i=size-1;i>=0;i--)
	{
		if(onesc[i]=='1'&&carry==1)
		{
			twosc[i]='0';
		}
		else if(onesc[i]=='0'&&carry==1)
		{
			twosc[i]='1';
			carry=0;
		}
		else
		{
			twosc[i]=onesc[i];
		}
	}
	printf("Ones complement= ");
	for(i=1;i<size;i++)
	{
		printf("%c",onesc[i]);
	}
	printf("\nTwos complement= ");
	for(i=1;i<size;i++)
	{
		printf("%c",twosc[i]);
	}
	getch();
}
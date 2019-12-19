//ALPHABET PYRAMID-3
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[5]={'A','B','C','D','E'};
	int i,j,flag=1;
	clrscr();
	for(i=4;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",str[j]);
		}
		for(j=i;j>=0;j--)
		{
			if(flag==1)
			{
				j--;
				flag=0;
			}
			printf("%c",str[j]);
		}
		printf("\n");
	}
	getch();
}

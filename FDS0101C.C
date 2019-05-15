//ALPHABET PYRAMID-2
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[5]={'A','B','C','D','E'};
	int i,j,flag=1;
	clrscr();
	i=4;
	while(i>=0)
	{
		j=0;
		while(j<=i)
		{
			printf("%c",str[j]);
			j++;
		}
		j=i;
		while(j>=0)
		{
			if(flag==1)
			{
				j--;
				flag=0;
			}
			printf("%c",str[j]);
			j--;
		}
		printf("\n");
		i--;
	}
	getch();
}
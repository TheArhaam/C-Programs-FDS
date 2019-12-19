//ALPHABET PYRAMID-1
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[4]={'A','B','C','D'};
	int i,j,flag=1,flag2=1;
	clrscr();
	i=4;

	while(i>=0)
	{
		j=0;
		while(j<=i)
		{
			printf("%c",str[j]);
			j++;
			if(flag==1&&j==4)
			{
				break;
			}
		}
		if(flag==1)
		{
			printf("E");
			flag=0;
		}
		j=i;
		while(j>=0)
		{
			if(flag2==1)
			{
				j--;
				flag2=0;
			}
			printf("%c",str[j]);
			j--;
		}
		printf("\n");
		i--;
	}
	getch();
}

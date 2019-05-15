//NUMBER OF NOTES FOR GIVEN AMOUNT 1-9999
#include<stdio.h>
#include<conio.h>
void main()
{
	int wamt=0,wonek=0,wfhund=0,whund=0,wffty=0;
	int wtty=0,wten=0,wfive=0,wtwo=0,wone=0,temp=0;
	clrscr();
	printf("Enter amount: ");
	scanf("%d",&wamt);
	wonek=wamt/1000;
	temp=wamt%1000;
	if(temp!=0)
	{
		wfhund=temp/500;
		temp=temp%500;
		if(temp!=0)
		{
			whund=temp/100;
			temp=temp%100;
			if(temp!=0)
			{
				wffty=temp/50;
				temp=temp%50;
				if(temp!=0)
				{
					wtty=temp/20;
					temp=temp%20;
					if(temp!=0)
					{
						wten=temp/10;
						temp=temp%10;
						if(temp!=0)
						{
							wfive=temp/5;
							temp=temp%5;
							if(temp!=0)
							{
								wtwo=temp/2;
								temp=temp%2;
								if(temp!=0)
								{
									wone=temp/1;
								}
							}
						}
					}
				}
			}
		}
	}
	printf("1000 notes= %d",wonek);
	printf("\n500 notes= %d",wfhund);
	printf("\n100 notes= %d",whund);
	printf("\n50 notes= %d",wffty);
	printf("\n20 notes= %d",wtty);
	printf("\n10 notes= %d",wten);
	printf("\n5 notes= %d",wfive);
	printf("\n2 notes= %d",wtwo);
	printf("\n1 notes= %d",wone);
	getch();
}

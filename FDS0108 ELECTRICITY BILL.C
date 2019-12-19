//ELECTRICITY BILL CALCULATION BASED ON UNITS CONSUMED
#include<stdio.h>
#include<conio.h>
void main()
{
	float cunits,temp,ebill=0,fs,gt;
	clrscr();
	printf("Enter number of units consumed: ");
	scanf("%f",&cunits);
	temp=cunits;
	if(cunits>50)
	{
		ebill=50*0.5;
		temp=temp-50;
		if(temp>100)
		{
			ebill=ebill+(100*0.75);
			temp=temp-100;
			if(temp>100)
			{
				ebill=ebill+(100*1.20);
				temp=temp-100;
				if(cunits>250)
				{
					temp=cunits-250;
					ebill=ebill+(temp*1.50);
				}
			}
			else if(temp<=100)
			{
				ebill=ebill+(temp*1.20);
			}
		}
		else if(temp<=100)
		{
			ebill=ebill+(temp*0.75);
		}
	}
	else if(cunits<=50)
	{
		ebill=cunits*0.5;
	}
	fs=ebill*20/100;
	gt=ebill*10/100;
	printf("Electricity bill before= %f",ebill);
	printf("\nFuel surcharge= %f",fs);
	printf("\nGovernment tax= %f",gt);
	ebill=ebill+fs+gt;
	printf("\n\nFinal Electricity bill= %f",ebill);
	getch();
}

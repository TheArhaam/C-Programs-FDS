//INSERTION SORT
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],size,h,i,j,k,temp;
	clrscr();
	//Array size input
	printf("Enter size: ");
	scanf("%d",&size);
	//Array elements input
	printf("Enter %d elements for array: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	//SORTING
	for(k=0;k<size;k++)
	{
		for(i=1;i<size;i++)
		{
			for(j=i-1;j>=0;j--)
			{
				if(arr[i]<arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		//Displaying each iteration
		printf("Iteration %d: ",k+1);
		for(h=0;h<size;h++)
		{
			printf("%d ",arr[h]);
		}
		printf("\n");
	}
	getch();
}


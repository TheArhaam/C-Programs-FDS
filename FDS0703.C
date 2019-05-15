//BUBBLE SORT
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,j,k,size,temp,flag;
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
	for(i=0;i<size;i++)
	{
		flag=0;
		for(j=0;j<size-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		printf("Iteration %d: ",i+1);
		for(k=0;k<size;k++)
		{
			printf("%d ",arr[k]);
		}
		printf("\n");
		if(flag==0)
		{
			break;
		}
	}
	getch();
}
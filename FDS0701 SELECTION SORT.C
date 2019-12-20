//SELECTION SORT
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,size,temp,flag=0,arr[10];//variable declaration
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
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				flag=1;
			}
		}
		//Displaying each iteration
		printf("Iteration %d: ",i+1);
		for(k=0;k<size;k++)
		{
			printf("%d ",arr[k]);
		}
		printf("\n");
		if(flag==0)//to exit loop once array is sorted
		{
			break;
		}
	}
	getch();
}

//QUICK SORT
#include<stdio.h>
#include<conio.h>

void quicksort(int [10],int,int);//function declaration for sorting

void main()
{
	int x[20],size,i;//variable declaration
	clrscr();
	//taking size of array from user
	printf("Enter size of the array: ");
	scanf("%d",&size);
	//taking array from user
	printf("Enter %d elements: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
	quicksort(x,0,size-1);//calling function for quick sort
	//displaying sorted array
	printf("Sorted elements: ");
	for(i=0;i<size;i++)
	{
		printf(" %d",x[i]);
	}
	getch();
}

void quicksort(int x[10],int first, int last)
{
	int pivot,j,temp,i;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(x[i]<=x[pivot]&&i<last)
			{
				i++;
			}
			while(x[j]>x[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
		temp=x[pivot];
		x[pivot]=x[j];
		x[j]=temp;
		//after this, x[pivot] is in its correct sorted position
		quicksort(x,first,j-1);//sorting the left sub array
		quicksort(x,j+1,last);//sorting the right sub array
	}
}


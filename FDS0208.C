//ARRAY DELETION
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,pos,element,size,temp;
	clrscr();
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("Enter %d elements for array: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position of the element you would like to delete[1-size]: ");
	scanf("%d",&pos);

	if(pos<1 || pos>size) //Checking if position is valid
	{
		printf("Invalid position, position must be between 1 & size.");
		goto PROGEND;
	}
	else //For every valid (deletable) position
	{
		for(i=pos-1;i<size-1;i++)
		{
			arr[i]=arr[i+1];
		}
		size--;
	}

	//Displaying the array after deletion
	printf("Array after deletion: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	PROGEND:
	getch();
}

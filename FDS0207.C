//ARRAY INSERTION
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
	printf("Enter element you would like to insert into array: ");
	scanf("%d",&element);
	printf("Enter position you would like to insert the element into: ");
	scanf("%d",&pos);

	if(pos<0 || pos>size) //Checking if entered position is valid
	{
		printf("Invalid position.");
		goto PROGEND;
	}

	else if(pos!=size) //For every position thats not last
	{
		for(i=size-1;i!=pos;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[pos+1]=arr[pos];
		arr[pos]=element;
		size++;
	}
	else if (pos==size) //For last position
	{
		arr[pos]=element;
		size++;
	}

	//Displaying after insertion
	printf("Array after insertion: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	PROGEND:
	getch();
}

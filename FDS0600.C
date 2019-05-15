//LINEAR AND BINARY SEARCH
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],size,key,first,last,mid,i,flag=0,ch,temp,j;//variable declaration
	clrscr();

	//Array size input
	printf("Enter size of array: ");
	scanf("%d",&size);

	//Array input
	printf("Enter %d elements for array: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	//Key element input
	printf("Enter element you would like to search for: ");
	scanf("%d",&key);

	//Menu
	printf("1)Linear Search");
	printf("\n2)Binary Search");
	printf("\nSearch using [1/2]: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: //LINEAR SEARCH
			for(i=0;i<size;i++)
			{
				if(arr[i]==key)
				{
					flag=1;
					break;
				}
			}
			break;
		case 2: //BINARY SEARCH
			//Sorting elements
			for(i=0;i<size;i++)
			{
				for(j=i+1;j<size;j++)
				{
					if(arr[i]>arr[j])
					{
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
			printf("Sorted array= ");
			for(i=0;i<size;i++)
			{
				printf("%d ",arr[i]);
			}
			first=0;
			last=size-1;
			while(last>=first)
			{
				mid=(first+last)/2;
				if(key==arr[mid])
				{
					flag=1;
					break;
				}
				else if(key<arr[mid])
				{
					last=mid-1;
				}
				else if(key>arr[mid])
				{
					first=mid+1;
				}
			}
			i=mid;
			break;
		default:
			printf("Invalid choice.");
			break;
	}
	if(flag==1)
	{
		printf("\nElement found at position %d.",i+1);
	}
	else
	{
		printf("Element not found.");
	}
	getch();
}



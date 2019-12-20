//MERGE SORT
#include<stdio.h>
#include<conio.h>
#define SIZE 6
//function declaration
void mergeSort(int *a,int beg,int end);
void mergeSortedArray(int *a,int lbeg,int lend,int rbeg,int rend);
void main()
{
	//variable declaration
	int a[SIZE],i;
	clrscr();
	//taking array from user
	printf("Enter 6 elements for array: ");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,SIZE-1);//calling function for merge sort
	//displaying sorted array
	printf("Sorted array= ");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ", a[i]);
	}
	getch();
}

void mergeSort(int *a, int beg, int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		mergeSort(a,beg,mid);//first partition
		mergeSort(a,mid+1,end);//second partition
		mergeSortedArray(a,beg,mid,mid+1,end);//merging both
	}
}

void mergeSortedArray(int *a, int lbeg, int lend, int rbeg, int rend)
{
	int pa=lbeg,pb=rbeg,pt=lbeg,tmp[SIZE];
	while(pa<=lend&&pb<=rend)
	{
		if(a[pa]<a[pb])
		{
			tmp[pt++]=a[pa++];
		}
		else
		{
			tmp[pt++]=a[pb++];
		}
	}
	if(pa>lend)
	{
		while(pb<=rend)
		{
			tmp[pt++]=a[pb++];
		}
	}
	else
	{
		while(pa<=lend)
		{
			tmp[pt++]=a[pa++];
		}
	}
	//write sorted element in array a
	for(pt=lbeg;pt<=rend;pt++)
	{
		a[pt]=tmp[pt];
	}
}

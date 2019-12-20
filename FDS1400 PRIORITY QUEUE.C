//PRIORITY QUEUE
#include<stdio.h>
#include<conio.h>
#define SIZE 5
int PQ[SIZE],f=0,r=-1;
void PQinsert(int elem)
{
    int i;       //Function for Insert operation
    if( Qfull()) printf("\n\n Overflow!\n\n");
    else
    {
	i=r;
	++r;
	while(PQ[i] <= elem && i >= 0) //Find location for new elem
	{
	    PQ[i+1]=PQ[i];
	    i--;
	}
	PQ[i+1]=elem;
    }
}

int PQdelete()
{                      //Function for Delete operation
    int elem;
    if(Qempty()){ printf("\n\nUnderflow!\n\n");
    return(-1); }
    else
    {
	elem=PQ[f];
	f=f+1;
	return(elem);
    }
}

int Qfull()
{                     //Function to Check Queue Full
    if(r==SIZE-1) return 1;
    return 0;
}

int Qempty()
{                    //Function to Check Queue Empty
    if(f > r) return 1;
    return 0;
}

void display()
{                  //Function to display status of Queue
    int i;
    if(Qempty()) printf(" \n Empty Queue\n");
    else
    {
	printf("Front-> ");
	for(i=f;i<=r;i++)
	    printf("%d ",PQ[i]);
	printf("<-rear");
    }
    getch();
}

void main()
{                         //Main Program
    int opn,elem;
    do
    {
	clrscr();
	printf("\nPriority Queue Operations(DSC order)");
	printf("\n1)Insert\n2)Delete\n3)Display\n4)Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&opn);
	switch(opn)
	{
	case 1: printf("Enter element to be inserted:");
	    scanf("%d",&elem);
	    PQinsert(elem); break;
	case 2: elem=PQdelete();
	    if( elem != -1)
		printf("Deleted Element is %d \n",elem);
	    getch();
	    break;
	case 3: printf("Status of Queue\n");
	    display(); break;
	case 4: break;
	default: printf("Invalid choice.");
	    break;
	}
    }while(opn != 4);
    getch();
}

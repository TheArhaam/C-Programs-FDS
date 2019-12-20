//DECIMAL TO BINARY CONVERSION USING STACK
#include<stdio.h>
#include<conio.h>
#define MAX 20
//Creating a structure for stack
struct stack
{
	int data[MAX];
	int top;
}s;
//Initializing stack top to -1
void init()
{
	s.top=-1;
}
//Function to push an element onto the stack
void push(int d)
{
	if(s.top==MAX-1)//checking if stack is full
	{
		printf("Stack is full.");
	}
	else
	{
		//pushing element onto stack
		s.top++;
		s.data[s.top]=d;
	}
}
//Function to remove element from top of the stack
int pop()
{
	int d;
	if(s.top==-1)//checking if stack is empty
	{
		printf("Stack is empty.");
	}
	else
	{
		d=s.data[s.top];
		s.top--;
		return d;
	}
}
void main()
{
	int num,temp;
	clrscr();
	init();
	printf("Enter a decimal number: ");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		push(temp%2);
		temp=temp/2;
	}
	printf("Binary= ");
	while(s.top>-1)
	{
		temp=pop();
		printf("%d",temp);
	}
	getch();
}

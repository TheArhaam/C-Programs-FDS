//PROGRAM TO CHECK IF STRING IS A PALINDROME OR NOT
#include<stdio.h>
#include<conio.h>
#define MAX 20
//Creating a structure for stack
struct stack
{
	char data[MAX];
	int top;
}s;
//Initializing stack top to -1
void init()
{
	s.top=-1;
}
//Function to push an element onto the stack
void push(char d)
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
char pop()
{
	char d;
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
	char str[10],ch;//declaring string
	int i,j,len,flag=1;//declaring integer variables
	clrscr();
	init();//initializing the stack top
	//taking input from user
	printf("Enter a string: ");
	scanf("%s",&str);
	//pushing the characters of the string onto the stack
	for(i=0;str[i]!='\0';i++)
	{
		push(str[i]);
	}
	//checking if string is palindrome or not
	for(j=0;s.top!=-1;j++)
	{
		ch=pop();
		if(str[j]!=ch)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("String is not a palindrome.");
	}
	else
	{
		printf("String is a palindrome.");
	}
	getch();
}
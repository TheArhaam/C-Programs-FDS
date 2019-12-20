//PROGRAM TO CHECK BALANCES PARENTHESES
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 50
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
	//variable declaration
	char expr[MAX],t;
	int i,flag=1;
	clrscr();
	init();
	//taking expression from user
	printf("Enter Expression: ");
	scanf("%s",expr);
	for(i=0;i<strlen(expr);i++)
	{
		if(expr[i]=='('|| expr[i]=='{'|| expr[i]=='[' )
		{
			push(expr[i]);
		}
		if(expr[i]==')'|| expr[i]=='}'|| expr[i]==']' )
		{
			if(s.top==-1)
			{
				flag=0;//false
			}
			else
			{
				t=pop();
				if((expr[i]==')') &&((t=='{')||(t=='[')))
				{
					flag=0;//true
				}
				else if(((expr[i]==']') &&((t=='{')||(t=='('))))
				{
					flag=0;//true
				}
				else if(((expr[i]=='}') &&((t=='(')||(t=='['))))
				{
					flag=0;//true
				}
				else
				{
					flag=1;
				}
			}
		}
	}
	if(s.top>=0)
	{
		flag=0;
	}
	if(flag==1)
	{
		printf("Valid Expression");
	}
	else
	{
		printf("Invalid Expression");
	}
	getch();
}



	


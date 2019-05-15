//POSTFIX EVALUATION
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define MAX 20
//Creating a structure for stack
struct stack
{
	char data[MAX];
	int top;
}s;
void init()//initializing top to -1
{
	s.top=-1;
}
void push(char a)//function to push data onto stack
{
	if(s.top==MAX-1)//checking is stack is full
	{
		printf("Stack is full.");
	}
	else
	{
		s.top++;
		s.data[s.top]=a;
	}
}
char pop()//function to pop data from stack
{
	char ch;
	if(s.top==-1)//checking if stack is empty
	{
		printf("Stack is empty.");
	}
	else
	{
		ch=s.data[s.top];
		s.top--;
		return ch;
	}
}
void main()
{
	char exp[20],arr1[1],arr2[1],ch,op1,op2;
	int i,res,a,b;
	clrscr();
	printf("Enter postfix expression: ");
	scanf("%s",&exp);
	for(i=0;exp[i]!='\0';i++)
	{
		ch=exp[i];
		if(isdigit(ch))
		{
			push(ch);
		}
		else
		{
			arr2[0]=pop();
			arr1[0]=pop();
			b=atoi(arr2);
			a=atoi(arr1);
			printf("\n%d opr %d",a,b);
			switch(ch)
			{
				case '+':
						push(op1+op2);
						break;
				case '-':
						push(op1-op2);
						break;
				case '*':
						push(op1*op2);
						break;
				case '/':
						push(op1/op2);
						break;
			}
		}
	}
	res=pop();
	printf("Result= %d",res);
	getch();
}


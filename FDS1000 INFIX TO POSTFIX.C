//INFIX TO POSTFIX CONVERSION
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
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
int isOprtr(char ch)//function to check if character is an operator
{
	if(ch=='^'||ch=='*'||ch=='/'||ch=='+'||ch=='-')
	{
		return 1;
	}
	else if(ch==')')
	{
		return 2;
	}
	else
	{
		return 0;
	}
}
int precedence(char c)//function to check the precendence of an operator
{
	if(c=='^')
	{
		return 3;
	}
	else if(c=='*'||c=='/')
	{
		return 2;
	}
	else if(c=='+'||c=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void infixtopostfix(char infix[],char postfix[])//function to convert infix expression to postfix expression
{
	int i=0,j=0;
	char item;
	char c;
	strcat(infix,")");
	item=infix[i];
	push('(');
	while(item!='\0')
	{
		if(item=='(')
		{
			push(item);
		}
		else if(isdigit(item)||isOprtr(item)==0)
		{
			postfix[j]=item;
			j++;
		}
		else if(isOprtr(item)==1)
		{
			c=pop();
			while(isOprtr(c)==1&&precedence(c)>=precedence(item))
			{
				postfix[j]=c;
				j++;
				c=pop();
			}
			push(c);
			push(item);
		}
		else if(item==')')
		{
			c=pop();
			while(c!='(')
			{
				postfix[j]=c;
				j++;
				c=pop();
			}
		}
		else
		{
			printf("invalid infix expression");
		}
		i++;
		item=infix[i];
	}
	postfix[j]='\0';
	printf("Postfix expression= %s",postfix);
}
void main()
{
	char in[MAX],post[MAX];
	clrscr();
	printf("Enter infix expression: ");
	scanf("%s",&in);
	infixtopostfix(in,post);
	getch();
}

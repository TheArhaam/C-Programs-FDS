//TYPE OF TRIANGLE
#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3;
	clrscr();
	printf("Enter sides of the triangle: ");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1==s2&&s1==s3){printf("It is an equilateral triangle.");}
	else if(s1!=s2&&s1!=s3){printf("It is a scalene triangle.");}
	else{printf("It is an isosceles triangle.");}
	getch();
}

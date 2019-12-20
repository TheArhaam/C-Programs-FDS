//STRUCTURE MANIPULATION
#include<stdio.h>
#include<conio.h>

//Structure declaration
struct Student
{
	char name[20];
	int ID;
	int age;
	char BG[5];
	char branch[20];
};

void main()
{
	struct Student s[10],*ptr,*ptr2;
	int temp,count=-1,i,ch;
	clrscr();
	do
	{
		//MENU
		printf("1)Create");
		printf("\n2)Modify");
		printf("\n3)Delete");
		printf("\n4)Search");
		printf("\n5)Print");
		printf("\n6)Exit");
		printf("\nEnter your choice [1/2/3/4/5/6]: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: //CREATE STRUCTURE
				count++;
				ptr=&s[count];
				printf("Enter name, ID, Age, Blood Group and Branch of student: ");
				scanf("%s %d %d %s %s",&ptr->name,&ptr->ID,&ptr->age,&ptr->BG,&ptr->branch);
				ptr++;
				break;
			case 2: //MODIFY EXISTING STRUCTURE
				if(count==-1)
				{
					printf("There is no structure to modify.\n");
				}
				else
				{
					printf("Enter the structure number you would like to modify: ");
					scanf("%d",&temp);
					temp--;
					if(temp>count || temp<0)
					{
						printf("%d Structure doesnt exist.\n",temp+1);
					}
					else
					{
						ptr2=&s[temp];
						printf("Enter name, ID, Age, Blood Group and Branch of student: ");
						scanf("%s %d %d %s %s",&ptr2->name,&ptr2->ID,&ptr2->age,&ptr2->BG,&ptr2->branch);
					}
				}
				break;
			case 3: //DELETE STRUCTURE
				if(count==-1)
				{
					printf("There is no structure to delete.\n");
				}
				else
				{
					printf("Enter structure number to delete: ");
					scanf("%d",&temp);
					temp--;
					if(temp>count || temp<0)
					{
						printf("%d Structure doesnt exist.\n",temp+1);
					}
					else
					{
						for(i=temp;i<count;i++)
						{
							s[i]=s[i+1];
						}
						count--;
					}
				}
				break;
			case 4: //SEARCH
				if(count==-1)
				{
					printf("There are no structures to search.\n");
				}
				else
				{
					printf("Enter ID of student you'd like to search for: ");
					scanf("%d",&temp);
					temp--;
					for(i=0;i<count;i++)
					{
						ptr2=&s[i];
						if(ptr2->ID==temp)
						{
							printf("Student record found at %d.\n",i+1);
							break;
						}
					}
					if(i>=count)
					{
						printf("Student record not found.\n");
					}
				}
				break;
			case 5: //PRINT
				if(count==-1)
				{
					printf("There are no structures to print.\n");
				}
				else
				{
					printf("Enter the structure number you want to print: ");
					scanf("%d",&temp);
					temp--;
					if(temp>count || temp<0)
					{
						printf("%d Structure doesnt exist.\n",temp+1);
					}
					else
					{
						ptr2=&s[temp];
						printf("Name= %s",ptr2->name);
						printf("\nID= %d",ptr2->ID);
						printf("\nAge= %d",ptr2->age);
						printf("\nBlood Group= %s",ptr2->BG);
						printf("\nBranch= %s\n",ptr2->branch);
					}
				}
				break;
			case 6:
				goto EXIT;
				break;
			default:
				printf("Invalid input.");
				break;
		}
		printf("====================\n");
	}while(ch!=6);
	getch();
	EXIT:
}

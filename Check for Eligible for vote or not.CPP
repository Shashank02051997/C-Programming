//Check for Eligible for vote or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s1[12];
	int age;
	printf("Enter your age=");
	scanf("%d",&age);
	printf("Enter your Nationality=");
	scanf("%s",s1);
	if(age>18&&(strcmp(s1,"INDIAN")==0||strcmp(s1,"indian")==0))
	printf("Eligible for voting");
	else
	printf("Not eligile for voting");
	getch();
}
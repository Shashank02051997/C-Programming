//Describing Multiplication product
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a,b,c,n,s,p,q;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	n=b%10;
	s=b/10;
	p=a*n;
	q=a*s;
	c=a*b;
	printf("The Multiplication product are as follow\n");
	printf("\t\t %d\n",a);
	printf("\t\tx%d\n",b);
	printf("             ----------\n");
	if(p>=100)
	printf("%dx%d is         %d\n",a,n,p);
	if(p>=10&&p<100)
	printf("%dx%d is          %d\n",a,n,p);
	if(q>=10&&q<100)
	printf("%dx%d is         %dx\n",a,s,q);
	if(q>=100)
	printf("%dx%d is        %dx\n",a,s,q);
	printf("             ----------\n");
	if(c>=100&&c<1000)
	printf("Add them        %d\n",c);
	if(c>=1000)
	printf("Add them       %d\n",c);
	printf("             ----------\n");
	getch();
}
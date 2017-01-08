//In a form a+b,a-b,a*b,a/b
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float a,b;
	char c;
	printf("Enter arthematics operations=");
	scanf("%f%c%f",&a,&c,&b);
	switch(c)
	{ case '+' : printf("\nAddition result is : %0.2f\n",a+b);
		     break;
	  case '-' : printf("\nSubraction result is : %0.2f\n",a-b);
		     break;
	  case '*' : printf("\nMultiplication result is : %0.2f\n",a*b);
		     break;
	  case '/' : printf("\nDivision result is : %0.2f\n",a/b);
		     break;
	  default  : printf("\n Unknown operator");
		     break;
	}
	getch();
}
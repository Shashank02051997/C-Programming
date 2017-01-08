//Of three number which one is largest and smallest using '&&'
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float a,b,c;
	printf("Enter three number:\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b && a>c)
	{ printf("\nLarger=%f",a);
	}
	if(b>a && b>c)
	{ printf("\nLarger=%f",b);
	}
	if(c>a && c>b)
	{ printf("Larger=%f",c);
	}
	if(a<b && a<c)
	{ printf("\nSmaller=%f",a);
	}
	if(b<a && b<c)
	{ printf("\nSmaller=%f",b);
	}
	if(c<a && c<b)
	{ printf("\nSmaller=%f",c);
	}
	getch();

}

/* Area of square,Area of sector of circle,Area of rectangle,
Area of triangle,Perimeter of rectangle,Perimeter of square,
Circumference of circle,Volume of cuboid,Surface area of cuboid,
Volume of cube*/
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int x;
	float a,l,b,h,ar,r,P,V,c,S,TSA,CSA,Q;
	printf(" \npress 1 to calculate area of square  ");
	printf(" \n\npress 2 to calculate area of sector of circle  ");
	printf(" \n\npress 3 to calculate area of rectangle  ");
	printf(" \n\npress 4 to calculate area of triangle  ");
	printf(" \n\npress 5 to calculate perimeter of rectangle  ");
	printf(" \n\npress 6 to calculate perimeter of square  ");
	printf(" \n\npress 7 to calculate circumference of circle  ");
	printf(" \n\npress 8 to calculate volume of cuboid  ");
	printf(" \n\npress 9 to calculate surface area of cuboid  ");
	printf(" \n\npress 10 to calculate volume of cube\n");
	scanf("%d",&x);
	switch(x)
	{ case 1: printf(" \nenter side= ");
		  scanf("%f",&a);
		  ar=a*a;
		  printf(" \narea of square=%f",ar);
		  break;
	  case 2: printf(" \nenter radius= ");
		  scanf("%f",&r);
		  printf(" \nenter angle= ");
		  scanf("%f",&Q);
		  ar=3.14*r*r*Q/360;
		  printf(" \narea of sector of circle=%f",ar);
		  break;
	  case 3: printf(" \nenter length= ");
		  scanf("%f",&l);
		  printf(" \nenter breath= ");
		  scanf("%f",&b);
		  ar=l*b;
		  printf(" \narea of rectangle=%f",ar);
		  break;
	  case 4: printf(" \nenter base= ");
		  scanf("%f",&b);
		  printf(" \nenter height= ");
		  scanf("%f",&h);
		  ar=0.5*b*h;
		  printf(" \narea of triangle=%f",ar);
		  break;
	  case 5: printf(" \nenter length= ");
		  scanf("%f",&l);
		  printf(" \nenter breath= ");
		  scanf("%f",&b);
		  P=2*(l+b);
		  printf(" \nperimeter of rectangle=%f",P);
		  break;
	  case 6: printf(" \nenter side of square= ");
		  scanf("%f",&a);
		  P=4*a;
		  printf(" \nprimeter of square=%f",P);
		  break;
	  case 7: printf(" \nenter radius= ");
		  scanf("%f",&r);
		  c=2*3.14*r;
		  printf(" \ncircumference of circle=%f",c);
		  break;
	  case 8: printf(" \nenter length= ");
		  scanf("%f",&l);
		  printf(" \nenter breath= ");
		  scanf("%f",&b);
		  printf(" \nenter height= ");
		  scanf("%f",&h);
		  V=l*b*h;
		  printf(" \nvolume of cuboid=%f",V);
		  break;
	  case 9: printf(" \nenter length= ");
		  scanf("%f",&l);
		  printf(" \nenter breath= ");
		  scanf("%f",&b);
		  printf(" \nenter height= ");
		  scanf("%f",&h);
		  S=2*(l*b+b*h+h*l);
		  printf(" \nsurface area of cuboid=%f",S);
		  break;
	  case 10: printf(" \nenter side= ");
		   scanf("%f",&a);
		   V=a*a*a;
		   printf(" \nvolume of cube=%f",V);
		   break;
	 default: printf(" \n\nwrong choice ");
	}
	getch();
}


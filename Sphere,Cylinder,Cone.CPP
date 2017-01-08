/*Surface area of a cube,Volume of a cone,TSA of a cone,CSA of a cone  ");
Volume of sphere,Surface area of a sphere,Volume of cylinder,
TSA of cylinder,CSA of cylinder,Area of equilateral triangle*/
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int x;
	float a,l,b,h,ar,r,P,V,c,S,TSA,CSA,Q;
	printf(" \n\npress 11 to calculate surface area of a cube  ");
	printf(" \n\npress 12 to calculate volume of a cone  ");
	printf(" \n\npress 13 to calculate TSA of a cone  ");
	printf(" \n\npress 14 to calculate CSA of a cone  ");
	printf(" \n\npress 15 to calculate volume of sphere  ");
	printf(" \n\npress 16 to calculate surface area of a sphere  ");
	printf(" \n\npress 17 to calculate volume of cylinder  ");
	printf(" \n\npress 18 to calculate TSA of cylinder  ");
	printf(" \n\npress 19 to calculate CSA of cylinder  ");
	printf(" \n\npress 20 to calculate area of equilateral triangle\n  ");
	scanf("%d",&x);
	switch(x)
	{ case 11: printf(" \nenter side= ");
		   scanf("%f",&a);
		   S=6*a*a;
		   printf(" \nsurface area of cuboid=%f",S);
		   break;
	  case 12: printf(" \nenter radius= ");
		   scanf("%f",&r);
		   printf(" \nenter height= ");
		   scanf("%f",&h);
		   V=1/3*r*r*h;
		   printf(" \nvolume of a cone=%f",V);
		   break;
	  case 13: printf(" \nenter radius= ");
		   scanf("%f",&r);
		   printf(" \nenter length= ");
		   scanf("%f",&l);
		   TSA=3.14*r*(r+l);
		   printf(" \nTSA of cone=%f",TSA);
		   break;
	  case 14: printf(" \nenter radius= ");
		   scanf("%f",&r);
		   printf(" \nenter length= ");
		   scanf("%f",&l);
		   CSA=3.14*r*l;
		   printf(" \nCSA of cone=%f",CSA);
		   break;
	  case 15: printf(" \nenter radius= ");
		   scanf("%f",&r);
		   V=4/3*3.14*r*r*r;
		   printf(" \nvolume of sphere=%f",V);
		   break;
	  case 16: printf(" \nenter radius= ");
		   scanf("%f",&r);
		   S=4*3.14*r*r;
		   printf(" \nsurface area of sphere=%f",S);
		   break;
	  case 17: printf(" \nenter radius= ");
		   scanf("%f",&r);
		   printf(" \nenter height= ");
		   scanf("%f",&h);
		   V=3.14*r*r*h;
		   printf(" \nvolume of cylinder=%f",V);
		   break;
	  case 18: printf(" \nenter radius= ");
		   scanf("%f",&r);
		   printf(" \nenter height= ");
		   scanf("%f",&h);
		   TSA=2*3.14*r*(r+h);
		   printf(" \nTSA of cylinder=%f",TSA);
		   break;
	  case 19: printf(" \nenter radius= ");
		   scanf("%f",&r);
		   printf(" \nenter height= ");
		   scanf("%f",&h);
		   CSA=3*3.14*r*h;
		   printf(" \nCSA of cylinder=%f",CSA);
		   break;
	  case 20: printf(" \nenter side= ");
		   scanf("%f",&a);
		   ar=1.73/4*a*a;
		   printf(" \narea of equilateral triangle=%f",ar);
		   break;
	 default: printf(" \n\nwrong choice ");
	}
	getch();
}


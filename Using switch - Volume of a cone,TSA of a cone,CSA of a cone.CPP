/*Using switch - Volume of a cone,TSA of a cone,CSA of a cone*/
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int x;
	float l,h,r,V,TSA,CSA;
	printf(" \n\nPress 1 to calculate volume of a cone  ");
	printf(" \n\nPress 2 to calculate TSA of a cone  ");
	printf(" \n\nPress 3 to calculate CSA of a cone  ");
	scanf("%d",&x);
	switch(x)
	{ case 1: printf(" \nEnter radius= ");
		   scanf("%f",&r);
		   printf(" \nEnter height= ");
		   scanf("%f",&h);
		   V=0.3*r*r*h;
		   printf(" \nVolume of a cone=%f",V);
		   break;
	  case 2: printf(" \nEnter radius= ");
		   scanf("%f",&r);
		   printf(" \nEnter length= ");
		   scanf("%f",&l);
		   TSA=3.14*r*(r+l);
		   printf(" \nTSA of cone=%f",TSA);
		   break;
	  case 3: printf(" \nEnter radius= ");
		   scanf("%f",&r);
		   printf(" \nEnter length= ");
		   scanf("%f",&l);
		   CSA=3.14*r*l;
		   printf(" \nCSA of cone=%f",CSA);
		   break;
	 default: printf(" \n\nWrong choice ");
	}
	getch();
}


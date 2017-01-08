//Enter correct password
#include<stdio.h>
#include<conio.h>
void main()
{      clrscr();
       int n,c=0;
       printf("Enter four digit password=");
       scanf("%d",&n);
       if(n==1212)
       { float r,ar;
	 printf("Area of a circle\n");
	 printf("Enter radius=");
	 scanf("%f",&r);
	 ar=3.14*r*r;
	 printf("Area of circle=%f",ar);
       }
       else
       { printf("\nWrong password");
	 for( ; ; )
	 { printf("\n\nAgain enter a four digit password=");
	   scanf("%d",&n);
	   if(n!=1212)
	   { printf("\nWrong password");
	   }
	   if(n==1212)
	   { float r,ar;
	     printf("Area of a circle\n");
	     printf("Enter radius=");
	     scanf("%f",&r);
	     ar=3.14*r*r;
	     printf("Area of circle=%f",ar);
	     break;
	   }
	   c++;
	   if(c==2)
	   break;
	 }
       }
       getch();
}
//Print an Smily Face using symbol
#include<stdio.h>
#include<conio.h>
void main()
{     clrscr();
      int j,i;
      for(i=0;i<11;i++)
      { for(j=0;j<11;j++)
	{ if(i==0&&j==3||i==0&&j==4||i==0&&j==5||i==0&&j==6||i==0&&j==7||i==1&&j==2||i==1&&j==8||i==2&&j==1||i==2&&j==9||i==3&&j==0||i==3&&j==10||i==4&&j==0||i==4&&j==10||i==5&&j==0||i==5&&j==10||i==6&&j==0||i==6&&j==10||i==7&&j==0||i==7&&j==10||i==8&&j==1||i==8&&j==9||i==9&&j==2||i==9&&j==8||i==10&&j==3||i==10&&j==4||i==10&&j==5||i==10&&j==6||i==10&&j==7)
	  printf("*");
	  else if(i==3&&j==3||i==3&&j==7)
	  printf("@");
	  else if(i==5&&j==5)
	  printf("!");
	  else if(i==7&&j==3||i==8&&j==4||i==8&&j==5||i==8&&j==6||i==7&&j==7)
	  printf("#");
	  else
	  printf(" ");
	}
	printf("\n");
      }
      getch();
}
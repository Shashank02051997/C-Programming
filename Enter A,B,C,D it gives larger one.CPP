//Enter A,B,C,D it gives larger one
#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	char ch;
	int a[7][5],j,i,k,l,h;
	printf("Enter a alphabet : ");
	scanf("%c",&ch);
	if(ch=='A')
	{ for(i=0;i<7;i++)
	  { for(j=0;j<5;j++)
	    { if(i==0&&j==1||i==0&&j==2||i==0&&j==3||i==1&&j==0||i==1&&j==4||i==2&&j==0||i==2&&j==4||i==3&&j==0||i==3&&j==1||i==3&&j==2||i==3&&j==3||i==3&&j==4||i==4&&j==0||i==4&&j==4||i==5&&j==0||i==5&&j==4||i==6&&j==0||i==6&&j==4)
	      printf("*");
	      else
	      printf(" ");
	    }
	    printf("\n");
	  }
	}
	if(ch=='B')
	{ for(i=0;i<7;i++)
	  { for(j=0;j<5;j++)
	    { if(i==0&&j==0||i==0&&j==1||i==0&&j==2||i==0&&j==3||i==1&&j==0||i==1&&j==4||i==2&&j==0||i==2&&j==1||i==2&&j==2||i==2&&j==3||i==3&&j==0||i==3&&j==3||i==4&&j==0||i==4&&j==4||i==5&&j==0||i==5&&j==4||i==6&&j==0||i==6&&j==1||i==6&&j==2||i==6&&j==3)
	      printf("*");
	      else
	     printf(" ");
	    }
	    printf("\n");
	  }
	}
	if(ch=='C')
	{ for(i=0;i<7;i++)
	  { for(j=0;j<5;j++)
	    { if(i==0&&j==1||i==0&&j==2||i==0&&j==3||i==1&&j==0||i==1&&j==4||i==2&&j==0||i==3&&j==0||i==4&&j==0||i==5&&j==0||i==5&&j==4||i==6&&j==1||i==6&&j==2||i==6&&j==3)
	      printf("*");
	      else
	     printf(" ");
	    }
	    printf("\n");
	  }
	}
	if(ch=='D')
	{ for(i=0;i<7;i++)
	  { for(j=0;j<5;j++)
	    { if(i==0&&j==0||i==0&&j==1||i==0&&j==2||i==1&&j==0||i==1&&j==3||i==2&&j==0||i==2&&j==4||i==3&&j==0||i==3&&j==4||i==4&&j==0||i==4&&j==4||i==5&&j==0||i==5&&j==3||i==6&&j==0||i==6&&j==1||i==6&&j==2)
	      printf("*");
	      else
	     printf(" ");
	    }
	    printf("\n");
	  }
	}
	getch();
}
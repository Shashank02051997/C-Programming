//In Matrix give the position of a element
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[3][4],i,j,pos=-1,item,posi=-1;
	for(i=0;i<3;i++)
	{ for(j=0;j<4;j++)
	 { printf("enter an element=");
	   scanf("%d",&a[i][j]);
	 }
	}
	printf("Matrix elements are -\n\n");
	for(i=0;i<3;i++)
	{ for(j=0;j<4;j++)
	 { printf("%d\t",a[i][j]);
	 }
	 printf("\n");
	}
	printf("\nEnter element for search:");
	scanf("%d",&item);
	for(i=0;i<3;i++)
	{ for(j=0;j<4;j++)
	  {if(a[i][j]==item)
	   { pos=i;
	     posi=j;
	     break;
	   }
	  }
	}
	if(pos==-1)
	printf("Element not found\n");
	else
	printf("First occurence of %d found at %d row",item,pos+1);
	if(posi==-1)
	printf("Element not found");
	else
	printf(" and %d column",posi+1);
	getch();

}

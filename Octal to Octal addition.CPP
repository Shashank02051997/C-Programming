//Octal to Octal addition
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	long int a[10],i=0,j=0,c1=0,c2=0,n1,n2,s1=0,s2=0,s3,b[10],r[25],k,f=0;
	printf("Enter the 1st octal number : ");
	scanf("%ld",&n1);
	while(n1!=0)
	{ a[i]=n1%10;
	  n1=n1/10;
	  c1++;
	  i++;
	}
	for(i=0;i<c1;i++)
	{ n1=a[i]*pow(8,i);
	  s1=s1+n1;
	}
	printf("Enter the 2nd octal number : ");
	scanf("%ld",&n2);
	while(n2!=0)
	{ b[j]=n2%10;
	  n2=n2/10;
	  c2++;
	  j++;
	}
	for(j=0;j<c2;j++)
	{ n2=b[j]*pow(8,j);
	  s2=s2+n2;
	}
	s3=s1+s2;
	for(k=1;k<25;k++)
	{ r[k]=s3%8;
	  s3=s3/8;
	  f++;
	  if(s3==0)
	  break;
	}
	printf("The Octal addition :\n");
	for(k=f;k>=1;k--)
	printf("%ld",r[k]);
	getch();
}
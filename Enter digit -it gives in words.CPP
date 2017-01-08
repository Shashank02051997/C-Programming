//Enter digit -it gives in words
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	long int n,s,u,t,p,q,r,v;
	printf("Enter a Amount : ");
	scanf("%ld",&n);
	t=n/1000;
	if(t>10)
	v=t%10;
	u=n;
	n=n%1000;
	p=n/100;
	s=n;
	q=n%100;
	r=n%10;
	printf("Amount in words:");
	if(t==1)
	printf(" ONE ");
	if(t==2)
	printf(" TWO ");
	if(t==3)
	printf(" THREE ");
	if(t==4)
	printf(" FOUR ");
	if(t==5)
	printf(" FIVE ");
	if(t==6)
	printf(" SIX ");
	if(t==7)
	printf(" SEVEN ");
	if(t==8)
	printf(" EIGHT ");
	if(t==9)
	printf(" NINE ");
	if(t==10)
	printf("TEN");
	if(t==11)
	printf("ELEVEN");
	if(t==12)
	printf("TWLEVE");
	if(t==13)
	printf("THIRTEEN");
	if(t==14)
	printf("FOURTEEN");
	if(t==15)
	printf("FIFTEEN");
	if(t==16)
	printf("SIXTEEN");
	if(t==17)
	printf("SEVENTEEN");
	if(t==18)
	printf("EIGHTEEN");
	if(t==19)
	printf("NINETEEN");
	if(t>=20&&t<30)
	printf("TWENTY");
	if(t>=30&&t<40)
	printf("THIRTY");
	if(t>=40&&t<50)
	printf("FOURTY");
	if(t>=50&&t<60)
	printf("FIFTY");
	if(t>=60&&t<70)
	printf("SIXTY");
	if(t>=70&&t<80)
	printf("SEVENTY");
	if(t>=80&&t<90)
	printf("EIGHTY");
	if(t>=90&&t<100)
	printf("NINTY");
	if(v==1)
	printf(" ONE ");
	if(v==2)
	printf(" TWO ");
	if(v==3)
	printf(" THREE ");
	if(v==4)
	printf(" FOUR ");
	if(v==5)
	printf(" FIVE ");
	if(v==6)
	printf(" SIX ");
	if(v==7)
	printf(" SEVEN ");
	if(v==8)
	printf(" EIGHT ");
	if(v==9)
	printf(" NINE ");
	if(u>=1000&&u<100000)
	printf("THOUSAND ");
	if(p==1)
	printf(" ONE ");
	if(p==2)
	printf(" TWO ");
	if(p==3)
	printf(" THREE ");
	if(p==4)
	printf(" FOUR ");
	if(p==5)
	printf(" FIVE ");
	if(p==6)
	printf(" SIX ");
	if(p==7)
	printf(" SEVEN ");
	if(p==8)
	printf(" EIGHT ");
	if(p==9)
	printf(" NINE ");
	if(s>=100&&s<1000)
	printf("HUNDRED ");
	if(q==10)
	printf("TEN");
	if(q==11)
	printf("ELEVEN");
	if(q==12)
	printf("TWLEVE");
	if(q==13)
	printf("THIRTEEN");
	if(q==14)
	printf("FOURTEEN");
	if(q==15)
	printf("FIFTEEN");
	if(q==16)
	printf("SIXTEEN");
	if(q==17)
	printf("SEVENTEEN");
	if(q==18)
	printf("EIGHTEEN");
	if(q==19)
	printf("NINETEEN");
	if(q>=20&&q<30)
	printf("TWENTY");
	if(q>=30&&q<40)
	printf("THIRTY");
	if(q>=40&&q<50)
	printf("FOURTY");
	if(q>=50&&q<60)
	printf("FIFTY");
	if(q>=60&&q<70)
	printf("SIXTY");
	if(q>=70&&q<80)
	printf("SEVENTY");
	if(q>=80&&q<90)
	printf("EIGHTY");
	if(q>=90&&q<100)
	printf("NINTY");
	if(q>=11&&q<=19)
	printf("");
	else
	{ if(r==1)
	  printf(" ONE ");
	  if(r==2)
	  printf(" TWO ");
	  if(r==3)
	  printf(" THREE ");
	  if(r==4)
	  printf(" FOUR ");
	  if(r==5)
	  printf(" FIVE ");
	  if(r==6)
	  printf(" SIX ");
	  if(r==7)
	  printf(" SEVEN ");
	  if(r==8)
	  printf(" EIGHT ");
	  if(r==9)
	  printf(" NINE ");
	}
	  getch();
}
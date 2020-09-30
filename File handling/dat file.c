#include<stdio.h>
struct bank
{
    int bookid;
    char name[25];
    float rate;
};
main()
{
    struct bank b1;
    FILE *fp;
    fp=fopen("f5.dat","wb");
    printf("Enter bookid name and rate:\n");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.name);
    scanf("%f",&b1.rate);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
}

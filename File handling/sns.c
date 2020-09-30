#include<stdio.h>
main()
{
    char ch;
    FILE *fp;
    fp=fopen("juju.txt","r");
    if(fp==NULL)
    {
        printf("File not found.\n");
        exit(0);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);               //Recursion
    }
    fclose(fp);
}

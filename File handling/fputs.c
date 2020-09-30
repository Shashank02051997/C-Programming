#include<stdio.h>
main()
{
    char ch[20];
    FILE *fp;
    fp=fopen("juju1.txt","w");
    if(fp==NULL)
    {
        printf("File not found.\n");
        exit(1);
    }
    printf("Enter string:\n");
    gets(ch);
    fputs(ch,fp);
    fclose(fp);
}

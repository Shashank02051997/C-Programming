/*To read from a file using fgets() */
#include<stdio.h>
main()
{
    char ch[20];
    FILE *fp;
    fp=fopen("juju.txt","r");
    if(fp==NULL)
    {
        printf("File not found.\n");
        exit(1);
    }
    while(fgets(ch,8,fp)!=NULL)
    {
        printf("%s",ch);
    }
    fclose(fp);
}

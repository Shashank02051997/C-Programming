#include<stdio.h>
main()
{
    int i;
    FILE *fp;
    char str[]="Amee Computer class Batch 1 sneh";
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("File cannot be opened.\n");
        exit(1);
    }
    for(i=0;i<strlen(str);i++)
    {
        fputc(str[i],fp);
    }
    fclose(fp);
}

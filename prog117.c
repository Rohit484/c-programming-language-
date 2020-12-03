#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("prog112.c","r");
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);


    }
    fclose(fp);





}

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("prog112.c","r");
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        fputc(strrev(ch),fp);
        ch=fgetc(fp);


    }
    fclose(fp);





}

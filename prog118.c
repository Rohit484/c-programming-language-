#include<stdio.h>
void main()
{
    FILE *fp1,*fp2;
    fp1=fopen("prog112.c","r");
    fp2=fopen("prog125.c","w");
    char ch;
    ch=fgetc(fp1);
    while(ch!=EOF)
    {
        fputc(tolower(ch),fp2);
        ch=fgetc(fp1);

    }
    printf("\n File copied ");
    fclose(fp1);
    fclose(fp2);





}

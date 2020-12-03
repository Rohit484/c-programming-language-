#include<stdio.h>
void main()
{
    FILE *f;
    char str[30];
    f=fopen("d:/Ramesh pandey/filehendling.txt","w");
    printf("\n Enter some text ");
    gets(str);
    for(int i=0; i<strlen(str); i++)
    fputc(str[i],f);
    printf("\n file has copied ");






}

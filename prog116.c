#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("sample.txt","w");
    char str[20];
    printf("\n Enter some text ");
    gets(str);
    for(int i=0; i<strlen(str);i++)
        fputc(str[i],fp);
    fclose(fp);







}

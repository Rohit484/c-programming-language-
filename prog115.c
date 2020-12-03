#include<stdio.h>
void main()
{
    FILE *f;
    f=fopen("hello","r");
    char a;
    a=fgetc(f);
    printf("%c",a);
    fclose(f);





}

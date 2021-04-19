#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    char res;
    strcpy(str,"123456");
    res=atoi(str);
    printf("%s %d\n",str,res);
}

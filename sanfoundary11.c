#include<stdio.h>
int main()
{
    char *str="Hello World!";
    char *str1="Hello World!";
    if(strcmp(str,str1))
        printf("Equal");
    else
        printf("Unequal");
}

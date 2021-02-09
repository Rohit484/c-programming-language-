#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("\nAddress Stored in a variable of p is %d",p);
    printf("\nValue stored in a variable p is %d",*p);
}

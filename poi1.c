#include<stdio.h>
void main()
{
    int a;
    int *p;
    a=10;
    p=&a;
    printf("\n A %d",a);
    printf("\n P %d",p);
    printf("\n P %d",&a);
}

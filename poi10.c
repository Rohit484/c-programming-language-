#include<stdio.h>
void main()
{
    int a=10,*ptr;
    ptr=&a;
    printf("\n A %d",a);
    printf("\n ptr %d",ptr);
    printf("\n ptr %d",*ptr);
}

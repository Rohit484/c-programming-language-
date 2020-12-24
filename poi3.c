#include<stdio.h>
void main()
{
    int a=1, *p1;
    p1=&a;
    printf("\n A %d,p1 %d ,*p1 %d",a,p1,*p1);
    a+=10;
    printf("\n A %d,p1 %d ,*p1 %d",a,p1,*p1);
    *p1=10;
    printf("\n A %d,p1 %d ,*p1 %d",a,p1,*p1);
    p1++;
    printf("\n A %d,p1 %d ,*p1 %d",a,p1,*p1);
}

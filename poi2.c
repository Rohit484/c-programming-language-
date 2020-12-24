#include<stdio.h>
void main()
{
    int a=1,b=2;
    int *aptr,*bptr;
    aptr=&a;
    bptr=&b;
    printf("\n A %d, aptr %d , *aptr %d",a,aptr,*aptr);
}

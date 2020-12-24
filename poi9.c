#include<stdio.h>
void max(int *i, int *j)
{
    if(*i>*j)
        printf("\n 1st Value is greater ");
    else
        printf("\n 2st value is greater ");
}
void main()
{
    int a,b,*aptr,*bptr;
    printf("\n Enter First No ");
    scanf("%d",&a);
    printf("\n Enter second No ");
    scanf("%d",&b);
    aptr=&a;
    bptr=&b;
    //max(aptr,bptr);
    max(&a,&b);
}

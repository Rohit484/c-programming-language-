#include<stdio.h>
void sum(int *x,int *y)
{
    int z=*x+*y;
    printf("\n Sum is %d",z);
}
void main()
{
    int a=10,b=20;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    sum(p1,p2);
}

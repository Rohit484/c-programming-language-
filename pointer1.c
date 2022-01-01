#include<stdio.h>
int main()
{
    int x,*p;
    x=9;
    //*p=&x;
    p=&x;
    printf(" x values is %d",x);
    printf("\n adderes of x is %d", *&p);
}

#include<stdio.h>
void main()
{
    int a=1,b=2,c=3;
    int *p[3];
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    for(int i=0; i<3; i++)
    {
        printf("\n Value at %d is %d",p[i],*p[i]);
    }
}

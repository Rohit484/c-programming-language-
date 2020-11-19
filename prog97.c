#include<stdio.h>
void fun1()
{
    int p;
    float r,t,s;
    printf("\n Enter principal ");
    scanf("%d",&p);
    printf("\n Enter rate ");
    scanf("%d",&r);
    printf("\n Enter time ");
    scanf("%d",&t);
    s=(p*r*t)/100;
    printf("\n Simple interest %f",s);
}
void main()
{
    fun1();
}

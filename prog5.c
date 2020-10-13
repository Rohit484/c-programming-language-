#include<stdio.h>
int main()
{
    int a,t,r;
    float p;
    printf("\n enter a principal balance");
    scanf("%f",&p);
    printf("\n enter a intrest rate");
    scanf("%d",&r);
    a=p*(1+r*t);
    printf("\n your total amount is %d",a);

}

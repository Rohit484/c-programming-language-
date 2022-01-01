#include<stdio.h>
int main()
{
    int a,b,sum,*p1,*p2;
    printf("\n Enter two values: ");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    printf("\n Total sum is %d ",sum);
}

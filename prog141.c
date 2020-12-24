#include<stdio.h>
void main()
{
    int a,b;
    printf("\n Enter two number: ");
    scanf("%d%d",&a,&b);
     printf("\n first time value %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n Enter swap value %d %d",a,b);
}

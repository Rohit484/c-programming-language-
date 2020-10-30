#include<stdio.h>
int main()
{
    int a,b;
    printf("\n please enter a two number");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n your swap  value is %d %d ",a,b);


}

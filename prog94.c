#include<stdio.h>
void fun1()
{
    int a,b,c;
    printf("\n Enter first number ");
    scanf("%d",&a);
    printf("\n Enter second number ");
    scanf("%d",&b);
    c=a+b;
    printf("\n your total sum is %d",c);
}
void fun2()
{
    int a,b,c,i;
    for(i=0;i<2;i++)
    {
         printf("\n Enter first number ");
    scanf("%d",&a);
    printf("\n Enter second number ");
    scanf("%d",&b);
    c=a-b;
    printf("\n your subtraction %d ",c);
    }

}
void main()
{
    fun1();
    printf("\n Hello ");
    printf("\n How are you ");
    fun1();
    fun2();

}

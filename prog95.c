#include<stdio.h>
void fun1()
{
    int no,sq;
    printf("\n Enter number ");
    scanf("%d",&no);
    sq=no*no;
    printf("\n your squere is %d",sq);
}
void fun2()
{
    int cube,no;
    printf("\n Enter your number ");
    scanf("%d",&no);
    cube=no*no*no;
    printf("\n Your cube is %d",cube);
}
void main()
{
 fun1();
 fun2();
}

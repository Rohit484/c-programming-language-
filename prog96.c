#include<stdio.h>
void fun1()
{
    int no,sq;
    sq=no*no;
    printf("\n Your sq is %d",sq);
}
void fun2( )
{
    int no,qu;
    qu=no*no*no;
    printf("\n Your qube is %d",qu);
}
void main()
{
    int no;
    printf("\n Enter your number ");
    scanf("%d",&no);
    fun1();
    fun2(no);
}

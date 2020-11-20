#include<stdio.h>
int addition(int a,int b)
{
    int c=a+b;
    return(c);
}
int subtraction(int a,int b)
{
    int c=a-b;
    return(c);
}
void main()
{
    int a,b,c,d,r1,r2,r3;
    printf("\n Enter 1st no ");
    scanf("%d",&a);
    printf("\n Enter 2st no ");
    scanf("%d",&b);
     printf("\n Enter 3st no ");
    scanf("%d",&c);
     printf("\n Enter 4st no ");
    scanf("%d",&d);
    r1=addition(a,b);
    r2=subtraction(c,d);
    r3=addition(r1,r2);
    printf("\n final output %d",r3);
}

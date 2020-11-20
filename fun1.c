#include<stdio.h>
int sum(int a,int b)
{
    int c=a+b;
    //printf("\n Sum is %d",c);
    return(c);
}
void main()
{
    int x,y,z;
    printf("\n Enter first no ");
    scanf("%d",&x);
    printf("\n Enter second no ");
    scanf("%d",&y);
    z=sum(x,y);
    z*=2;
    printf("\n Sum is %d",z);
}

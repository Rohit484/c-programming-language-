#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("\n Enter three number ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if((n1>n2 && n1>n3))
        printf("\n The first number is greater %d",n1);
    else if((n2>n1 && n2>n3))
        printf("\n The second value is greater %d",n2);
    else
        printf("\n the third value is greater %d",n3);
}

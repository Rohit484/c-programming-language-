#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n Enter three value: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>=b && a>=c )
        printf("\n The value is greater %d", a);
     else if (b>=a && b>=c)
        printf("\n The value is greater %d", b);
    else
        printf("\n The value is greater then another value %d", c);
}

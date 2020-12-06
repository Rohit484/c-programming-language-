#include<stdio.h>
void main()
{
    int a,b,c,max;
    max=0;
    printf("\n Enter three number ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("\n The largest number is %d",a);

    }
    else if(b>a && b>c)
    {
        printf("\n The largest among value is %d",b);
    }
    else if(c>a && c>b)
    {
        printf("\n The largest value is %d",c);
        printf("\n");
    }
}

#include<stdio.h>
int fun()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a>b && a>c && a>d)
    {
        printf("%d",a);
    }
    else if(b>a && b>c && c>>d)
    {
        printf("\n%d",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("\n%d",c);
    }
    else if(d>a && d>b && d>c)
    {
        printf("\n%d",d);
    }
}
int main(int m, int n, int o, int p)



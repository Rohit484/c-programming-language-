#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\n Enter the Number:- ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b || a<c || a<d)
    {
        printf("\n Your A is Big %d",a);
    }
    else if(b>a || b<c || b<d)
    {
        printf("\n Enter B %d ",b);
    }
    else if(c>a || c<b || c<d)
    {
        printf("\n Enter The C %d",c);
    }
    else if(d>a || d>b || d>c)
    {
        printf("\n Enter the D %d",d);
    }
    else
        printf("\n This is not a right number:-");
}

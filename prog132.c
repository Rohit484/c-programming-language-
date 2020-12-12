#include<stdio.h>
void main()
{
    int x,y=0,r;
    printf("\n Enter your Number ");
    scanf("%d",&x);
    while(x>=1)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    printf("\n YOUT rEVERSE VALUE IS %d",y);
}

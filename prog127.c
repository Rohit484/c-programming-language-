#include<stdio.h>
void main()
{
    int a,b,lcm;
    printf("\n Enter two numbers ");
    scanf("%d%d",&a,&b);
    lcm=(a>b)?a:b;
    while(1)
    {
        if(lcm %a==0 && lcm %b==0)
        {
            printf("\nLCM OF %d and %d is %d \n",a,b,lcm);
            break;
        }
        ++lcm;
    }
    return 0;
}

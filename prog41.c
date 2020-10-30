#include<stdio.h>
void main()
{
    for(int i=1; i<=9;i++)
    {
        if(i==5)
            continue;
        printf("\n%d",i);
    }
}

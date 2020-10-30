#include<stdio.h>
void main()
{
    int pass,i;
    for(i=1;i<=5;i++)
    {
        printf("\n enter password");
        scanf("%d",&pass);
        if(pass==999)
        {
            printf("\n correct");
            break;
        }
        printf("\n incorrect");
    }
    if(pass!=999)
        printf("\n last chance");
}


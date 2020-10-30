#include<stdio.h>
void main()
{
    int no;
    printf("\n enter any number");
    scanf("%d",&no);
    for(no; no>=1; no--)
        printf("\n %d",no);
    if(no<0)
    {
        printf("\n the number is negative");
        for(no=10;no>=1; no--)
            printf("\n%d",no);
    }
}

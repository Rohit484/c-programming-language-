#include<stdio.h>
void main()
{
    int data[5],i,*ptr;
    for(i=0;i<5;i++)
    {
        printf("\n Enter value ");
        scanf("%d",&data[i]);

    }
    ptr=&data[0];
    for(i=0;i<5;i++)
    {
        printf("\n Value at %d",ptr,*ptr);
        ptr++;

    }
    for(i=0;i<5;i++)
    {
        ptr=&data[i];
        printf("\n Value at %d is %d",ptr,*ptr);
    }
}

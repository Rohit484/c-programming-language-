#include<stdio.h>
void main()
{
    int data[5],*ptr[5],i;
for(i=0;i<5;i++)
{
    printf("\n Enter a number ");
    scanf("%d",&data[i]);
}
for(i=0;i<5;i++)
{
    ptr[i]=&data[i];
    printf("\n Value at %d is %d",ptr[i],*ptr[i]);
}
}


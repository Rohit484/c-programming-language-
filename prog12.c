#include<stdio.h>
void main()
{
    int no,sum;
    printf("\n enter your number");
    scanf("%d",&no);
    sum=no%2;
    if(no==sum)
        printf("\n you enter a sum number");
    else
        printf("\n you enter a odd number");
}

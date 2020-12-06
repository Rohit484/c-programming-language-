#include<stdio.h>
void main()
{
    int n,count;
    printf("\n Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    printf("\n Number of digits: %d\n",count);
}

#include<stdio.h>
void main()
{
    int arr[10],i;
    printf("\n Enter the numbers: ");
    for(i=0; i<=10; i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=10; i>=0; i--)
    {
        printf("\n The reverse order value is %d",arr[i]);
    }
}

#include<stdio.h>
void main()
{
    int arr[5],i,*p;
    for(i=0;i<5;i++)
    {
        printf("\n Enter a number ");
        scanf("%d",&arr[i]);
    }
    p=&arr[0];
    printf("\n%d",arr);
    printf("\n%d",p);
    printf("\n%d",*p);
    printf("\n%d",*arr);

}

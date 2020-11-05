#include<stdio.h>
void main()
{
    int arr[3][2],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n Enter data in array ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            printf("\n%d ",arr[i][j]);
        printf("\n");
    }
}


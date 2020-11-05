#include<stdio.h>
void main()
{
    int a[3][2],b[2][3],c[2][2],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n Enter values ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("\n Array 1\n");
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            printf(" %d",a[i][j]);
    }
     printf("\n Array 2\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf(" %d",b[i][j]);
            printf("\n");
    }
    for(i=0; i<3; i++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("\n your array sum is %d ",c[i][j]);
    }
}

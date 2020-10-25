#include<stdio.h>
void main()
{
    int i,j,rows;
    printf("\n enter your number of rows");
    scanf("%d",&rows);
    for(i=1; rows>=i; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}

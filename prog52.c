#include<stdio.h>
int main()
{
    int no[5],i,max;
    for(i=0;i<5;i++)
    {
        printf("\n Enter a number ");
        scanf("%d",&no[i]);
    }
    max=no[0];
    for(i=1;i<5;i++)
    {
        if(no[i]>max)
            max=no[i];

    }
    printf("\n Max value is %d",max);
}

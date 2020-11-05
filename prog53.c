#include<stdio.h>
int main()
{
    int a[3],b[3],c[3],i;
    printf("\n Array 1");
    for(i=0;i<3;i++)
    {
        printf("\n Enter data ");
        scanf("%d",&a[i]);
    }
    printf("\n Array 2");
    for(i=0;i<3;i++)
    {
        printf("\n Enter data ");
        scanf("%d",&b[i]);
    }
        printf("\n Array 3");
        for(i=0;i<3;i++)
        {
          c[i]=a[i]+b[i];

              printf("\n Your total array sum is %d +%d =%d",a[i],b[i],c[i]);

        }



}

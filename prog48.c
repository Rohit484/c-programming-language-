#include<stdio.h>
int main()
{
    int arr[5],i,no,flag;
    for(i=0; i<5; i++ )
    {
        printf("\n Enter data in array ");
        scanf("%d",&arr[i]);
    }
    printf("\n Enter value to search ");
    scanf("%d",&no);
    for(i=0; i<5; i++)
    {
        if(arr[i]==0)
        {
            printf("\n Your value is found %d ",i+1);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\n Not found ");
    }
}

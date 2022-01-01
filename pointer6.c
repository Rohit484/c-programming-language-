#include<stdio.h>
int main()
{
    int arr1[25],i,n;
    printf("\n Enter the number for array: ");
    scanf("%d",&n);
    printf("\n TOtal size of array is %d",n);
    for(i=0;i<n;i++)
    {
        printf(" Element %d ", i);
        scanf("%d",arr1+i);
    }
    printf("\n You enter the values in array is: ");
    for(i=0;i<n;i++)
    {
        printf("\n Element %d : %d ",i,*(arr1+i));
    }
}

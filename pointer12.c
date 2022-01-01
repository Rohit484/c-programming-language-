#include<stdio.h>
void main()
{
    int *a,i,j,temp,n;
    printf("\n Enter the Number of elements to store in the array: ");
    scanf("%d",&n);
    printf("\n Input the number of elements to store in the array ");
    //scanf("%d",&n);
    printf("\n Input %d number of elements in the array: \n ",n);
    for(i=0;i<n;i++)
    {
        printf("Element - %d : ",i+1);
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    printf("\n The elements in the array after sorrting: ");
    for(i=0;i<n;i++)
    {
        printf(" Elements - %d : %d \n",i+1,*(a+i));
    }
}

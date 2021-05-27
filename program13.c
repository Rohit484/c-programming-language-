#include<stdio.h>
void main()
{
    int size,i,largest;
    printf("\n Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("\n Enter %d elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);

    }
    largest=array[0];
    for(i=1;i<size;i++)
    {
        if(largest<array[i])
        {
            largest=array[i];
        }
    }
    printf("\n Largest Elements of the in the array is %d ",largest);
}

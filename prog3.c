#include<stdio.h>
void fun()
{
    int arr[10];
    int s,i,t,f;
    printf("\Enter the size of array ");
    scanf("%d",&s);
    printf("\n Enter the number ");
    for(i=0; i<s; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Enter element to search ");
    scanf("%d",&t);
    f=0;
    for(i=0; i<s;i++)
    {
        if(arr[i]==t)
        {
            f=1;
            break;
        }

    }
    if(f==1)
    {
        printf("\n%d The element is found posiion at %d",t,i+1);
    }
    else
    {
        printf("\n The element is not found %d",t);
    }

}
void main()
{
    fun();
}

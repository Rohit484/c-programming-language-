#include<stdio.h>
void main()
{
    int n1,n2,i,n3;
    printf("\n Enter From To till Niuber:- ");
    scanf("%d%d",&n1,&n2);
    for(i=n1+1;i=n2-1;i++)
    {
        if(i%2==1)
        {
            printf("\n The List Of prime number is %d",i);
        }
        else
            printf("\n The List of Non Prime Number %d:- ",i);
    }
}

#include<stdio.h>
void findfact(int,int *);
int main()
{
    int fact;
    int num1;
    printf("\n Find the factorial ");
    scanf("%d",&num1);
    findfact(num1,&fact);
    printf("\n The factorial of %d is : %d ",num1,fact);
    return 0;
}
void findfact(int n,int *f)
{
    int i;
    *f=1;
    for(i=1;i<=n;i++)
        *f=*f*i;
}

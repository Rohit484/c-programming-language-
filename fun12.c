#include<stdio.h>


int main()
{
    int n1,n2;
    printf("\n Enter the first Number:- ");
    scanf("%d",&n1);
    printf("\n Enter the second Number:- ");
    scanf("%d",&n2);
    int sum= n1+n2;
    printf("\n Your addition value is %d",sum);
    int    sub=n1-n2;
    printf("\n Your Subtraction value is %d",sub);
    int mul=n1*n2;
    printf("\n Your multiplication value is %d",mul);
    int div=n1/n2;
    printf("\n Your division value is %d",div);
}

#include<stdio.h>
void main()
{
    int n1,n2;
    char sum;

    printf("\n + add a number");
    printf("\n s subtract the value");
    printf("\n m multiply the value");
    printf("\n d divide the value ");
    printf("\n enter your choice ");
     scanf("\n %c",&sum);
     if(sum=='a' )
     {
        printf("\n enter your number ");
         scanf("%d%d",&n1,&n2);
         sum=n1+n2;
         printf("\n your total sum is%d ",sum);
     }
     else if(sum=='s')
     {
         printf("\n enter your number ");
         scanf("%d%d",&n1,&n2);
         sum=n1-n2;
         printf("\n your subtraction value is %d",sum);
     }
     else if(sum='m')
     {
         printf("\n enter your number ");
         scanf("%d%d",&n1,&n2);
         sum=n1*n2;
         printf("\n your multiplication of number %d",sum);
     }
     else if(sum=='d')
     {
         printf("\n enter your number ");
         scanf("%d%d",&n1,&n2);
         sum=n1/n2;
         printf("\n your divisione value is %d",sum);
     }
     else
        printf("\n you enter a unvalid value");

}

#include<stdio.h>
void main()
{
    int n1,n2;
    char sum;
    printf("\n + OR a  Add two number");
    printf("\n - OR s subtract two number");
    printf("\n * OR m multiply by two number");
    printf("\n / OR d divide by two number");
    printf("\n enter your  choice = ");
    scanf("%c",&sum);
    if(sum=='+' || sum=='a')
    {
        printf("\n enter your number ");
        scanf("%d%d",&n1,&n2);
        sum=n1+n2;
        printf("\n your sum is %d",sum);
    }
    else if(sum=='-' || sum=='s')
    {
        printf("\n enter your number ");
        scanf("%d%d",&n1,&n2);
        sum=n1-n2;
        printf("\n your value is %d ",sum);
    }
    else if(sum=='*' || sum=='m')
    {
        printf("\n enter two number");
        scanf("%d%d",&n1,&n2);
        printf("\n your value is %d",sum);
    }
    else if(sum=='/' || sum=='d')
    {
         printf("\n enter two number");
        scanf("%d%d",&n1,&n2);
        sum=n1/n2;
        printf("\n your value is %d",sum);

    }



    else
        printf("\n worng numberr");
}

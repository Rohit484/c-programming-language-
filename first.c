#include<stdio.h>
int main()
{
    int first,second,tem ;
    printf("\n enter a number ");
    scanf("%d",&first);
    printf("\n enter asecond number ");
    scanf("%d",&second);
    tem =first;
    first=second ;

    second=tem;
    printf("\n your swap number is %d",first);
    printf("\n your swap number is %d",second);
}

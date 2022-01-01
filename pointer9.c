#include<stdio.h>
void swapnumber(int *x, int *y);
int main()
{
    int e1,e2;
    printf("\n Enter the first,second values");
    scanf("%d%d",&e1,&e2);
    printf("\n The values are before swaping are: ");
    printf("%d%d",e1 , e2);
    swapnumber(&e1,&e2);
    printf("\n The value after swaping: ");
    printf("%d%d", e1, e2);
    return 0;
}
void swapnumber(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=y;
    *y=*x;
}

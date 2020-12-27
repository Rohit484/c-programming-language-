#include<stdio.h>
int main()
{
    int no,i;
    printf("\n Enter your numerical value: ");
    scanf("%d",&no);
    while(i=(no-1), i<=no)
    {
        no=no*i;
        i--;

    }
    printf("\n Your factorial value is %d",i);
}
/*
https://www.programiz.com/c-programming/examples PROG18
*/

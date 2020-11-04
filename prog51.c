#include<stdio.h>
int main()
{
    int no,i,max=0;
    for(i=0;i<5;i++)
    {
        printf("\n Enter a number ");
        scanf("%d",&no);
        if(no>max)
            max=no;
    }
    printf("\n Maximum value is %d",max);
}

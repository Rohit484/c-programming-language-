#include<stdio.h>
void main()
{
    int i,marks,sum=0,avg;
    for(i=0; i<5;i++)
    {
        printf("\nenter marks ");
        scanf("%d",&marks);
        sum=sum+marks;


    }
    avg=sum/10;
    printf("\n total marks %d",marks);
    printf("\n total average marks %d",avg);
}

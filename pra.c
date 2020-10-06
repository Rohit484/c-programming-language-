#include<stdio.h>
void main()
{
    int count;
    float sum,average,number;
    scanf("%f",&number);
    sum=sum+number;
    sum=0;
    count=0;
    while (count<number)
    {
        scanf("%f",&number);
        sum=sum+number;
        count=count+1;

    }
    average=sum/number;
    printf("number=%d sum=%f",number,sum);
    printf{"Average =%f",average);
}

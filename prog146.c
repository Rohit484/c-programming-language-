#include<stdio.h>
void main()
{
    int year,ly;
    printf("\n Enter your year name: ");
    scanf("%d",&year);
    if(year % 4==0)
    {
        printf("\n this is a leap year %d",year);

    }
    else
    printf("\n This is not a leap year %d",year);
}

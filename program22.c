#include<stdio.h>


int main()
{
    int Input_Ammount,Intrest_Rate,Period;
    printf("\n Enter the all values: ");
    scanf("%d%d%d",&Input_Ammount,&Intrest_Rate,&Period);
    int year=1;
    while(year<=Period)
        {
            int value=Input_Ammount+Intrest_Rate*Period;
    printf("\n %d Rs %3.d",year,value);
    Input_Ammount=value;
    year=year+1;
        }
}

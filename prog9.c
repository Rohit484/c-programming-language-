/* BS=BASIC SALARY
    DA=DEARNESS ALLOWNACE
    TA=TRAVELLING ALLOWANCE
     GS=GROSS SALARY
      NS=NET SALARY */
#include<stdio.h>
void main()
{
    int BS,DA,GS,TAX,NS;
    float TA;
    printf("\n enter your basic salary");
    scanf("%d",&BS);
    DA=BS%2;
    TA=BS%*1.5;
    GS=BS+DA+TA;
    printf("\n your gross salary is %d",&GS);
    TAX=BS%3;
    printf("\n tax is %d",TAX);
    NS=GS-TAX;
    printf("\n your net salary is %d",&NS);

}

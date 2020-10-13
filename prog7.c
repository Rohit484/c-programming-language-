#include<stdio.h>
void main()
{
    int gr,sa,qu;
    float co,bonus_rate;
    printf("\n enter your basic salary  ");
    scanf("%d",&sa);
    printf("\n enter a bonus_rate co qu ");
    scanf("%d%d bonus_rate co qu ",&bonus_rate,&co,&qu);
    gr=sa+qu+co+bonus_rate;
    printf("\n your total gross salary is %d",gr);
}

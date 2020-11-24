#include<stdio.h>
struct product
{
     int pno,price,dis,net;
};
void main()
{
    struct product p[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("\n Product no ");
        scanf("%d",&p[i].pno);
        printf("\n price ");
        scanf("%d",&p[i].price);
        p[i].dis=p[i].price*5/100;
        p[i].net=p[i].price-p[i].dis;

    }
    for(i=0; i<5; i++)
    {
        printf("\n product no %d",p[i].pno);
        printf("\n Discount %d",p[i].dis);
        printf("\n Net %d",p[i].net);
        printf("\n ________________");
    }

}

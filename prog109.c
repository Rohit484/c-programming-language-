#include<stdio.h>
struct product
{
    int pno,price,dis,net;
};
void main()
{
    struct product p[5];
    int i;
    for(i=0;i<5; i++)
    {
        printf("\n Product no ");
        scanf("%d",&p[i].pno);
        printf("\n Price ");
        scanf("%price%d",&p[i].price);
        p[i].dis=p[i].price*5/100;
        p[i].net=p[i].price-p[i].dis;
}

    for(i=0; i<5; i++)
   {
       printf("\n Product no %d",p[i].pno);
       printf("\n Product price is %d",p[i].price);
       printf("\n Discount is %d",p[i].dis);
       printf("\n Net is %d",p[i].net);
       printf("\n______________-");

   }



}

#include<stdio.h>
void main()
{
   int a[3],b[5],c[8],i,j=0;;
   printf("\n array 1");
   for(i=0;i<3;i++)
   {
      printf("\n enter a value ");
      scanf("%d",&a[i]);

   }
   printf("\n array 2");
   for(i=0;i<5;i++)
   {
      printf("\n enter a second  value ");
      scanf("%d",&b[i]);

   }
   for(i=0;i<8;i++)
   {
       if(i<3)
        c[i]=a[i];
       else
       {
           c[i]=b[j];
           j++;
       }
   }
   printf("\n array 3 ");
   for(i=0;i<8;i++)
   {
       printf("\n %d",c[i]);
   }




}

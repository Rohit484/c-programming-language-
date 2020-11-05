#include<stdio.h>
 void main()
 {
     int arr[3][3],i,j,sum=0;
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("\n Enter a number ");
             scanf("%d",&arr[i][j]);
         }
     }
     printf("\n row  wise sum ");
     for(i=0;i<3;i++)
     {
         sum=0;
         for(j=0;j<3;j++)
         {
             sum=sum+arr[i][j];
         }

         printf("\n sum is  %d",sum);
     }
     printf("\n coloum wise sum ");
     for(i=0;i<3;i++)
     {
         sum=0;
         for(j=0;j<3;j++)
         {
             sum=sum+arr[j][i];
         }

         printf("\n sum is  %d",sum);
     }
 }


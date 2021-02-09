#include<stdio.h>
int main()
{
   int first,second,*p,*q,sum,m;
   scanf("%d%d",&first,&second);
   p=&first;
   q=&second;
   sum=*p+*q;
   m=*p-*q;
   printf("%d \n%d",sum,m);


}


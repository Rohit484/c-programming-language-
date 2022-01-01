#include<stdio.h>
int add(int *, int *);
int main(){
   int fno,lno,sum;
   printf("\n Enter two numbers: ");
   scanf("%d%d",&fno,&lno);
   sum=add(&fno,&lno);
   printf("\n The sum of %d and %d is %d ",fno,lno,sum);
}
int add(int *n1, int *n2)
{
    int sum;
    sum=*n1+*n2;
    return sum;
}

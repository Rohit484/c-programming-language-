#include<stdio.h>
#include<stdlib.h>
int main(){
      int fno,lno,*ptr1,*ptr2;
      ptr1=&fno;
      ptr2=&lno;
      printf("\n Enter two numbers ");
      scanf("\n %d%d",ptr1,ptr2);
      if(*ptr1>*ptr2)
      {
          printf("\n The mazimum value is %d",*ptr1);
      }
      else
        printf("\n The mazimum value is %d",*ptr2);
}

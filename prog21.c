#include<stdio.h>
void main()
{
    int a,b;
    char sum;
    printf("\n a add value");
    printf("\n b. subtraction ");
    printf("\n c. multiplication");
    printf("\n d. divide");
    printf("\n enter your choice ");
    scanf("%c",&sum);
    if(sum=='a')
    {
        printf("\n enter your first number");
        scanf("%d",&a);
        printf("n enter your second number");
        scanf("%d",&b);
        sum=a+b;
        printf("\n your sum is %d",sum);
    }
  else if(sum=='b')
  {
      printf("\n enter your second number");
      scanf("%d ",&a);
      printf("\n enter your second number");
      scanf("%d ",&b);
      sum=a-b;
      printf("\n your total value is %d",sum);

  }
  else if(sum=='c')
  {
      printf("\n enter your first value");
      scanf("%d",&a);
      printf("\n second number");
      scanf("%d",&b);
      sum=a*b;
      printf("\n your value is %d",sum);
  }
  else if(sum=='d')
  {
      printf("\ n enter first value is ");
      scanf("%d",&a);
      printf("\n enter second value is ");
      scanf("%d",&b);
      sum=a/b;
      printf("\n your value is %d",sum);
  }
  else
    printf("\n enter a wrong value ");
}

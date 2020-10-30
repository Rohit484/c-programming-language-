#include<stdio.h>
void main()
{
    int pass ,i;
    for(i=1;i<=5;i++)
    {
        printf("\n Enter password ");
        scanf("%d",&pass);
        if(pass==999)
        {
            printf("\n correct");
            break;
        }
       else if(pass!=999)
          {
              printf("\n your password is incorrect");
          }



    }
    for(i=1; i<=1; i++ )
    {
        if(pass!=999)
          {
              printf("\n you have last chance");
          }
    }




}

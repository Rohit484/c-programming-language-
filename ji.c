#include<stdio.h>
void main()
{
    int no;
    printf("\nList of available Books");
    printf("\nbook no 393");
    printf("\nbook no 178");
    printf("\n book no 671");
    scanf("%d",&no);
    switch(no)// cheak the value of no
    {
         case 393 : printf("\n c programing");
               printf("\tata mcgraw");
               break;
    case 178 : printf("\n internet");
               printf("\n BP publication");
               printf("\nRs .300");
               break;
    case 671 :  printf("\nArtificial intalligance");
               printf("\nRS.500");
               break;
               default: printf("\n No such book");


    }


}

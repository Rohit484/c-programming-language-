#include<stdio.h>
void main()
{
    int ch;
    printf("\n a dosa");
    printf("\n b samosa");
    printf("\n c idli");
    printf("\n d tea");
    printf("\n e coffey ");
    scanf("%c ",&ch);
    if(ch=='a')
    {
     printf("\n this is a masala dosa ");
    printf("\n prize is 300 ");
    printf("\n take a few movment");
    }
    else if(ch=='b')
    {
        printf("\n your choice is samosa");
        printf("\n prize is 400");
    }
    else if(ch=='c')
    {
        printf("\n your choice is idli");
    }

    else if(ch=='d')
    {
        printf("\n your choice is tea");
    }

    else if(ch=='e')
    {
       printf("\n your choice is coffey");
    }

    else
        printf("\n pleze enter a correct choice ");


}

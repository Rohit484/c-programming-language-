#include<stdio.h>
void main()
{
    int ch;
    printf("\n Here enter the value is: ");
    scanf("%d",&ch);
    switch(ch,ch+1)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2");
        break;
    }
}

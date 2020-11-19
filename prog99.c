#include<stdio.h>
void main()
{
    char ch;
    printf("\n Enter your character ");
    scanf("%c",&ch);
    if(ch>=65 &&ch<=90)
        printf("\n upper %c ",ch);
    else if(ch>=97 && ch<=122)
        printf("\n lower %c",ch);
    else if(ch>=48 && ch<=57)
        printf("\n number %d",ch);
    else
        printf("\n symbol %d ",ch);

}

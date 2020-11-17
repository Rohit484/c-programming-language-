#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch,ch2;
    printf("\n Enter a character ");
    scanf("%c",&ch);
    ch2=toupper(ch);
    printf("\n %c",ch);
    printf("\n %c",ch2);
}

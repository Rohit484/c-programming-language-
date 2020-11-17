#include<stdio.h>
void main()
{
    char ch;
    printf("\n Enter a character ");
    scanf("%c",&ch);
    if( (ch>='a' && ch<='z' || ch>='A' && ch>='Z'))
        printf("\n %c is an alphabet \n ",ch);
    else
        printf("\n %c is not alphabet ",ch);
}

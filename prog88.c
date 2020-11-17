#include<stdio.h>
void main()
{
    char ch;
    printf("\n Enter your character ");
    scanf("%c",&ch);
    if((ch=='A' || ch=='E' || ch=='I'|| ch=='O'|| ch=='U' ) || (ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u') )
        printf("\n You enter a vowel ");
    else
        printf("\n you enter a consonant ");
}

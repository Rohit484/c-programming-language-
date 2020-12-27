#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter a character:");
    scanf("%c",&ch);
   if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') )

        printf("\n You Enter a Capital latter %c:",ch);
    else
        printf("You enter a samall character: %c",ch);
}

//if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') )

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char ch,s[30],sen[30];
    scanf("%c",&ch);
    scanf("%s",&s);
   scanf(" %[^\n]s", sen);
    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    return 0;
}

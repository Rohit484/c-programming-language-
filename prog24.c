#include<stdio.h>
#include <string.h>

int main()
{

char ch;
char s[10];
char se[50];
scanf("%c",&ch);
scanf("'%s",s);
scanf("\n");
scanf("%[^\n]%*c", se);
printf("%c\n",ch);
printf("%s\n",s);
printf("%s",se);
return 0 ;

}

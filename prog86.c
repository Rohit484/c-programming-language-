#include<stdio.h>
#include<ctype.h>
void main()
{
    char str[30];
    int i,l;
    printf("\n Enter string  ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(isupper(str[i]))
            str[i]=tolower(str[i]);
        else
            str[i]=toupper(str[i]);
    }
    printf("\n str %s",str);

}

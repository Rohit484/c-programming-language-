#include<stdio.h>
void search(char *s,char c)
{
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(c==*s)
            printf("\n Found at %d",i+1);
        s++;
    }
}
void main()
{
    char str[10],ch;
    printf("\n Enter a string ");
    scanf("%s",&str);
    fflush(stdin);
    printf("\n Enter character to search ");
    scanf("%c",&ch);
    search(&str,ch);
}

#include<stdio.h>
#include<ctype.h>
void main()
{
    char email[15];
    int i,l;
    printf("\n Enter email id ");
    scanf("%s",&email);
    i=strlen(email);
    for(i=0;i<1;i++)
    {
        email[i]=tolower(email[i]);
    }
    printf("\n%s",email);

}

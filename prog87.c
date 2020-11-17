#include<stdio.h>
#include<ctype.h>
void main()
{
    char str[40],c;
    int i,cap=0,small=0,dig=0,sp=0,sym=0;
    printf("\n Enter some text ");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        c=str[i];
        if(isupper(c))
            cap++;
        else if(islower(c))
            small++;
        else if(isdigit(c))
            dig++;
        else if(isspace(c))
            sp++;
        else
            sym++;

    }
    printf("\n Capital %d",cap);
    printf("\n Small %d",small);
    printf("\n digit %d ",dig);
    printf("\n space %d",sp);
    printf("\n symbol %d",sym);
}

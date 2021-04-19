#include<stdio.h>
#include<ctype.h>
void main()
{
    int i=9;
    if(isdigit(i))
        printf("digit\n");
    else
        printf("Not digit");
    return 0;
}

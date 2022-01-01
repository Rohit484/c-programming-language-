#include<stdio.h>
int calculatelength(char*);
int main()
{
    char str1[25];
    int l;
    printf("\n Enter the string ");
    fgets(str1,sizeof str1,stdin);
    l=calculatelength(str1);
    printf("\n The length of the given string %s is %d ", str1,l-1);
}
int calculatelength(char*ch)
{
    int ctr=0;
    while(*ch!='\0')
    {
        ctr++;
        ch++;
    }
    return ctr;
}

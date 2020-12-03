#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("Hello","r");
    printf("\n Enter a character ");
    scanf("%c",&ch);
    fputc(ch,fp);
    printf("\n file seved ");
    fclose(fp);





}

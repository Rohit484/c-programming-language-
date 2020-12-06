#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    int cont=0;
    fp=fopen("prog118.c","r");
    c=fgetc(fp);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(fp);
        cont++;
        getch();
    }
    printf("\n %d total count is ",cont);
    fclose(fp);




}

#include<stdio.h>
void main()
{
    FILE *fp;
    char str[5];
    int cont=0;
    fp=fopen("prog118.c","r");
    while(fgets(str,5,fp)!=NULL)
    {
        printf("%s",str);
        cont++;
    }
    printf("\n Loop excuted %d times ",cont);





}

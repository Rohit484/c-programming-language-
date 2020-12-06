#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("file2.txt","w");
    char name[25];
    printf("\n Enter your name ");
    scanf("%s",&name);
    fputs(name,fp);
    fclose(fp);





}

#include<stdio.h>
void main()
{
    FILE *fp1, *fp2;
    char src[30],trg[30],str[30];
    printf("\n Enter source file name ");
    scanf("%s",&src);
    printf("\n Enter target file name ");
    scanf("%s",&trg);
    fp1=fopen(src,"r");
    fp2=fopen(trg,"w");
    while(fgets(str,30,fp1)!=NULL)
        fputs(str,fp2);
    fclose(fp1);
    fclose(fp2);




}

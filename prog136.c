#include<stdio.h>
void main()
{
    FILE *fP1, *FP2;
    char src[20],trg[20];
    printf("\n Enter source file name ");
    scanf("%s",&src);
    printf("\n Enter location file name ");
    scanf("%s",&trg);
    fp1=fopen(src,"r");
    if(fp1==NULL)
    {
        printf("\n Source File not found ");
    }
    else
    {
        fp2=fopen(trg,"w");
    char ch;
    ch=fgetc(fp1);
    while(ch!=EOF)
    {
        fputc(ch,fp2);
        ch=fgetc(fp1);
    }
    printf("\n File copied ");
    fclose(fp1);
    fclose(fp2);

}

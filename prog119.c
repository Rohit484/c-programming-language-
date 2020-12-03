#include<stdio.h>
void main()
{
    FILE *fp1,*fp2;
    char src[20],trg[20];
    printf("\n Enter source file name ");
    scanf("%c",&src);
    printf("\n Enter location file name ");
    scanf("%c",&trg);
    fp1=fopen(src,"r");
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

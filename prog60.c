#include<stdio.h>
void main()
{
    int mm,mo[4],i;
    printf("\n Enter maximum marks ");
    scanf("%d",&mm);
    for(i=0;i<5; i++)
    {
        printf("\n Enter the marks obtained ");
        scanf("%d",&mo[i]);
        if(mo[i]<=100)
            break;
    }
}

#include<stdio.h>
struct student
{
    int tcd;
    char name[12], quali[12];

};
void main()
{
    int i;
    struct student t[3];
    for(i=0; i<3;i++)
    {
        printf("\n Code ");
        scanf("%d",&t[i].tcd);
        printf("\n name ");
        scanf("%s",&t[i].name);
        printf("\n Qualification ");
        scanf("%s",&t[i].quali);
    }
        for(i=0; i<3; i++)
        {
            printf("\n code is %d",t[i].tcd);
            printf("\n name is %s",t[i].name);
            printf("\n Qualification is %s",t[i].quali);
        }



}

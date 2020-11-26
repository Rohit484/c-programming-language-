#include<stdio.h>
struct teacher
{
    int tcd;
    char name[20],quali[12];


};
void main()
{
    int i;
   struct teacher t[3];
   for(i=0; i<3; i++)
   {
       printf("\n Name ");
       scanf("%s",&t[i].name);
       printf("\n Code ");
       scanf("%d",&t[i].tcd);
       printf("\n Qualifiation ");
       scanf("%s",&t[i].quali);
}
for(i=0; i<3; i++)
{
    printf("\nName %s",t[i].name);
    printf("\nCode %d",t[i].tcd);
    printf("\nQualification %s",t[i].quali);



}

}


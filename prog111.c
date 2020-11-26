#include<stdio.h>
struct course
{
    int ltc;
    char stc[15];

} ;
struct student
{
  int rollno;
  char name;
  struct course cinfo;

};
void main()
{
    struct student s1;
    int ch;
    printf("\n Roll no");
    scanf("%d",&s1.rollno);
    printf("\n Name ");
    scanf("%s",&s1.name);
    printf("\n Course Details ");
    printf("\n type for 1  LTC,2 STC ");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n Enter first year or second year ");
        scanf("%d",&s1.cinfo.ltc);

    }
    else
        strcpy(s1.cinfo.stc,"Certificate ");
    printf("\n Roll no %d",s1.rollno);
    printf("\n Name %s",s1.name);
    printf("\n Course Details ");
    if(ch==1)
    {
        printf("\n Long term course %d years ",s1.cinfo.ltc);

    }
    else
        printf("\n Sort term course %d years",s1.cinfo.stc);




}

#include<stdio.h>
struct student
{
    int rollno;
    char name[12];
};
void main()
{
    struct student s1,s2,s3;
    printf("\n Roll no");
    scanf("%d",&s1.rollno);
    printf("\n Name ");
    scanf("%s",&s1.name);


    printf("\n Roll no");
    scanf("%d",&s2.rollno);
    printf("\n Name ");
    scanf("%s",&s2.name);


    printf("\n Roll no");
    scanf("%d",&s3.rollno);
    printf("\n Name ");
    scanf("%s",&s3.name);


    printf("\n Roll no %d",s1.rollno);
    printf("\n Name %s",s1.name);
    printf("\n Roll no %d",s2.rollno);
    printf("\n Name %s",s2.name);
    printf("\n Roll no %d",s3.rollno);
    printf("\n Name %s",s3.name);



}

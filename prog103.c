#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
};
void main()
{
    struct student s1;
    printf("\n Roll no");
    scanf("%d",&s1.rollno);
    printf("\n Name ");
    scanf("%s",&s1.name);
    printf("\n Roll no %d ",s1.rollno);
    printf("\n Name is %s",s1.name);


}



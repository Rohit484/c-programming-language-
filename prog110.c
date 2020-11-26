#include<stdio.h>
struct person
{
    char name[12],add[20];
};
struct student
{
     int rollno;
     struct person sdata;

};
struct teacher
{
   struct person tdetails;
   int salary;

};
void main()
{
    struct student s;
    struct teacher t;

    printf("\n Roll no = ");
    scanf("%d",&s.rollno);
    printf("\n Name =");
    scanf("%d",&s.sdata.name);
    printf("\n Address =");
    scanf("%s",&s.sdata.add);

    printf("\n Name ");
    scanf("%s",t.tdetails.name);
    printf("\n Address ");
    scanf("%s",&t.tdetails.add);
    printf("\n Salary ");
    scanf("%d",&t.salary);

    printf("\n Name %s",t.tdetails.name);
    printf("\n Address %s",t.tdetails.add);
    printf("\n Salary %d",t.salary);



    printf("\n Roll no %d",s.rollno);
    printf("\n Name %s",s.sdata.name);
    printf("\n Address %s",s.sdata.add);



}

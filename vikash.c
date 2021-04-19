#include<stdio.h>
struct person
{
    char name[10],add[10];

};
struct student
{
    int rollno;
    struct person sdata;
};
void show(struct student s)
{
    printf("\n rollno is %d",s.rollno);
    printf("\n name is %s",s.sdata.name );
    printf("\n add is %s",s.sdata.add);
}
void main()
{
    struct student s1;
    printf("\n enter student name: ");
    scanf("%s",s1.sdata.name);
    printf("\nenter rollno: ");
    scanf("%d",s1.rollno);
    printf("\n enter add: ");
    scanf("%s",s1.sdata.add);
    show(s1);
}


#include<stdio.h>
char grade(int sal)
{
    if(sal>=1000 && sal<5000)
        return 'C';
    else if(sal>=5000 && sal<10000)
        return 'B';
    else
        return 'A';
}
void showjob(char gr)
{
    if(gr=='A')
        printf("\n Manager");
    else if(gr=='B')
        printf("\n Executive");
    else
        printf("\n Clerk");
}

void main()
{
    int salary;
    char gr;
    printf("\n Enter basic salary ");
    scanf("%d",&salary);
    gr=grade(salary);
    printf("\n Grade is %c",gr);
    printf("\n Enter your salary ");
    scanf("%d",&salary);
    gr=grade(salary);
    printf("\n grade %c",gr);
    showjob(gr);

}

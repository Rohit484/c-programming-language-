#include<stdio.h>
void main()
{
    int a,b,c,discriminant,root1,root2,realpart,imagepart;
    printf("\n Enter certifications a b and c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminant =b*b-4*a*c;
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("\n Root1 = %.2lf and root2=%.2lf",root1,root2);
    }
    else if(discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("\n root1= root2=%.2lf;",root1);
    }
    else
    {
        realpart=-b/(2*a);
        imagepart=sqrt(-discriminant)/(2*a);
        printf("\n root1=%2.lf +%.2lf and root2=%.2f-%.2fi",realpart,imagepart,realpart,imagepart);
    }

}

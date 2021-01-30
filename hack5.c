#include<stdio.h>
int main()
{
    int n1,n2,s,d;
    float f1,f2,s1,d1;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%f",&f1);
    scanf("%f",&f2);
    s=n1+n2;
    d=n1-n2;
    s1=f1+f2;
    d1=f1-f2;
    printf("%d",s);
    printf(" %d ",d);
    printf("\n%.1f",s1);
    printf(" %.1f ",d1);


}

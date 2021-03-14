#include<stdio.h>
int main()
{
    char *s[]={"Knowledge","is","power"};
    char **p;
    p=s;
    printf("%s",++*p);
    printf("%s",*p++);
    printf("%s",++*p);
    getchar();
    return 0;
}

#include<stdio.h>
void main()
{
    int a[5] = {22, 33, 44, 55, 66};
int *ptr = a;
int res = *(ptr + 2);
printf("%d", res);
}

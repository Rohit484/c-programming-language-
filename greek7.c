#include <stdio.h>

int a = 1;
int b = 2;
int* func1() { return &a; }
int* func2() { return &b; }

int* (*funcp1())() { return func1; }
int* (*funcp2())() { return func2; }
int* (*(*arr[5])())() = { funcp1, funcp2 };

int main()
{
    printf("%d\n", *(*(*arr[0])())());
    printf("%d\n", *(*(*arr[1])())());
    return 0;
}

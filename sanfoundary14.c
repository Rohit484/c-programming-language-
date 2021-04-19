#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t ct;
    time(&ct);
    printf("%s\n",(&ct));
}

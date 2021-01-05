#include<stdio.h>
void main()
{
    int no=1;
    int mod=0;
    while(no<=100)
    {
        mod=no%3;
        if(mod==0)
        {
            printf("\n %d is divisble by 3\n",no);
        }
        mod=no%5;
        if(mod==0)
        {
            printf("\n %d is divisible by 5",no);

        }
        ++no;

    }
}

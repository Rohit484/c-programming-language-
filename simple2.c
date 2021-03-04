#include<stdio.h>
void main(void)
{
    static int i=5;
    if(--i)
    {
        printf("%d ",i);
        main();
    }
}

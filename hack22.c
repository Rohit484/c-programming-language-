#include<stdio.h>
void main()
{
    int no,n1,i,sum=0;
    scanf("%d",&no);
    for(i=1; i<=no;i++)
    {

        scanf("%d",&n1);
        sum+=n1;
    }
    printf("%d :- ",sum);
}

#include<stido.h>
int addtwonumber(int *, int *);
int main()
{
    int fno,sno,sum;
    printf("\n Enter two values: ");
    scanf("%d%d",&fno,&sno);
    sum=addtwonumber(&fno,&sno);
}

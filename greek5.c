#include<stdio.h>
char fun1() {return 'a';}
char fun2(){return 'b';}
char fun3(){return 'c';}
char (*xarr[])()={fun1,fun2,fun3};
char (*(*x())[])(){return &xarr;}
int main()
{
    printf("%c\n ",((*(x()))[0])());
    printf("%c\n ",((*(x()))[1])());
    printf("\%c\n ",((*(x()))[2])());

}

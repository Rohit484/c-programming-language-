#include<stdio.h>
void (*f[10])(int,char);
void fun1(int a,int b)
{
    printf("Func1 =%d, %d\n",a,b);

}
void fun2(int p,int q)
{
    printf("Func2= %d, %d\n",p,q);
}
void fun3(int x,int y)
{
    printf("Fun3 =%d, %d\n",x,y);
}
int main()
{
    f[0]=fun1;
    f[1]=fun2;
    f[2]=fun3;
    (*f[0])(1,2);
    (*f[1])(3,4);
    (*f[2])(5,6);
}

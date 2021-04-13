#include<stdio.h>
typedef char charray5[5];
charray5 carr1={'a','b','c','d','\o'};
charray5 carr2={'q','w','r','r','\o'};
charray5 carr3={'f','t','p','o','\o'};
charray5* fun1(){return &carr1;}
charray5* fun2(){return &carr2;}
charray5* fun3(){return &carr3;}
char (*(*x[3])())[5]={fun1,fun2,fun3 };
int main()
{
   printf("func1 = [%c, %c, %c, %c]\n",
           ((*(x[0]))())[0][0], ((*(x[0]))())[0][1],
           ((*(x[0]))())[0][2], ((*(x[0]))())[0][3]);
    printf("func2 = [%c, %c, %c, %c]\n",
           ((*(x[1]))())[0][0], ((*(x[1]))())[0][1],
           ((*(x[1]))())[0][2], ((*(x[1]))())[0][3]);
    printf("func3 = [%c, %c, %c, %c]\n",
           ((*(x[2]))())[0][0], ((*(x[2]))())[0][1],
           ((*(x[2]))())[0][2], ((*(x[2]))())[0][3]);
}

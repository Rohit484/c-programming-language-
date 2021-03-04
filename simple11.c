#include<stdio.h>
void function()
{
   static int x=20;//local variable
    int y=30;
    x=x+10;
    y=y+10;
    printf("\n%d %d",y,x);
}
int main()
{
    function();
    function();
    function();

}

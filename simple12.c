#include<stdio.h>
int global=5;
 // Global variable
void display()
{

    printf("%d\n", global);
}
int main()
{
    printf("\nBefore change within main: ");
     printf("\nAfter change within main: ");

    global=10;
    display();
}

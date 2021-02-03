#include <stdio.h>


int main()
{
     int var1, var2;
     printf("Enter number 1: ");
     scanf("%d",&var1);
     printf("Enter number 2: ");
     scanf("%d",&var2);

     /* Calling the function here, the function return type
      * is integer so we need an integer variable to hold the
      * returned value of this function.
      */
     int res =var1+ var2;
     printf ("Output: %d", res);

     return 0;
}

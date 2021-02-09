#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int a=0,b=0,n=0;
    char* arr[10]={"Zero","One","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&a);
    scanf("%d",&b);
    for(n=a;n<=b;n++)
    {
        if(n==1)
        {
            printf("One\n");
        }
        else if(n==2)
        {
            printf("Two\n");
        }
        else if(n==3)
        {
            printf("Three\n");
        }
        else if(n==4)
        {
            printf("Four\n");
        }
        else if(n==5)
        {
            printf("Five\n");
        }
        else if(n==6)
        {
            printf("Six\n");
        }
        else if(n==7)
        {
            printf("Seven\n");
        }
        else if(n==8)
        {
            printf("Eight\n");
        }
        else if(n==9)
        {
            printf("Nine\n");
        }
        else
        {
            if(n%2==0)
            {
                printf("even\n");
            }
            else
                printf("odd\n");
        }
    }
}

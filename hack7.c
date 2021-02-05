/*C program to find greatest of three numbers using function*/
#include <stdio.h>

/*function to get largest among three numbers*/

int largestNumber(int a,int b, int c,int d)
{
	int largest=0;
	if(a>b && a>c && a>d)
    {
       printf("\n%d",a);
    }

	else if(b>a && b>c && b>d)
    {
        printf("\n %d",b);
    }

	else if(c>a && c>b && c>d)
    {
        printf("\n %d",c);
    }

		else if(d>a && d>b && d>c )
        {
            printf("\n%d",d);
        }


}

int main()
{
	int a,b,c,d;


	scanf("%d%d%d%d",&a,&b,&c,&d);
	largestNumber(a,b,c,d);
	printf("\n This is your largest vlaue is %d",largestNumber(a,b,c,d));

	return 0;
}

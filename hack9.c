#include <stdio.h>

/*function to get largest among three numbers*/

int largestNumber(int a,int b, int c, int d)
{
	int largest=0;
	if(a>b && a>c && a>d)
		largest=a;
	else if(b>a && b>c && b>d)
		largest=b;
	else if(c>a && c>b && c>d)
		largest=c;
		else if(d>a && d>b && d>c)
            largest=d;
	return largest;
}

int main()
{
	int a,b,c,d;


	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d\n",largestNumber(a,b,c,d));

	return 0;
}

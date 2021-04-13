#include<stdio.h>
int (*daytab)[10];
int arr[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
int main()
{
    daytab=&arr;
    printf("arr[12] =%d\n",(*daytab)[2]);
}

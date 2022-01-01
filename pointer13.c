#include<stdio.h>
    int *findLarger(int*,int*);
    void main()
    {
        int numa=0;
        int numb=0;
        int *result=0;
        printf("\n Input the first and second number: ");
        scanf("%d%d",&numa,&numb);
        result=findLarger(&numa,&numb);
        printf("\n The number %d is larger. ",*result);
    }
     int *findLarger(int *n1, int *n2)
    {
        if(*n1>*n2)
            return n1;
        else
            n2;
    }



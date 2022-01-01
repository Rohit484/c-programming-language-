#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    float *element;
    printf("\n Enter the elements: ");
    scanf("%d",&n);
    element=(float*)calloc(n,sizeof(float));
    if(element==NULL)
    {
        printf("\n No Memory is allocated");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;++i)
    {
        printf("\n Number %d: ",i+1);
        scanf("%f",element+i);
    }
    for(i=1;i<n;++i)
    {
        if(*element<*(element+i))
            *element=*(element+i);
    }
    printf(" The largest value is %.2f",*element);
    return 0;
}

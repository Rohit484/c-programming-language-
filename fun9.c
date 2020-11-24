#include <stdio.h>
int fun()
{
    int arr[10];
    int s,i,t,f;
    printf("Enter size of array: ");
    scanf("%d", &s);
    printf("Enter elements in array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &t);
    f = 0;

    for(i=0; i<s; i++)
    {

        if(arr[i] == t)
        {
            f = 1;
            break;
        }
    }
    if(f == 1)
    {
        printf("\n%d is found at position %d", t, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", t);
    }

    return 0;
}
void main()
{
    fun();
}

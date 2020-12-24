#include<stdio.h>
void main()
{
    char a;
    printf("\n Enter Character: ");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'|| a=='A' || a=='E' || a=='I' || a=='O' || a=='U' )
        printf("\n This character is vowel %c",a);
    else
        printf("\n THis character is consonent %c",a);

}

#include<stdlib.h>
_Mbsave_Mbxlen={0};
int (mblen)(const char *s,size_t n)
{
    return (_Mbtowc(NULL s ,n,&_mbxlen));
}

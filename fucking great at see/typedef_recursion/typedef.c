#include<stdio.h>
int main()
{
    typedef char WORD;
    typedef int SHORT;
    typedef long LONG;
    typedef float FLOAT;
    typedef double DFLOAT;
    printf("the size of char is %d\n", sizeof(WORD));
    printf("the size of int is %d\n", sizeof(SHORT));
    printf("the size of long is %d\n", sizeof(LONG));
    printf("the size of float is %d\n", sizeof(FLOAT));
    printf("the size of double is %d\n", sizeof(DFLOAT));
    return 0 ;
}
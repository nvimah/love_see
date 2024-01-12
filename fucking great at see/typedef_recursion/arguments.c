#include<stdio.h>
int main (int argc ,char *argv[] )
{
    printf("key in a command line argument\n");
    printf("the number of command line arguments is %d\n", argc);
    if((argc - 1) < 2)
    {
        printf("the usage format %s\n", argv[0]);
        printf("enter the command line argument\n");
    }

    return 0;
}
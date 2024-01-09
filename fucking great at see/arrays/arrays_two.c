#include <stdio.h>
int main()
{
    char alpha_array[] = {'a', 'b', 'c', 'd', 'e'};
    int i;
    for (i = 0; alpha_array[i]; i++)
    printf("alpha_array[%d] is initialised with %c.\n", i, alpha_array[i]);
    return 0;
    
}
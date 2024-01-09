#include <stdio.h>
int main()
{
    char coding[] = {'I', ' ',
                       'l', 'o', 'v','e', ' ',
                       'c'
                       };
    int i;
    for (i = 0; coding[i]; i++)
    printf("%c", coding[i]);
    return 0;
}
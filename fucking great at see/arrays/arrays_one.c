#include <stdio.h>
int main()
{
    char array_ch [5] = {'A', 'B', 'C', 'D', 'E'};
    int i;
    for (i = 0; array_ch[i]; i++)
        printf("%c", array_ch[i]);
    return (0);
}
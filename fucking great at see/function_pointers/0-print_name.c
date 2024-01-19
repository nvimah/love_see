#include <stdio.h>
void print_name (char *name, void (*f)(char *))
{
    if (f != NULL)
    {
        f(name);
    }
}

```c
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * my_print_numbers - prints numbers with a specified separator and a new line at the end
 * @separator: string to separate numbers
 * @n: number of elements
 * Return: void
 */
void my_print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int index;

    va_start(args, n);

    for (index = 0; index < n; index++)
    {
        printf("%d", va_arg(args, int));

        if (separator != NULL && index != (n - 1))
        {
            printf("%s", separator);
        }
    }

    putchar('\n');
    va_end(args);
}

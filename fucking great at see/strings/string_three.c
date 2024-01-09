#include <stdio.h>
#include <strings.h>
int main()
{
    char str[80];
    int i, delt = 'a' - 'A';

    printf("Enter a string that has less than 80 characters:\n");
    gets(str);
    i = 0;
    while (str[i])
    {
        if ((str[i] >= 'A')  && (str[i] <= 'Z'))
            str[i] += delt;
            ++i;
    }
    printf("The entered string is (in upercase):\n");
    puts(str );
    return 0;
}
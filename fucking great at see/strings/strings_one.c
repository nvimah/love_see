#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "This is Exercise 1.";
    char str2[17];
    strcpy(str2, str1);
    printf("%s", str2);
    return 0;
}
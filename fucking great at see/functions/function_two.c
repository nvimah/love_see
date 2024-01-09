#include <stdio.h>
int func();
int main ()
{
   int count = func(435);
    printf("%d\n", count);
    return 0;
}
int func(int num)
{
    int count = 2;
    while (num)
    {
        count++;
        num >>=4;
    }
    return (count);
    }
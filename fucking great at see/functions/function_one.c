#include <stdio.h>
int MultiTwo(int, int);
int main()
{   int product;
    int product_two;
    product = MultiTwo(4, 4);
    product_two = MultiTwo(10,10);
    printf("%d\n", product);
    printf("%d\n", product_two);
    return 0;
}
int MultiTwo(int a, int b)
{
    int multiplication;
    multiplication = a * b;
    return multiplication;
}

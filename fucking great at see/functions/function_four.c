#include <stdio.h>
int Add(int, int);
int main()
{
    int addition;
    addition = Add(98932, 789728798);
    printf("The total sum of the numbers is %d \n", addition);
}
int Add( int a, int b)
{
    int Sum;
    Sum =  a + b;
    return Sum;
}
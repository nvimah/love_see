#include<stdio.h>
int Area(int , int);
int main()
{
    int length;
    int width;
    int area_one;
    printf("Enter the length:  \n");
    scanf("%d", &length);
    printf("Enter the width: \n");
    scanf("%d", &width);
    area_one = Area(length, width);
    printf("The area of the rectangle is %d\n", area_one);
    return 0;
}
int Area(int length, int width)
{
    int Area_Rectangle;
    Area_Rectangle = length * width;
    return Area_Rectangle;
}
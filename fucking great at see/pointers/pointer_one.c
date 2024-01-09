#include <stdio.h>
//a function that prints an array of characters
char print_string_array(char arry[], int size);

int main()
{
    //declare and intialize the string
    char love_c[10] = "I like C!";

    //call the function and print the string
    printf("%c",print_string_array(love_c, 10));
    return 0;
}
//function that accepts an array, iterates through it and prints every character
char print_string_array(char arry[], int size)
{
    int i ;
    size = 10;
    for (i = 0; i < size; i++)
    {
        printf("%c", arry[i]);
    }
}

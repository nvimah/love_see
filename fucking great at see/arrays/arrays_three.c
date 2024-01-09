#include <stdio.h>
int main()
{
    int i;
    char list_ch [6][2] = {
        '1', 'a',
        '2', 'b',
        '3', 'c',
        '4', 'd',
        '5', 'e',
        '6', 'f' };
size_t total_bytes = sizeof(list_ch);

    printf("Total bytes taken by the array: %zu\n", total_bytes);

    // Print out all elements of the array
    printf("Elements of the array:\n");
    for (int i = 0; i < sizeof(list_ch) / sizeof(list_ch[0]); i++) {
        printf("%c %c\n", list_ch[i][0], list_ch[i][1]);
    }

 return 0;
}
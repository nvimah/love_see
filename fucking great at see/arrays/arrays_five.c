#include <stdio.h>
int main()
{
    double list_data[5] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345
    };
    size_t size = sizeof(list_data)/ sizeof(list_data[0]);
    printf("the size of the fi array is %d\n", size);
    double *pnt_data;
    pnt_data = &list_data;
    printf("the size of the second array is %d\n", (sizeof(*pnt_data)));
    printf("the size of the third array is %d\n", (sizeof(*pnt_data*5)));
    printf("the size of the fourth array is %d\n", (sizeof(list_data)));
    return 0;
}
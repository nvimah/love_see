#include <stdio.h>
#include <stdlib.h>
/**
 * race_comments - function that prints statements
 * prints them before the main 
 * function is executed
 * 
*/
__attribute__((constructor));
void race_comments(void)
{
    printf("You're beat ! and yet, you must\n");
    printf("I bore my house upon my back\n");
}

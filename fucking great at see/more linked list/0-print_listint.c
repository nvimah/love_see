#include "list.h"
/**
 * print_listint - the function that prints the list contents
 * listint_h - the list being printed
 * return - returns the number of items
*/
size_t print_listint(const listint_t *h)
{
    const listint_t *temp;
    size_t count;
    temp = h;
    count = 0;
    while (temp != NULL)
    {
        printf("%d", temp-> n);
        temp = temp -> next;
        count++;
    }
    return (count);
}
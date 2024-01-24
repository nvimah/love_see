#include "list.h"
/**
 * listint_len - returns the 
 * number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 * Return: the number of elements
 *  (nodes) in the list
 * 
 
*/
size_t listint_len(const listint_t *h)
{
    const listint_t *temp;
    size_t count;
    count = 0;
    temp = h;
    while(temp != NULL)
    {
        temp = temp -> next;
        count++;
    }
    return (count);
}
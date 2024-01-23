#include "list.h"
/**
 * list_len - the function name
 * @list_t - the typedef name of the struct 
 * h  - the list pointer
 * return - number of elements
 * 
*/
size_t list_len(const list_t *h)
{
    size_t No_elements = 0;
    const list_t *ptr;
    
    if (h == NULL)
    {
        return 0 ;
    }

    ptr = h;

    while (ptr != NULL)
    {
        ptr = ptr -> next;
        No_elements++;
    }
    return (No_elements);
    
}
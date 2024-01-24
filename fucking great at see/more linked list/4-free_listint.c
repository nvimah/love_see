#include "list.h"
/**
 * free_listint - the function that frees a list
 * listint_t - the list being freed
 * head - pointer to the first list element
*/
void free_listint(listint_t *head)
{
    if(head == NULL)
    {
        printf("empty list");
        return;
    }
    listint_t *prt;
    while (head != NULL)
    {
        prt = head;
        head = head-> next;
        free(prt);
        
    }
}
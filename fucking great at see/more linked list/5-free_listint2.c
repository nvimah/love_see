#include "list.h"
/**
 * free_listint2 - the function that frees memory
 * listint_t - the list being manipulated
 * head - pointer to the first element
*/
void free_listint2(listint_t  **head) 
{
    if (head == NULL || *head == NULL)
    {
        return;  
    }

    listint_t *temp;

    while(*head != NULL)
    {
        temp = (*head);
        (*head) = (*head) -> next;
        free(temp);
    }
    (*head) = NULL;
}
#include "list.h"
/**
 * *add_nodeint_end - the function pointer to the list
 * listint_t - the list being manipulated
 * head - pointer to the first list element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *temp;
    new_node = (listint_t*)malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        printf("memory allocation failed");
        return (NULL);
    }
    new_node -> n = n;
    new_node -> next = NULL;

    if ((*head) == NULL)
    {
        (*head) = new_node;
        return (new_node);
    }

    temp = (*head);
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = new_node;
    return (new_node);
}
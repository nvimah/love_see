#include "list.h"
/**
 * *add_nodeint - function pointer to add a node
 * listint_t - the list being manipulated
 * return - returns the value of the newnode
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node, *temp;
    new_node = (listint_t*)malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        printf("memory allocation failed");
        return (NULL);
    }
    new_node -> n = n;
    new_node -> next = (*head);
    (*head) = new_node;
    
    return (new_node);
}
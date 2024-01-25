#include "list.h"
/**
 * *insert_nodeint_at_index - function pointer that inserts 
 * a node ata a given index
 * @head - pointer to the first element of the list
 * @idx - the index where the node is inserted
 * return - the address of the node
 * 
*/
listint_t *insert_nodeint_at_index(listint_t  **head, unsigned int idx, int n)
{
    
    listint_t *temp , *new_node;

    if (head == NULL)
    {
        return NULL;
    }

    new_node = (listint_t*)malloc(sizeof(listint_t));
    if ( new_node == NULL)
    {
        return (NULL);
    }

    new_node -> n = n ;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    temp = (*head);

    for (unsigned int i = 0; i < idx - 1 && temp != NULL; i++)
    {
        
        temp = temp -> next;
    }

     if (temp == NULL)
    {
        free(new_node);
        return NULL;  
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;
    
    return ( new_node);
}
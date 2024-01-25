#include " list.h"
/**
 * delete_nodeint_at_index - function that deletes  a nodde
 * at an index
 * @head - pointer to the first element
 * @index - the position of the node
 * being deleted
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    if (head == NULL || *head == NULL)
    {
        return -1; 
    }

    listint_t *temp, *prev;
    temp = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(temp);
        return 1;
    }

    for(unsigned int i = 0; i < index && temp != NULL; i++)
    {
        prev = temp;
        temp = temp -> next;
        
    }
    if (temp == NULL)
    {
        return -1;  
    } 

    prev->next = temp->next;
    free(temp);

    return 1;

    
}
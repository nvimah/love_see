#include " list.h"
/**
 * *get_nodeint_at_index -function that return nth node
 * head - pointer to the first element
 * @index: index of the node, starting at 0
 * Return: pointer to the nth node, or NULL if the node 
 * does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *temp = head;

    while(temp != NULL && i < index)
    {
        temp = temp -> next;
        i++;
    }

    if (temp == NULL)
    {
        return (NULL);
    }

    return (temp);
}
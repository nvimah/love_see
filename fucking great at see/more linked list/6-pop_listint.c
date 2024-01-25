#include "list.h"
/**
 * pop_listint - function that deletes head node
 * @head - pointer to the first element
 * Return: the head node's data (n), or 0 if the 
 * linked list is empty
*/
int pop_listint(listint_t **head)
{
    if (head == NULL || *head == NULL)
    {
        return 0;
    }

    listint_t *temp = *head;
    int data = temp->n;

    (*head) = (*head) -> next;
    free(temp);
    return (data);
}
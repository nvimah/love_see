#include "list.h"
/**
 * sum_listint - function that return the sum 
 * @head - pointer to the first list element
 * Return: sum of all the data, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
    if(head == NULL)
    {
        return 0;
    }

    int sum = 0;
    listint_t *temp = head;

    while(temp != NULL)
    {   
        sum += temp -> n;
        temp = temp -> next;
    }
    return (sum);

}
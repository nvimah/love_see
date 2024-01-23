#include "list.h"
/**
 * add_node - function that adds a node
 * list_t - name of the list structure
 * str - pointer to the string copied
 * return - the address to the first 
 * pointer
 * 
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    new_node = (list_t*)malloc(sizeof(list_t));
    new_node -> str = strdup(str);
    new_node -> len = strlen(str);
    new_node -> next = head;
    if (new_node -> str == NULL)
    {
        printf("NULL\n");
    }
    head = new_node;
    return (head);

}
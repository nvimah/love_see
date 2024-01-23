#include "list.h"
/**
 * free_list -  function that frees a list_t list
 * list_t - typedef name of the struct node
 * head - pointer to the first list element
 * 
*/
 void free_list (list_t *head)
 {
   list_t *tmp;
   while(head != NULL)
   {
    tmp = head -> next;
    free(head -> str);
    free(head);
    head = tmp;
   }

 }
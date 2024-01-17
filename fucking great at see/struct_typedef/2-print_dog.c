#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
void print_dog(struct dog *d)
{
   if ((d -> name || d -> age || d -> owner) == NULL) 
    {
        printf("(nil)\n");
    }
        elif (d->name == NULL)
        { 
            printf("Name: (nil)\n");
         }
        elif (d == NULL)
        {
             printf(" \n");
        }
    else
        printf("%s", d->owner);
        printf("%f", d->age);
        printf("%s", d->name);

}
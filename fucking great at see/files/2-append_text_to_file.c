#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - function that appends text to 
 * end of a file
 * filename - pointer name  to the file
 * text_content - content to be added to the file
 * return - 1 on succes and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
    if (filename == NULL)
    {
        return (-1);
    }
    
    FILE *file = fopen(filename, "a+");
     
    if (file == NULL)
    {
        return (-1);
    }

    if (text_content != NULL)
    {
         fputs(text_content, file);
         fclose(file);
         return (1);
    }

    
    fclose(file);
    return (-1);

}
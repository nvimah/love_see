#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - function that creates a file
 * *filename - pointer that points to the created file
 *  *text_content - pointer
 * return -  1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
    return (-1);
}

FILE *file = fopen(filename, "w");

if (file == NULL)
{
    return (-1);
}
if (text_content  != NULL)
{
    fputs(text_content, file);
}
fclose(file);

return (1);

}
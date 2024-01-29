#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters) 
{
    if (filename == NULL) 
    {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) 
    {
        return 0;
    }

    char buffer[BUF_SIZE];
    size_t total_read = 0;

    while (letters > 0) 
    {
        size_t read_size = (letters < BUF_SIZE) ? letters : BUF_SIZE;

        size_t bytes_read = fread(buffer, 1, read_size, file);
        if (bytes_read == 0) 
        {
            break;  
        }

        size_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
        if (bytes_written != bytes_read) 
        {
            fclose(file);
            return 0;  
        }

        total_read += bytes_read;
        letters -= bytes_read;
    }

    fclose(file);
    return total_read;
}

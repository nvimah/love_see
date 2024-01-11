#include <stdio.h>
#include<stdlib.h>

int main()
{
    //pointer to allocate memory
    float *memory_block;

    //allocate memory for 100 items  using the calloc function
    memory_block = (float *)calloc(100, sizeof(float));

    //check if memory allocation is succesfull
    if (memory_block == NULL)
    {
        printf("Memory allocation failed. Exiting program");
        return 1; 
    }
    printf("Memory allocation for a hundred items succesfull\n");

    //reallocate the memory to accomodate 50 more items
    memory_block = (float *)realloc(memory_block, 150 * sizeof(float));

    //check if memory reallocation is succesfull
    if (memory_block == NULL)
    {
        printf("memory reallocation failed,exit with error");
        return 1;
    }
    printf("Memory reallocation succesful\n");
    //free the allocated memory
    free(memory_block);
    return 0;
}
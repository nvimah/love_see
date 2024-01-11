#include<stdio.h>
#include<stdlib.h>

int main()
{
    int bytes;

    //Ask the user to enter number of bytes
    printf("Enter the total number of bites you want:  ");
    scanf("%d",&bytes);
    
    //Allocate dynamic memory
    int *memory_allocated = (int*)malloc(bytes);

    //check for Null
    if (memory_allocated == NULL)
    {
        printf("memory allocaation failed \n");
        return 1;
    }

    //intitialize the allocated memory with consecutive integers starting from 1
    for (int i = 0; i < bytes / sizeof(int); ++i)
    {
        memory_allocated[i] = i + 1;
    }

    //calculate the sum of integers
    int sum = 0;
    for (int i = 0; i < bytes / sizeof(int) ; ++i)
    {
        sum = sum + memory_allocated[i];
    }

    //print the sum
    printf("Sum of integers in the allocated memory block: %d\n", sum );

    //free allocated memory space
    free(memory_allocated);
    
    return 0;
}
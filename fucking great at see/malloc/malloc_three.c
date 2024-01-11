#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ask the user to enter a float sum
    float sum;
    float *memory_block_1;
    float *memory_block_2;
    printf("Enter the sum of the decimals: ");
    scanf("%f", &sum);

    //allocate dynamic memory to the sum using malloc
    memory_block_1 = (float *)malloc(sum * sizeof(float));

    //check if the memory is allocated
    if (memory_block_1 == NULL)
    {
        printf("Memory allocation failed succesfully,exit with error\n");
        return 1;
    }
    printf("memory allocation succesful!\n");
    
     //dispaly the initial value of malloc
    for (int i = 0; i < sum; ++i)
    {
        printf("%.2f\n", memory_block_1[i]);
    }
    //free the memory
    free(memory_block_1);

    //allocate dynamic memory using calloc
    memory_block_2 = (float *)calloc(sum, sizeof(float));
     //check if the memory is allocated
    if (memory_block_2 == NULL)
    {
        printf("Memory allocation failed succesfully,exit with error\n");
        return 1;
    }
    printf("memory allocation succesful!\n");
    
    //dispaly the initial value of calloc
    for (int i = 0; i < sum; ++i)
    {
        printf("%.2f\n", memory_block_2[i]);
    }
    //free the memory 
    free(memory_block_2);
    return 0;
}
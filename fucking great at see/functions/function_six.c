#include<stdio.h>
//intialize the function to check even or odd
int Number_status(int);

//the main function
int main()
{
    int number;

    //prompt user to enter a random number
    printf("Enter a random number:  ");

    //get the number and store it in a variable
    scanf("%d",&number);

    //call the function and check if the number is even or odd
    if (Number_status(number) == 1)
    {
        printf("%d is even\n", number);
    }
    else
    {
        printf("%d id odd.\n", number);
    }
    return 0;
}
//function to check if even or odd
int Number_status(int num)
{
    if (num % 2 == 0)
     
    return 1;
    
    else
    
    return 0;
    
}
#include<stdio.h>
//initialize the factorial function
int Number_Factorial(int);

int main()
{
    int number;
    int factorial;
    //prompt the user to enter a number
    printf("Enter a number of your choice: ");

    //store the number in the initialized variable location
    scanf("%d", &number);

    //call the function to calculate the recursion
    factorial = Number_Factorial(number);
    printf("the factorial of %d is %d",number, factorial);
    return 0;
}

//Declare the factorial function
int Number_Factorial(int num)
{
   if (num<= 1)
   return 1;
   
   else
   {
    return num * Number_Factorial(num - 1);
   }
}
#include <stdio.h>

// 'number' is a parameter
void displayNumber(int number)
{
   printf("The number is: %d\n", number);
}

int main()
{
   // Calling the function with argument 5
   displayNumber(5);

   return 0;
}
#include <stdio.h>

// Function declaration
void greet();

// Function definition
void greet()
{
   printf("Hello from the greet function!\n");
}

// 'number' is a parameter
void displayNumber(int number)
{
   printf("The number is: %d\n", number);
}

// Function with return type 'int'
int add(int a, int b)
{
   return a + b;
}

// Global variable
int globalVar = 10;

void display()
{
   int localVar = 20; // Local variable
   printf("Global variable: %d\n", globalVar);
   printf("Local variable: %d\n", localVar);
}

int main()
{
   // Calling the function
   greet();

   // Calling the function with argument 5
   displayNumber(5);

   // Calling the function and storing the return value
   int sum = add(3, 4);
   printf("Sum: %d\n", sum);

   // Can access both global and local variables in display function
   display();

   // Error: localVar is not accessible here
   // printf("%d", localVar);

   return 0;
}

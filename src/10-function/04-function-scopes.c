#include <stdio.h>

int globalVar = 10; // Global variable

void display()
{
   int localVar = 20; // Local variable
   printf("Global variable: %d\n", globalVar);
   printf("Local variable: %d\n", localVar);
}

int main()
{
   // Can access both global and local variables in display function
   display();

   // Error: It wll show an error as localVar is not accessible here
   printf("%d", localVar);

   return 0;
}
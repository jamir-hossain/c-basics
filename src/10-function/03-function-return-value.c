#include <stdio.h>

// Function with return type 'int'
int add(int a, int b)
{
   return a + b;
}

int main()
{
   // Calling the function and storing the return value
   int sum = add(3, 4);

   printf("Sum: %d\n", sum);

   return 0;
}
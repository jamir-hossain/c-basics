#include <stdio.h>

int main()
{
   int num1, num2;

   // Prompt the user to enter two integers
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   // Basic assignment
   int result = num1;
   printf("Initial result: %d\n", result);

   // Compound assignment operators

   // Equivalent to result = result + num2
   result += num2;
   printf("After += : %d\n", result);

   // Equivalent to result = result - num2
   result -= num2;
   printf("After -= : %d\n", result);

   // Equivalent to result = result * num2
   result *= num2;
   printf("After *= : %d\n", result);

   // Equivalent to result = result / num2
   result /= num2;
   printf("After /= : %d\n", result);

   // Equivalent to result = result % num2
   result %= num2;
   printf("After %%= : %d\n", result);

   return 0;
}
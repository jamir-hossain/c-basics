#include <stdio.h>

int main()
{
   int num1, num2;

   // Prompt the user to enter two integers
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   // Perform arithmetic operations
   int sum = num1 + num2;        // Addition
   int difference = num1 - num2; // Subtraction
   int product = num1 * num2;    // Multiplication
   int quotient = num1 / num2;   // Division
   int remainder = num1 % num2;  // Modulus

   // Display the results
   printf("%d + %d = %d\n", num1, num2, sum);
   printf("%d - %d = %d\n", num1, num2, difference);
   printf("%d * %d = %d\n", num1, num2, product);
   printf("%d / %d = %d\n", num1, num2, quotient);
   printf("%d %% %d = %d\n", num1, num2, remainder);

   return 0;
}
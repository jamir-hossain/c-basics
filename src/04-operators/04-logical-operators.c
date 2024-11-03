#include <stdio.h>

int main()
{
   int num1, num2;
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   int isEqual = (num1 == num2);
   int isGreater = (num1 > num2);

   // Logical operations
   int bothTrue = isEqual && isGreater;   // Logical AND
   int eitherTrue = isEqual || isGreater; // Logical OR
   int notEqual = !isEqual;               // Logical NOT

   // Printing results
   printf("(%d == %d) && (%d > %d): %d\n", num1, num2, num1, num2, bothTrue);
   printf("(%d == %d) || (%d > %d): %d\n", num1, num2, num1, num2, eitherTrue);
   printf("!(%d == %d): %d\n", num1, num2, notEqual);

   return 0;
}
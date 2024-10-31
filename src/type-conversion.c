#include <stdio.h>

int main()
{
   int num1, num2;
   scanf("%d %d", &num1, &num2);

   // Implicit conversion: int to float during division
   float jogfol = num1 + num2; // Implicit conversion to float
   printf("%d + %d = %.2f\n", num1, num2, jogfol);

   float biyogfol = num1 - num2; // Implicit conversion to float
   printf("%d - %d = %.2f\n", num1, num2, biyogfol);

   float gunfol = num1 * num2; // Implicit conversion to float
   printf("%d * %d = %.2f\n", num1, num2, gunfol);

   // Explicit conversion: casting int to float for division
   float vagfol = (float)num1 / num2; // Explicit conversion
   printf("%d / %d = %.2f\n", num1, num2, vagfol);

   int vagshesh = num1 % num2;
   printf("%d %% %d = %d\n", num1, num2, vagshesh);

   return 0;
}
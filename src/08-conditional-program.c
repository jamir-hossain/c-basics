#include <stdio.h>

int main()
{
   int num1, num2;
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   // Using if-else to compare numbers
   if (num1 > num2)
   {
      printf("%d is greater than %d\n", num1, num2);
   }
   else if (num1 < num2)
   {
      printf("%d is less than %d\n", num1, num2);
   }
   else
   {
      printf("%d is equal to %d\n", num1, num2);
   }

   // Using switch to perform operations based on user choice
   int choice;
   printf("Choose an operation:\n");
   printf("1. Add\n");
   printf("2. Subtract\n");
   printf("3. Multiply\n");
   printf("4. Divide\n");
   printf("Enter your choice (1-4): ");
   scanf("%d", &choice);

   switch (choice)
   {
   case 1:
      printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
      break;
   case 2:
      printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
      break;
   case 3:
      printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
      break;
   case 4:
      if (num2 != 0)
      {
         printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
      }
      else
      {
         printf("Error: Division by zero is not allowed.\n");
      }
      break;
   default:
      printf("Invalid choice.\n");
      break;
   }

   return 0;
}
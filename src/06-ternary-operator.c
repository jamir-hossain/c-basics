#include <stdio.h>

int main()
{
   int num1, num2;
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   // Using the ternary operator to find the larger number
   int max = (num1 > num2) ? num1 : num2;

   // Using the ternary operator to find the smaller number
   int min = (num1 < num2) ? num1 : num2;

   printf("The larger number is: %d\n", max);
   printf("The smaller number is: %d\n", min);

   return 0;
}
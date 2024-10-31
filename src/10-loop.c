#include <stdio.h>

int main()
{
   // Use a for loop for a known number of iterations.
   printf("Using for loop:\n");
   for (int i = 1; i <= 10; i++)
   {
      printf("%d ", i);
   }
   printf("\n");

   // Use a while loop when the loop should continue until a condition changes.
   printf("Using while loop:\n");
   int j = 1;
   while (j <= 10)
   {
      printf("%d ", j);
      j++;
   }
   printf("\n");

   // Use a do-while loop when you need to execute the loop body at least once before checking the condition.
   printf("Using do-while loop:\n");
   int k = 1;
   do
   {
      printf("%d ", k);
      k++;
   } while (k <= 10);
   printf("\n");

   return 0;
}

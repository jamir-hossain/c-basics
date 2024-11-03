#include <stdio.h>

int main()
{
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

#include <stdio.h>

int main()
{
   // Use a while loop when the loop should continue until a condition changes.
   printf("Using while loop:\n");
   int j = 1;

   while (j <= 10)
   {
      printf("%d ", j);
      j++;
   }

   printf("\n");

   return 0;
}

#include <stdio.h>

int main()
{
   // Array Initialization
   int ages[5] = {18, 21, 25}; // Remaining elements are initialized to 0
   for (int i = 0; i < 5; i++)
   {
      printf("%d ", ages[i]); // Output: 18 21 25 0 0
   }

   return 0;
}
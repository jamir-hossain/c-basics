#include <stdio.h>

int main()
{
   int arr[] = {10, 20, 30, 40};
   int *ptr = arr; // points to the first element

   for (int i = 0; i < 4; i++)
   {
      printf("Value at arr[%d]: %d\n", i, *ptr);
      ptr++; // moves to the next element in the array
   }

   return 0;
}
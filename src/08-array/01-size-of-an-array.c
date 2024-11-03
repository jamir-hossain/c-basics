#include <stdio.h>

int main()
{
   // Size of an Array
   int numbers[5] = {1, 2, 3, 4, 5};

   printf("Size of the array: %lu bytes\n", sizeof(numbers));
   printf("Number of elements: %lu\n", sizeof(numbers) / sizeof(numbers[0]));

   return 0;
}
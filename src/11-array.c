#include <stdio.h>
#include <string.h>

int main()
{
   // Size of an Array
   int numbers[5] = {1, 2, 3, 4, 5};

   printf("Size of the array: %lu bytes\n", sizeof(numbers));
   printf("Number of elements: %lu\n", sizeof(numbers) / sizeof(numbers[0]));

   // Array Initialization
   int ages[5] = {18, 21, 25}; // Remaining elements are initialized to 0
   for (int i = 0; i < 5; i++)
   {
      printf("%d ", ages[i]); // Output: 18 21 25 0 0
   }

   // Variable Length Arrays
   int n;
   printf("Enter the number of elements: ");
   scanf("%d", &n);

   int values[n]; // VLA declaration
   for (int i = 0; i < n; i++)
   {
      values[i] = i * 2;
   }

   for (int i = 0; i < n; i++)
   {
      printf("%d ", values[i]);
   }

   return 0;
}
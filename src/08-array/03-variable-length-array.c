#include <stdio.h>

int main()
{
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
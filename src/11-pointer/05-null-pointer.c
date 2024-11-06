#include <stdio.h>

int main()
{
   int *ptr = NULL; // null pointer

   if (ptr == NULL)
   {
      printf("Pointer is null, not pointing to any memory address.\n");
   }
   else
   {
      printf("Pointer value: %d\n", *ptr);
   }

   return 0;
}
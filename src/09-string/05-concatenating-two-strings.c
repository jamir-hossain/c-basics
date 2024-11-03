#include <stdio.h>

int main()
{
   // Concatenating Two Strings
   char first[20] = "Hello, ";
   char second[] = "World!";

   strcat(first, second);
   printf("Concatenated string: %s\n", first); // Output: Hello, World!

   return 0;
}
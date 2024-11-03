#include <stdio.h>

int main()
{
   // Copy Strings
   char source[] = "Hello";
   char destination[20];

   strcpy(destination, source);
   printf("Copied string: %s\n", destination); // Output: Hello

   return 0;
}
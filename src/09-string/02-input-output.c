#include <stdio.h>

int main()
{
   char name[50];

   // String Input Output
   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin); // Reads a line of text including spaces
   printf("Hello, %s", name);        // Outputs the entered name

   return 0;
}
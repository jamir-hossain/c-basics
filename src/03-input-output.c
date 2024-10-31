#include <stdio.h>

int main()
{
   int age;
   float height;
   char name[50];

   // Asking for user input
   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin); // reads a line of text
   printf("Enter your age: ");
   scanf("%d", &age);
   printf("Enter your height in meters (e.g., 1.75): ");
   scanf("%f", &height);

   // Displaying output
   printf("\nHello, %s", name); // fgets includes newline, so no need to add \n here
   printf("You are %d years old and %.2f meters tall.\n", age, height);

   return 0;
}

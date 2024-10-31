#include <stdio.h>

int main()
{
   // Declares a string with 5 characters and a null terminator
   char greeting[6] = "Hello";
   printf("Name: %s\n", greeting);

   char name[50];

   // String Input Output
   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin); // Reads a line of text including spaces
   printf("Hello, %s", name);        // Outputs the entered name

   // Finding Length of String
   char word[100] = "Programming";
   int length = strlen(word);

   printf("Length of the string: %d\n", length); // Output: 11

   // Copy Strings
   char source[] = "Hello";
   char destination[20];

   strcpy(destination, source);
   printf("Copied string: %s\n", destination); // Output: Hello

   // Concatenating Two Strings
   char first[20] = "Hello, ";
   char second[] = "World!";

   strcat(first, second);
   printf("Concatenated string: %s\n", first); // Output: Hello, World!

   // Comparing Two Strings
   char str1[] = "apple";
   char str2[] = "banana";
   int result = strcmp(str1, str2);

   if (result == 0)
   {
      printf("Strings are equal\n");
   }
   else if (result < 0)
   {
      printf("str1 is less than str2\n");
   }
   else
   {
      printf("str1 is greater than str2\n");
   }

   return 0;
}
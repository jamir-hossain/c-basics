#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
   // Integer data type
   int integerVar = 42;
   printf("Integer: %d\n", integerVar);

   // Floating-point data type
   float floatVar = 3.14f;
   printf("Float: %.2f\n", floatVar);

   // Double data type
   double doubleVar = 2.718281828459;
   printf("Double: %.12lf\n", doubleVar);

   // Character data type
   char charVar = 'A';
   printf("Character: %c\n", charVar);

   // Boolean data type (using int)
   int boolVar = 1; // 1 for true, 0 for false
   printf("Boolean (as int): %d\n", boolVar);

   // Short integer data type
   short shortVar = 32767;
   printf("Short: %d\n", shortVar);

   // Long integer data type
   long longVar = 1234567890L;
   printf("Long: %ld\n", longVar);

   // Unsigned integer data type
   unsigned int unsignedVar = 4000000000U;
   printf("Unsigned Integer: %u\n", unsignedVar);

   return 0;
}
#include <stdio.h>

int main()
{
   int a;
   unsigned int b;
   float c;
   double d;
   char e;
   char str[100];

   // Reading input
   printf("Enter an integer: ");
   scanf("%d", &a);

   printf("Enter an unsigned integer: ");
   scanf("%u", &b);

   printf("Enter a float: ");
   scanf("%f", &c);

   printf("Enter a double: ");
   scanf("%lf", &d);

   printf("Enter a character: ");
   scanf(" %c", &e); // Note the space before %c to consume any leftover newline

   printf("Enter a string: ");
   scanf("%s", str);

   // Printing output
   printf("Integer: %d\n", a);
   printf("Unsigned Integer: %u\n", b);
   printf("Float: %.2f\n", c);
   printf("Double: %.2lf\n", d);
   printf("Character: %c\n", e);
   printf("String: %s\n", str);

   return 0;
}
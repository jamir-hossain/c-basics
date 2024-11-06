#include <stdio.h>

int main()
{
   int num1 = 10, num2 = 20;
   const int *ptr1 = &num1; // Pointer to constant
   int *const ptr2 = &num1; // Constant pointer

   // *ptr1 = 15; // Error: cannot modify the value
   ptr1 = &num2; // Allowed: can change the address

   *ptr2 = 15; // Allowed: can modify the value
   // ptr2 = &num2; // Error: cannot change the address

   return 0;
}
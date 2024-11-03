#include <stdio.h>

void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main()
{
   int num = 10;
   int *ptr = &num; // 'ptr' is a pointer to 'num'

   printf("Value of num: %d\n", num);
   printf("Address of num: %p\n", ptr);                  // prints the address stored in ptr
   printf("Value at address stored in ptr: %d\n", *ptr); // dereferencing pointer

   // *** Pointer Arithmetic *** //
   int arr[] = {10, 20, 30, 40};
   int *ptr2 = arr; // points to the first element

   for (int i = 0; i < 4; i++)
   {
      printf("Value at arr[%d]: %d\n", i, *ptr2);
      ptr2++; // moves to the next element in the array
   }

   // *** Pointers and Constants *** //
   int num1 = 10, num2 = 20;
   const int *ptr3 = &num1; // Pointer to constant
   int *const ptr4 = &num1; // Constant pointer

   // *ptr3 = 15; // Error: cannot modify the value
   ptr3 = &num2; // Allowed: can change the address

   // ptr4 = &num2; // Error: cannot change the address
   *ptr4 = 15; // Allowed: can modify the value

   // Using Pointers to Pass by Address in Functions
   int x = 5, y = 10;
   swap(&x, &y); // passing addresses of x and y
   printf("Swapped values: x = %d, y = %d\n", x, y);

   // *** Null Pointers *** //
   int *ptr5 = NULL; // null pointer

   if (ptr5 == NULL)
   {
      printf("Pointer is null, not pointing to any memory address.\n");
   }
   else
   {
      printf("Pointer value: %d\n", *ptr5);
   }

   return 0;
}
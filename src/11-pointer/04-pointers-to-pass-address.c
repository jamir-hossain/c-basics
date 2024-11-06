#include <stdio.h>

void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main()
{
   int x = 5, y = 10;
   swap(&x, &y); // passing addresses of x and y
   printf("Swapped values: x = %d, y = %d\n", x, y);

   return 0;
}
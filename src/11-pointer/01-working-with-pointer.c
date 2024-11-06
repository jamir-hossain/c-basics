#include <stdio.h>

void updateValue(int *ptr)
{
   *ptr = 20; // modifies the value at the address stored in ptr
}

int main()
{
   int num = 10;
   updateValue(&num); // passing the address of num
   printf("Updated value of num: %d\n", num);

   return 0;
}
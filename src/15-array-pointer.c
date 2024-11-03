#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // Access the first element pointer of array
    printf("First Element %p\n", arr);

    // Accessing elements using pointer arithmetic
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *(arr + i));
    }

    // Accessing elements using array index
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, arr[i]);
    }

    return 0;
}
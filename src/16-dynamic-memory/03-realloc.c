#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 5;

    // Allocating memory for 5 integers
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initializing allocated memory
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }

    // Reallocating memory to store 10 integers
    n = 10;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Initializing the newly allocated memory
    for (int i = 5; i < n; i++)
    {
        ptr[i] = i + 1;
    }

    // Displaying all elements
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Freeing the allocated memory
    free(ptr);
    return 0;
}

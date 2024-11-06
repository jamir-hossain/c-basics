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

    // Initializing and displaying allocated memory
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Freeing the allocated memory
    free(ptr);
    return 0;
}
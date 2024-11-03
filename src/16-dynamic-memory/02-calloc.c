#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 5;

    // Allocating memory for 5 integers
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Displaying initialized memory (all elements are zero)
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Freeing the allocated memory
    free(ptr);
    return 0;
}

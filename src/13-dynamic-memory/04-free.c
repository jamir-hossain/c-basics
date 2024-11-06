#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    // Allocating memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Freeing the allocated memory
    free(ptr);
    printf("Memory has been freed.\n");

    return 0;
}

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory previously allocated with a call to malloc()
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *ptr1;
    char *old_ptr;
    unsigned int i;

    if (new_size == old_size)
        return (ptr);

    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    if (ptr == NULL)
    {
        ptr = malloc(new_size);
        if (ptr == NULL)
            return (NULL);
        return (ptr);
    }

    ptr1 = malloc(new_size);
    if (ptr1 == NULL)
        return (NULL);

    old_ptr = ptr;

    for (i = 0; i < old_size && i < new_size; i++)
        ptr1[i] = old_ptr[i];

    free(ptr);
    return (ptr1);
}

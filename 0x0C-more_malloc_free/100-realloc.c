#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * Return: A pointer to the newly allocated block of memory, NULL in other case
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int bytes_to_cpy;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (ptr == NULL)
		return (new_ptr);
	bytes_to_cpy = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, bytes_to_cpy);

	free(ptr);
	return (new_ptr);
}

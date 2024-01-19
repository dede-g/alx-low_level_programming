#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: number of elements
 * @size: number of bytes for each element
 * The memory is set to 0
 *
 * Return: pointer to the allocated space or NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, (size * nmemb));
	return (ptr);
}

#include <stdlib.h>

/**
 * array_range - Create an array of integers
 * Array should contain values from MIN to MAX
 * @min: first number
 * @max: second number
 *
 * Return: pointer to newly created array or NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *ptr, i;
	int size = (max - min) + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);

}

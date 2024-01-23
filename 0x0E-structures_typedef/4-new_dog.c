#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - pointer to struct
 * @name: nae of dog
 * @age: its age
 * @owner: the owner
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	newptr = malloc(sizeof(dog_t));
	if (newptr == NULL)
	{
		return (NULL);
	}
	newptr->name = strdup(name);
	newptr->owner = strdup(owner);
	if (newptr->name == NULL || newptr->owner == NULL)
	{
		free(newptr->name);
		free(newptr->owner);
		free(newptr);
		return (NULL);
	}
	
	newptr->age = age;
	return (newptr);
}

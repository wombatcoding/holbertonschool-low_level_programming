#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to new dog, or NULL on failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namecount = 0, ownercount = 0;
	int namestore = 0, ownerstore = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[namecount] != '\0')
		namecount++;
	dog->name = malloc((namecount + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (owner[ownercount] != '\0')
		ownercount++;
	dog->owner = malloc((ownercount + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (namestore = 0; namestore <= namecount; namestore++)
		dog->name[namestore] = name[namestore];
	dog->age = age;
	for (ownerstore = 0; ownerstore <= ownercount; ownerstore++)
		dog->owner[ownerstore] = owner[ownerstore];
	return (dog);
}

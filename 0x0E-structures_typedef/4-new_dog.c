#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy source to this buffer
 * @src: source to copy
 * Return: copy of the original source
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * *new_dog - function that creates a new dog.
 * @name: first member - dog name
 * @age: second member - dog age
 * @owner: third member - dog owner
 * Return: copy of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_copy; /*declaro un puntero de tipo dog_t llamado dog_copy*/
	char *copy_name = NULL;
	char *copy_owner = NULL;

	dog_copy = malloc(sizeof(dog_t));
	if (dog_copy == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		copy_name = malloc(_strlen(name) + 1);
		if (copy_name == NULL)
		{
		free(copy_name);/*Libero memoria si apunta a NULL*/
		return (NULL);
		}
		dog_copy->name = _strcpy(copy_name, name);
	}
	else
	{
		dog_copy->name = NULL;/*Condicion de letra*/
	}
	if (owner != NULL)
	{
		copy_owner = malloc(_strlen(owner) + 1);
		if (copy_owner == NULL)
		{
			free(copy_owner);/*Libero memoria si apunta a NULL*/
			free(dog_copy);
			return (NULL);
		}
		dog_copy->owner = _strcpy(copy_owner, owner);
	}
	else
	{
		dog_copy->owner = NULL;
	}
	dog_copy->age = age;/*Copio variable age dentro de dog_copy*/
	return (dog_copy);
}

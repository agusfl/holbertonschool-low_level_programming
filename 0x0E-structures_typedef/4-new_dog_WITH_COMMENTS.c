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
		/**
		 * Si el puntero es null es que hubo un porblema por lo tanto
		 * le indicamos que retorne null.
		 */
	}
	if (name != NULL)
	{
		copy_name = malloc(_strlen(name) + 1);
		/**
		 * Le sumo 1 por el caracter null que no lo tome en cuenta en
		 * mi funcion de _strlen.
		 */
		if (copy_name == NULL)
		{
		free(dog_copy);
		/**
		 * Si copy_name es nulo (osea no pasaron ningun dato) libero la memoria que habia
		 * guardado con malloc para dog_copy ya que no voy a necesitar esa memoria porque
		 * la estructura no esta completa ya que no pasaron un dato, entonces le digo que 
		 * retorne NULL y salga del programa.
		 */
		return (NULL);
		}
		dog_copy->name = _strcpy(copy_name, name);
		/**
		 * Copio lo que pasen en 'name' de 'new_dog' dentro del puntero
		 * dog_copy en la variable 'name'.
		 */
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
			free(copy_name);
			free(dog_copy);
		/**
		 * En este caso si owner, lo pasan como null (no pasan nada para la variable owner de la estructura)
		 * libero la memoria que habia guardado con malloc tanto para 'copy_name' como para 'dog_copy'.
		 * Ya que si no pusieron datos para alguna variable (member) de la estrucutura vamos a indicar
		 * que retorne NULL.
		 */
			return (NULL);
		}
		dog_copy->owner = _strcpy(copy_owner, owner);
		/**
		 * Idem proceso variable name pero con variable owner
		 */
	}
	else
	{
		dog_copy->owner = NULL;
	}
	dog_copy->age = age;
	/**
	 * Copio variable age dentro de dog_copy.
	 * A age no le tengo que poner malloc, ya que age es una variable de tipo 'float', no es un
	 * puntero a char como 'name' y 'owner', la varaible age de tipo float siempre va a pesar lo mismo
	 * 4 bytes (en general, dependiendo la estructura de tu maquina) entonces se puede alocar de forma
	 * dinamica, en cambio 'name' y 'owner' son punteros a char porque el peso que van a tener es variable
	 * ya que depende de que tan largos sean los nombres que van a pasar. Esto es asi ya que si el nombre
	 * del perro fuera: pepe pesaria 4 bytes pero si fuera pepito serian 6 bytes.
	 */
	return (dog_copy);
}


#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size of the array.
 * Return: Pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *hash_t = NULL;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	/*Le asignamos memoria al array para los hash_node_t*/
	hash_t->array = malloc(size * sizeof(hash_node_t *));
	/*Le asignamos el size pasado como argumento al elemento size de la struct*/
	hash_t->size = size;

	/* Si el size es 0 no hay array para crear */
	if (size == 0)
		return (NULL);

	if (hash_t->array == NULL)
	{
		free(hash_t); /*si el array falla liberamos la memoria que habiamos alocado*/
		return (NULL);
	}

	/*Inicializamos los elementos (linked list) de array para que apunten a NULL*/
	while (i < size)
	{
		hash_t->array[i] = NULL;
		i++;
	}

	return (hash_t);
}

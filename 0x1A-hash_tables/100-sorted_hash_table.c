#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table.
 * @size: size of the array of the hash table.
 * Return: pointer to the newly created hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0; /* mismo tipo que la estructura hash_table_s*/
	shash_table_t *hash_t = NULL;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	/*Le asignamos memoria al array para los shash_node_t*/
	hash_t->array = malloc(size * sizeof(shash_node_t *));
	/*Le asignamos el size pasado como argumento al elemento size de la struct*/

	/* Si el size es 0 no hay array para crear */
	if (size == 0)
		return (NULL);
	hash_t->size = size;

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
	hash_t->shead = NULL;
	hash_t->stail = NULL;

	return (hash_t);
}

/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element or NULL if key couldnt be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *search_nod = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	search_nod = ht->array[index];

	while (search_nod != NULL)
	{
		if (strcmp(search_nod->key, key) == 0)
			return (search_nod->value);
		search_nod = search_nod->next;
	}
	return (NULL);
}

/**
 * shash_table_print - function that prints a hash table
 * @ht: hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	char *print_comma = "";
	shash_node_t *node = NULL;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	node = ht->shead;
	while (i < ht->size)
	{
		while (node != NULL)
		{
			printf("%s'%s': '%s'", print_comma, node->key, node->value);
			print_comma = ", ";
			node = node->snext;
		}
		i++;
	}
	printf("}\n");
}

/**
  * shash_table_print_rev - function that prints a hash table in reverse
  * @ht: hash table
  */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0;
	char *print_comma = "";
	shash_node_t *node = NULL;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	node = ht->stail;
	while (i < ht->size)
	{
		while (node != NULL)
		{
			printf("%s'%s': '%s'", print_comma, node->key, node->value);
			print_comma = ", ";
			node = node->snext;
		}
		i++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL;
	shash_node_t *aux = NULL;

	node = ht->shead;
	while (node != NULL)
	{
		aux = node->snext;
		free(node->value);
		free(node->key);
		free(node);
		node = aux;
	}
	free(ht->array);
	free(ht);
}

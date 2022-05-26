#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL;
	hash_node_t *aux = NULL;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			aux = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = aux;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

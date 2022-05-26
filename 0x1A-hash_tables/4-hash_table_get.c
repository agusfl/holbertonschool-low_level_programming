#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element or NULL if key couldnt be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *search_nod = NULL;

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

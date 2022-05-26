#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *print_comma = "";
	hash_node_t *node = NULL;

	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", print_comma, node->key, node->value);
			print_comma = ", ";
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}

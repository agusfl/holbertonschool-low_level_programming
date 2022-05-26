#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	/* Declaramos la variable "print_comma" vacia para que en el primer printf se imprima sin coma
	 * y sin espacio que recien para la siguiente iteracion se le asigna la coma y el espacio
	 * para que se impriman. */
	char *print_comma = "";
	hash_node_t *node = NULL;

	printf("{"); /* Ver formato del ej para imprimirlo, pero piden que tenga llaves como un array. */

	/* Se hace un while con la condicion de que la 'i' sea menor al tamaño de la hash table 
	 * ya que queremos recorrer la cantidad de nodos que haya en la hash table. */
	while (i < ht->size)
	{
		/* Le asignamos al nodo los valores que esten en el elemento "array" en la posicion 'i'
		 * de la hash table(ht)*/
		node = ht->array[i];

		/* El proximo while es para recorrer todos los nodos que esten en el array de la
		 * hash table e ir imprimiendolos de la forma que nos muestran en el ejemplo en la letra */		  while (node != NULL)
		{
			printf("%s'%s': '%s'", print_comma, node->key, node->value);
			print_comma = ", ";
			node = node->next; /* iteramos por el array */
		}
		i++; /* Se itera por la hash table por la cantidad de "size" y para que "node" vaya
		cambiando para la posicion en la que se encuentre 'i'. */
	}
	printf("}\n"); /* Se imprime la llave final y un salto de linea */
}

#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element or NULL if key couldnt be found
 */

/* Este ej usa la logica del ejercicio anterior, sobretodo con la parte que habia que actualizar el
 * valor de la "key" si ya existia. */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* Se crea una variable de tipo unsigned long int "index" para poder usar la funcion que
	 * hicimos en la task anterior para obtener el indice de una key */
	unsigned long int index = 0;
	/* search_node --> la vamos a usar para buscar la "key" de la cual se quiere devolver
	 * su correspondiente "value". */
	hash_node_t *search_nod = NULL;

	/* Chequeamos que tanto la hash table que nos pasan como argumento como la "key" no sean nulos
	 * y si son nulos, devolvemos null y salimos de la funcion. */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* Le asignamos la funcion key_index a index. */
	index = key_index((unsigned char *)key, ht->size);

	/* Le asignamos a search_nod el nodo que este en el "index" (indice) que nos de "index".*/
	search_nod = ht->array[index];

	/* Se hace un while para recorrer siempre que search_nod no sea NULL y lo que hacemos
	 * es buscar con la funcion "strcmp" (string compare) si las "key" son iguales (en caso
	 * de que sean iguales se retorna cero) y si son iguales retornamos el valor que tenga
	 * asociado el search_nod. */
	while (search_nod != NULL)
	{
		if (strcmp(search_nod->key, key) == 0)
			return (search_nod->value);
		search_nod = search_nod->next; 
		/* Con esta linea iteramos sobre la linked list que hay dentro del nodo "search_nod" */
	}
	return (NULL); /* En caso de que no se haya encontrado la key que nos pasan como argumento
			  retornamos NULL tal cual nos indica la letra. */
}

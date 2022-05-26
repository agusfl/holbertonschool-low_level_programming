#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table that you want to add or update
 * @key: is the key, can not be an empty string
 * @value: is the value associated with the key
 * Return: 1 if it succeeded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Se crea una variable de tipo unsigned long int "index" para poder usar la funcion que
	 * hicimos en la task anterior para obtener el indice de una key */
	unsigned long int index = 0;
	hash_node_t *search_nod = NULL;
	hash_node_t *new_nod = NULL;

	/* Si la hash table, la key o el value son nulos entonces no hay nada que agregar o actualizar
	 * por lo tanto retornamos 0 tal cual nos indica la letra. */
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/* Utilizo la funcion para obtener la key que hicimos en la task 2 */
	index = key_index((unsigned char *)key, ht->size);

	/* Se le otorga memoria al nuevo nodo que se quiera agregar, va a ser de tamaño hash_node_t
	 * que es la estructura que tenemos creada para los nodos (contiene una key, un value y un
	 * puntero a next para la linked list). */
	new_nod = malloc(sizeof(hash_node_t));

	/* Si no se pudo alocar que se retorne 0 ya que es un error. */
	if (new_nod == NULL)
		return (0);

	/* A search_nod le asignamos el nodo que se encuentre en el indice que nos retorno la funcion
	 * key_index (utilizada en la linea 24 - es lo que le asignamos a "index").
	 * search_nod seria un nodo que creamos para buscar si la "key" que se pasa como argumento
	 * a la funcion ya existe y se quiere actualizar con el "value" que pasen como argumento, ya
	 * que esta funcion que estamos haciendo es tanto para agregar un nodo nuevo como para modificar
	 * un nodo existente. Para saber si el nodo existe lo que hacemos es comparar la key de
	 * search_nod con la "key" del argumento. */
	search_nod = ht->array[index];

	while (search_nod != NULL)
	{
	/* Se hace un if para ver que si la "key" que se pasa ya existe, ya que si la key de search_nod
	 * es igual a la key que se pasa como argumento lo que vamos a querer hacer es actualizar
	 * (update) el valor de dicho nodo por lo que se pase en "value" 
	 * Por lo tanto liberamos lo que este en search_value para hacer lugar para el nuevo valor
	 * que vamos a poner, le asignamos el valor nuevo con: search_nod->value = strdup(value)
	 * Liberamos el nuevo nodo y retornamos 1 ya que se actualizo el valor con exito. Se libera
	 * el nuevo nodo ya que lo que hicimos fue actualizar el nodo que ya existia y lo teniamos
	 * en: search_value por lo tanto no se necesito agregar un nuevo nodo (new_nod) asi que
	 * liberamos la memoria que le habiamos asignado al principio.*/
		if (strcmp(search_nod->key, key) == 0)
		{
			free(search_nod->value);
			search_nod->value = strdup(value);
			free(new_nod);
			return (1);
		}
		search_nod = search_nod->next;
	}

	/* Los pasos que siguen son para cuando no hay que actualizar el valor de un nodo ya existente
	 * en base a una "key" sino que hay que agregar un nodo al principio de la lista en el indice
	 * correspondiente. */
	new_nod->key = strdup(key); /* Le asignamos la key al nuevo nodo, duplicando lo que se 
				       pase en key */
	new_nod->value = strdup(value); /* Hacemos lo mismo pero para el "value". */
	new_nod->next = ht->array[index]; /* Linkeamos la linked list con el nuevo nodo que queremos
					     agregar.*/
	ht->array[index] = new_nod; /* Ahora indicamos que el primer nodo va a ser el nuevo nodo que
				       acabamos de agregar. */

	return (1); /* Si llegamos hasta aca es porque no hubo ningun problema y por lo tanto retornamos
		       1. */
}

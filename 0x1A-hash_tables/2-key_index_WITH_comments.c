#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: is the key to access to the value
 * @size: size of the array of the hash table
 * Return: the index at which the key-value pair should be stored in the array
 * of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	/* Se crea una variable de tipo unsigned long int para que tenga el mismo tipo que size
	 * y asi poder dividir una por la otra.*/

	index = hash_djb2(key); 
	/* A la variable creada la igualamos a la hash function (djb2 - que creamos en la task anterior)
	 * de la key que se pase como argumento. */
	return (index % size); 
	/* Por ultimo retornamos el modulo del index (que seria el valor de la hash function (djb2)) y el size
	 * La mayoria de hash functions funcionan de esta manera, para saber el indice se hace el modulo del
	 * valor de la key entre la cantidad de elementos que tenga el array (size).
	 * En el 2-main.c se puede ver que el tamaño (size) que va a tener el array es: 1024, por lo tanto
	 * se hace el modulo del valor que quieras saber el indice entre 1024 (size).
	 * Ejemplo en el primer elemento que se pasa para agregar a la hash table seria: s = "cisfun"
	 * Este elemento va a tener un valor de: 6953392314605 y lo vamos a encontrar en el indice: 237 del array */
}

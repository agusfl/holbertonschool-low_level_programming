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
	 * valor de la key entre la cantidad de elementos que tenga el array (size).*/
}

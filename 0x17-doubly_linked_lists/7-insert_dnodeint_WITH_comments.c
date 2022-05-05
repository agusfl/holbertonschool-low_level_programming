#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to the head of the list.
 * @idx: index to insert in the list
 * @n: value to insert
 * Return:address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *aux = *h;
	unsigned int cont = 0;

	new_node = malloc(sizeof(dlistint_t)); /* asginamos memoria para el nuevo nodo */
	if (new_node == NULL) /* si hubo problemas que se retorne NULL */
		return (NULL);
	new_node->n = n; /* asignamos el valor de n al nuevo nodo */
	new_node->prev = NULL, new_node->next = NULL; /* asignamos a NULL el puntero al nodo previo (prev) y 
							 al puntero al nodo siguiente (next) */
	if (idx == 0) /* Si el indice que nos pasan es el 0 hacemos lo siguiente: */
	{
		if (h == NULL || *h == NULL) /* si la lista esta vacia: */
		{
			*h = new_node; /* asignamos el nuevo nodo al inicio de la lista (ya que estaba vacia). */
			return (new_node); /* retornamos el nuevo nodo, no tuvimos que asignar el puntero previo
					      y el siguiente a NULL porque ya lo habiamos hecho mas arriba. */
		}
		new_node->next = *h; /* Si la lista no esta vacia, asignamos el puntero siguiente (next) del nuevo
					nodo al principio de la lista, ya que la posicion que se nos paso en el
					indice (idx) para agregar el valor 'n' es la posicion 0. */
		(*h)->prev = new_node; /*dereferenciamos el puntero a la lista 'h' y le indicamos que ahora el
					 puntero al nodo previo va a hacer el nuevo nodo (ya que se va a agregar en
					 la posicion 0 (la primera)). */
		*h = new_node; /* Ahora movemos el puntero h para que vuelva a apuntar al comienzo de la lista (que
				  ahora es el nuevo nodo). */
		return (new_node); /* Retornamos la lista con el nuevo nodo en el indice 0 */
	}
	while (cont < idx - 1) /* Aca lo que hacemos es recorrer la lista para buscar la posicion anterior al indice
				  que nos pasen para agregar el valor 'n'. Se entraria en este while siempre y cuando
				  no haya entrado en el if anterior. idx - 1 --> es para sacar la posicion anterior,
				  cont se va incrementando en el while y nos indica la cantidad de nodos de la lista */
	{
		if (aux->next  == NULL) /* Aca chequeamos si el nodo siguiente es NULL, en caso de que sea retornamos
					   NULL para que si pasan un indice mas grande que tu lista no de segmentation
					   fault. */
			return (NULL);
		aux = aux->next; /* iteramos la lista - y nos quedamos en aux en el nodo anterior al que nos piden
		que agreguemos con el indice. */
		cont++; /* se cuentan los nodos y se almacena en la variable "cont" */
	}
	if (aux->next == NULL) /* Esto seria para el caso que el indice que pasan es el ultimo nodo de la lista */
	{
		aux->next = new_node; /* Por lo tanto asignamos el nuevo nodo al final de la lista. */
		new_node->prev = aux; /* El nodo previo (prev) lo asignamos al aux ya que en este momento "aux" esta
					 posicionado en una posicion menos que el indice que nos pasan en "idx". */
		return (new_node); /* Retornamos la lista con el nuevo nodo en el final. */
	}
	/* El codigo que viene mas abajo ahora es para cuando el indice que pasan esta entre el inicio y el final de
	 * la lista. */
	new_node->next = aux->next; /* El next del nuevo nodo va a ser el siguiente al aux next (ya que aux estaba
				       posicionado en una posicion menos que donde queremos agregar el nuevo valor
				       por lo tanto aux->next nos va a dar la posicion en donde queremos agregar el
				       nuevo nodo. */
	aux->next->prev = new_node; /* Aca lo que hacemos es decir que el "prev" del nodo siguiente al que esta
				       posicionado "aux" va a ser igual al nuevo nodo (esto es para linkear la doubly
				       linked list y que se pueda ir tanto para adelante como para atras). */
	new_node->prev = aux; /* Ahora decimos que el prev del nuevo nodo va a apuntar a "aux". Esto es para linkear,
				 siempre en estos casos vamos a tener una "flechita" que va a apuntar al nodo previo
				 (el prev) y otra flechita que va a apuntar al nodo siguiente (next) aca estamos
				 linkeando lo que estaba en la lista (aux) con el nuevo nodo que agregamos (new_node)*/
	aux->next = new_node; /* idem explicacion anterior */
	return (new_node);
}

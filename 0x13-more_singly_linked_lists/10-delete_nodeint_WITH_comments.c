#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index 'index' of a linked list
 * @head: pointer to pointer of the linked list
 * @index: index of the list to be removed
 * Return: 1 if succeeded and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
/* Se declara una funcion llamada "delete_nodeint_at_index" que retorna un int y toma como argumento un puntero
 * de puntero llamado "head" de tipo listint_t y una variable llamada "index" de tipo unsigned int. */
{
	listint_t *tmp = *head;
	/* Declaro una variable temporal para usar luego al momento de eliminar el nodo especificado en el index 
	 * y lo igualamos al puntero head para que se posicione al incio de la lista. */
	listint_t *delete_node_next;
	/* Se declara otra variable de tipo listint_t que se va a usar para 'marcar' al siguiente nodo del cual se
	 * quiere eliminrar */
	unsigned int i = 0;
	/* Se declara una variable 'i' que usamos como contador, la declaramos como unsigned int para que no haya
	 * problemas cuando la comparemos con index que tmb es de tipo unsigned int. */

	if (*head == NULL)
	{
		return (-1);
	/* Si el comienzo de la lista (que es el puntero head) es nulo significa que la lista esta vacia, por lo tanto
	 * indicamos que se retorne -1 tal cual lo pide la letra. */
	}

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	/* Si el indice que nos pasan es 0 entonces significa que tenemos que eliminar el primer nodo de la lista, por
	 * lo tanto le indicamos al puntero "head" que salte uno en la lista pasando ahora a que el "head" de la lista
	 * sea lo que seria la posicion 1 de la lista, luego liberamos el espacio en memoria de "tmp" que tenia
	 * almacenado el "head" viejo y con eso eliminariamos el nodo del indice 0 si fuera el que se pide eliminar 
	 * Retornamos 1 tal cual nos indica la letra (en caso de exito retornar 1). */
	}

	for (i = 0; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;
	/* Hacemos un for para que se recorra siempre y cuando tmp sea distinto a NULL y i (nuestro contador) sea
	 * menor al indice que nos pasan menos una posicion (esto es para encontrar la posicion anterior a la que
	 * se nos pide que eliminemos mediante el indice) dentro del loop se itera por la lista con:
	 * tmp = tmp->next; hasta llegar al nodo anterior al que se quiere eliminar. */

	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	/* Si tmp es NULL o el siguiente a tmp (tmp->next) es NULL indicamos que retorne -1 ya que significa que
	 * la posicion (indicada con el indice) que se quiere eliminar es mayor a la cantidad de elementos (nodos)
	 * que hay en la lista, por lo tanto que retorne -1 y salga del programa. */

	delete_node_next = tmp->next->next;
	/* Igualamos nuestra variable "delete_node_next" al nodo siguiente al que queremos eliminar, esto lo indicamos
	 * con tmp->next->next; ya que tmp habia quedado posicionado desde el for de mas arriba en la posicion del
	 * nodo anterior al que nos indican que borremos con el index, por lo tanto lo movemos dos lugares en la lista
	 * con: ->next->next y quedamos en la posicion siguiente del nodo que queremos eliminar. */

	free(tmp->next);
	/* Liberamos con free a: tmp->next que siguiendo el razonamiento de arriba tmp->next seria el nodo que nos
	 * indicaron con el index que se queria borrar. */
	tmp->next = delete_node_next;
	/* Luego linkeamos a tmp nuevamente con el resto de la lista una vez borrado el elemento que se queria eliminar
	 * el resto de la lista se encuentra señalado por "delete_node_next". */
	return (1);
	/* Por ultimo si se llego hasta esta parte en el codigo indicamos que se retorne 1 ya que significa que todo
	 * se ejecuto correctamente. */
}

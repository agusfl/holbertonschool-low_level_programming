#include "lists.h"

/**
 * free_list - function to free a linked list of type list_t
 * @head: linked list to be freed
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	/**
	 * Aca le estamos indicando que se recorra el while siempre que el
	 * elemento al que se esta apuntando en la linked list (head) sea
	 * distinto de NULL ya que si fuera igual significa que se llego al
	 * final de la linked list y por lo tanto no hay lo que liberar con
	 * free. Se le tiene que indicar por un lado que se libere lo que
	 * se haya alocado dentro del string ("str") y por otro lado toda
	 * la linked list "head" ya que se guardo espacio en memoria para la
	 * linked list, por ultimo se indica con head = head->next que se vaya
	 * iterando con el puntero next por toda la linked list "head" ya que
	 * head apunta al principio de la lista linkeada y despues se va
	 * moviendo por cada elemento ya que next te lleva a la proxima
	 * direccion de memoria del proximo elemento de la lista hasta que se
	 * llega a NULL y se sale del while.
	 * No es necesario un return porque es una funcion void.
	 */
}

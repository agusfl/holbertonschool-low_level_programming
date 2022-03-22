#include "lists.h"

/**
 * reverse_listint - function to reverse data of a linked list
 * @head: pointer to the start of a linked list
 * Return: pointer to the first node of a reversed list
 */

listint_t *reverse_listint(listint_t **head)
/* Declaramos una funcion llamada "reverse_listint" que retorna un puntero de tipo listint_t y recibe como argumento
 * un puntero de puntero llamado "head" y de tipo listint_t. */
{
	listint_t *prev = NULL;
	listint_t *next = NULL;
	/* Se declaran dos variables que se van a utilizar para ir recorriendo la lista y moviendo los punteros
	 * para que se termine apuntando del final de la lista al comienzo y por lo tanto conseguir "reversear" la
	 * lista. "prev" va a apuntar al nodo previo a "head" y "next" al proximo y con estos 3 punteros vamos a
	 * lograr reversear la lista. */

	while (*head != NULL)
	/* Otra forma de poner esta condicion dentro del while es: while (*head) es lo mismo que decir que mientras
	 * que head sea distinta de NULL. */
	{
	next = (*head)->next;/* Hay que ponerlo entre parentesis a head porque sino no lo toma correctamente */
	(*head)->next = prev;
	prev = *head; /* A head le ponemos el * por que es un puntero de puntero y por lo tanto queremos
			 dereferenciarlo para acceder a su valor que como es un puntero de puntero seria la
			 direccion de memoria a la que apunta. */
	*head = next;
	/* Aca en la primer linea de codigo dentro del while se indica que la direccion de memoria de neustro
	 * puntero "next" pase a ser el siguiente a "head" por lo tanto si "head" comienza apuntando al elemento
	 * cero, (*head)->next seria el elemento 1.
	 * Tomar en cuenta que al puntero "prev" se lo incializo en NULL osea que esta apuntando a NULL, por lo tanto
	 * al igualar "next" al siguiente elemento de la lista y despues en la segunda linea de codigo del while
	 * igualar ese mismo elemento (el 1) a "prev" estariamos reverseando la lista, despues con la tercer linea
	 * de codigo dentro del while movemos "prev" al elemento dondeesta posicionado "*head" (igualando prev = *head) 
	 * y por ultimo en la cuarta y ultima linea de codigo movemos head al proximo elemento al igualar el puntero
	 * head a donde apunta el puntero next.
	 */
	}

	*head = prev;
	return (*head);
	/* Por ultimo igualamos el puntero head a prev (que ahora apunta hacia el comienzo de la lista reverseada) y
	 * retornamos el puntero al comienzo de la lista reverseada. */
}

#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: pointer to pointer of the linked list
 * @idx: index of the list where the new node should be added
 * @n: number to be added with the new node
 * Return: addres of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 0;
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	/* Le asignamos espacion con malloc al nuevo nodo creado de tipo listint_t */

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	/* Chequeamos que el puntero head no este vacio y que la memoria se haya alocado
	 * correctamente para el nuevo nodo "new_node", en caso que alguno sea igual a NULL
	 * indicamos que se retorne NULL y se salga del programa tal cual lo indica la letra. */
	}
	new_node->n = n; /* Le asignamos el valor "n" que pasen como argumento al nuevo nodo */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	/* Si el indice es igual a 0 entonces hay que poner el nuevo nodo al principio de la lista
	 * y retornar el nuevo nodo, primero indicamos al nuevo nodo que apunte al comienzo de la lista
	 * (al puntero head) para posicionarlo al inicio de la linked list y luego movemos el puntero
	 * "head" para que vuelva a apuntar al comienzo de la lista que ahora va a ser en el nuevo nodo. */
	}
	tmp = *head; /* Le indicamos a nuestro puntero temporal que apunte al comienzo de la lista (head) */
	while (cont < idx - 1)
	/* Aca lo que queremos ver es la posicion anterior a la que nos pasen en el indice para saber
	 * donde agregar el nuevo nodo, una forma de hacerlo es esta, posicionandonos una posicion antes
	 * del indice donde se quiere agregar al nuevo nodo y apuntamos a una posicion siguiente al indice
	 * donde se va a agregar el nuevo nodo, y luego apuntamos al resto de la lista al nuevo nodo
	 * y asi nos queda linkeada nuevamente y con el nuevo nodo agregado en la posicion seleccionada. */
	{
		tmp = tmp->next;
		cont++;
	/* En esta parte iteramos por la lista con la variable temporal (tmp = tmp->next) y vamos contando
	 * las iteraciones en el contador ("cont") para compararlo con el indice que nos pasan (que es donde
	 * se quiere posicionar al nuevo nodo). Por ejemplo en el 9-main.c el nuevo nodo se quiere posicionar
	 * en el lugar: 5. Entonces entraria al while ya que cont arranca en 0 y es menor a (5-1 = 4) por
	 * lo tanto nos movemos una posicion con tmp y se incrementa por uno el contador, vuelve a entrar
	 * con 1 y sigue siendo menor a 4 y asi hasta llegar a la cuarta poscion donde 4 no es menor a 4.
	 * En ese momento se sale del while loop y se pasa al resto del codigo. */
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		/* Se analiza que tmp no este vacio y si fuera el caso liberamos la memoria que habiamos
		 * asignado con malloc para "new_node" y retornamos NULL. */
		}
	}
	new_node->next = tmp->next;
	/* Igualamos el nuevo nodo al proximo nodo del que apuntaba "tmp" esto es para poner entre medio
	 * de la posicion siguiente a la que nos piden y una anterior. */
	tmp->next = new_node;
	/* Ahora apuntamos lo que estaba por detras de la posicion que nos pidieron en el indice al nuevo
	 * nodo para volver a linkear toda la lista y por ultimo retornamos el nuevo nodo. */
	return (new_node);
}

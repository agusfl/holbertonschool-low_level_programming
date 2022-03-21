#include "lists.h"

/**
 * get_nodeint_at_index - get node at specified index
 * @head: pointer to linked list
 * @index: index of the node to be returned
 * Return: value of the nth index of the list or NULL if does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont = 0;

	while (head != NULL)
	{
		if (cont == index)
		{
			return(head);
		}
		cont++;
		head = head->next;
	}
	return (NULL);
}

/**
 * Primero que nada se define una funcion llamada get_nodeint_at_index que retorna un puntero a una listint_t y
 * toma como argumentos un puntero a una listint_t y una variable "index" de tipo unsigned int.
 * Creo una variable para contar las iteraciones que se hagan en el caso de que cont no sea igual al index
 * que se esta buscando, la creo con el tipo unsigned int para que tenga el mismo tipo que el argumento "index"
 * y asi no tener problemas al momento de compararlas.
 * Dentro del while indicamos que se itere siempre y cuando no se haya llegado al final de la lista, ya que "head"
 * es un puntero que apunta a nuestra lista de tipo listint_t, le decimos que recorra todos los elementos (nodos) de
 * la misma hasta que sea distinta de NULL (que es el ultimo elemento(nodo) de la lista).
 * Si el contador (el cual inicializamos en 0 para que recorra toda la lista) es igual al index que pasan entonces
 * que retorne el puntero head que va a estar en la posicion del elemento de la lista que estamos buscando (el index
 * que nos pasen). Ponemos que retorne el nodo completo y no solo: head->n (que seria el valor del dato, porque
 * esto es lo que nos piden en la letra y se puede ver que en el 7-main.c cuando lo van a imprimir ellos acceden
 * al valor del dato poniendo: printf("%d\n", node->n);.
 * El cont++ se va incrementando cada vez que se recorre una posicion de la lista con: head = head->next.
 * Si el indice que nos pasn fuera el 0 no aumentaria el contador "cont" ni se pasaria al proximo elemento
 * de la lista ya que entraria directo en el if y retornaria el nodo "head".
 * En caso que el indice que nos pasen no se encuentre en la lista o que head este vacia y no sea distinta de NULL
 * sino que igual, indicamos que se retorne: NULL tal cual nos indica la letra.
 * Si hay un match con el indice que pasan se entra en el if y se retorna el nodo correspondiente y se termina la
 * funcion y no se va al ultimo: return (NULL), pero si no hay ningun match o head no es distinto de NULL se va
 * directo a ese mismo return(NULL).
 */

/**
 * Otra forma que habia usado para resolver este ejercicio fue: 
 *
 * listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
 * {
 * 	unisgned int cont = 0;
 *
 * 	while (head != NULL && cont < index)
 * 	{
 * 		cont++;
 * 		head = head->next;
 * 	}
 * 	if (cont == index)
 * 	{
 * 		return(head);
 * 	}
 * 	return(NULL);
 * }
 *
 * Es la misma logica pero escrito un poco distinto, analicemoslo tomando como ejemplo el indice que nos pasan
 * en el 7-main.c, pasan: node = get_nodeint_at_index(head, 5) - por lo tanto se quiere ver el indice 5 de la lista
 * y en el main se puede ver que usaron la funcion que habiamos creado antes de: add_nodeint_end para ir agregando
 * los nodos al final de la lista, al ver el main tmb podemos ver que el 5 elemento de la lista (siempre arrancando
 * de la posicion 0) seria el numero: 98.
 * Por lo tanto entraria en el while ya que head es distinto de NULL y el contador (que esta en 0) es menor a 5,
 * entonces se icnrementa el "cont" en uno y nos movemos por la lista un lugar con: head = head->next, se vuelve
 * a entrar al while 4 veces mas hasta que se llega a: cont = 5 y no se cumple la condicion de que cont sea menor
 * a index ya que seria: 5 < 5 lo cual no es verdadero y se sale del while, cont quedo en 5 por lo tanto es igual
 * al index y entra en el if (cont == index) y se devuelve el nodo de la posicion 5.
 */

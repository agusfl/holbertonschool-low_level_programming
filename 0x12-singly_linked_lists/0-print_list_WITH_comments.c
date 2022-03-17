#include "lists.h"

/**
 * print_list - prints all the elements of a list of our created 
 * structure: list_t
 * @h: linked list
 * Return: numbers of nodes
 */

size_t print_list(const list_t *h)
{

	unsigned int cont_nodes = 0;
	/* Declaramos una variable de tipo unsigned int (ya que en la estructura "list_t" el miembro "len"
	 * es de tipo unsigned int) llamada "cont_nodes" para usarla como contador de los nodos que se imprimen
	 */

	while (h != NULL)
	/* Hacemos un while para que itere siempre que nuestra varaible "h" de tipo "list_t" sea distinta de NULL
	 * ya que el ultimo nodo siempre apunta a NULL entonces al decirle "h" distinto de NULL se le esta indicando
	 * que recorra toda la singly linked list "h" hasta que llegue al ultimo nodo que apunta a NULL.
	 * En el 0-main.c se puede ver que ellos definieron el head y los miembros que va a tener la singly
	 * linked list y pusieron los printf y llamaron a nuestra funcion print_list.
	 */
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		/* Esto es para el 'caso border' que nos indican en la letra de si "str" (que es uno de los
		 * miembros definidos en la estructura "list_t") es igual a NULL que se imprima [0] (nil).
		 * Con el h = h->next le indicamos que vaya al siguiente nodo de "h" de la singly linked list
		 * esto tmb lo podemos ver en la estructura "list_t" (list_t es el alias que le dimos con typedef
		 * a la estructura "list_s" --> verlo en el lists.h cualquier cosa).
		 * Si no poniamos el h = h->next adentro de este if nos quedaba un while infinito ya que nunca
		 * pasaba al else, con el h = h->next le indicamos que itere al proximo elemento de la singly
		 * linked list y cuando llega a NULL sale del while.
		 */
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		/* Se indica que imprima el largo de elementos que tiene el string "str" con %u (se le ponen los []
		 * porque asi lo indican en el 0-main.c y con el %s es para imprimir el string --> esto lo 
		 * indicamos con: h->str.
		 */
		h = h->next;
		}
		cont_nodes++;
	}
	return (cont_nodes);/* Retorna la cantidad de nodos impresos */
}

/**
 * El h = h->next lo podriamos poner directamente una sola vez por fuera del else (despues de "cont_nodes") y 
 * quedaba bien tmb usandolo solo una vez.
 */

#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list of type listint_t
 * @head: pointer to pointer of the head of the list
 * Return: head nodes data or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
	/** Como nos pasan como argumento un puntero de puntero luego vamos a tener que trabajar con el puntero
	 * de "head" para poder acceder a los datos correctamente. */
{
	listint_t *tmp = NULL;
	/* Declaro una variable temporal de tipo puntero a listint_t (estructura creada por nosotros).
	 * Inicializo el puntero tmp en NULL como parte de buena practica.
	 */
	int retValue = 0;
	/* Se declara una variable para almacenar el valor (data) del elemento a eliminar de la lista
	 * Esto se hace porque asi lo indican en la letra: "returns the head node's data (n)" se tiene
	 * que retornar el "n" (en este caso es el integer del elemento que se esta eliminando, cualquier cosa
	 * ver la estructura de tipo listint_t en el archivo: lists.h), se inicializa la variable en 0 (no es
	 * extrictamente necesario pero es una buena practica).
	 */

	if (*head == NULL)
	{
		return (0);
	/**
	 * Chequeamos el caso de que el puntero head ya sea NULL, osea que este vacio, en dicho caso nos indican
	 * que retornemos 0.
	 */
	}
	else 
	{
		tmp = *head;
		retValue = tmp->n;
		*head = tmp->next;
		free(tmp);
	/**
	 * Aca lo que hacemos es guardar el puntero "head" en nuestra variable temporal ("tmp"), head esta apuntando
	 * al inicio de la lista por lo tanto acabamos de guardar el inicio de la lista en "tmp". Luego guardamos el
	 * valor de "n" (la data) que tiene el primer elemento de la lista (el que vamos a eliminar) en la variable
	 * creada para esto llamada "retValue".
	 * Ahora que ya guardamos el valor que tenemos que retornar podemos mover el puntero de "head" al siguiente
	 * elemento de la lista y asi "saltear" el primer elemento y dejarlo por fuera de la cadena linkeada que
	 * se tenia, esto lo hacemos con: *head = tmp->next ponemos tmp->next ya que tmp lo habiamos igualado al
	 * inicio de la lista asi que si iteramos una posicion con tmp->next pasamos al segundo elemento y dejamos
	 * el primero afuera. Luego liberamos tmp con free, ya que es el elemento que queriamos eliminar y que
	 * estaba guardado en "tmp" nuestra variable temporal que usamos para eliminar el primer elemento.
	 */
	}
	return (retValue); /* Se retorna el valor del elemento eliminado que almacenamos en la variable "retValue" */
}


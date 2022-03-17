#include "lists.h"

/**
 * print_before_main - Function to execute before main
 */

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	/**
 	* Para este ejercicio usamos en nuestro header file: lists.h el prototipo:
 	* void print_before_main(void) __attribute__ ((constructor)); el cual nos
 	* permmite que esta funcion se ejecute antes que la de 100-main.c por eso es
 	* que se imprime primero lo que indicamos con el printf en esta funcion
 	* (print_before_main) antes que lo que se indica con el printf en la funcion
 	* dentro de 100-main.c
 	* El atribute "constructor" es lo que nos permite que se imprima antes que lo
 	* que esta en main, hay otro atributo llamado: "destructor" que perminte que
 	* la funcion se ejecute despues que la de main, pero aca nos pedian antes
 	* por eso no se uso.
	* Tmb podriamos haber puesto directo en esta funcion: void __attribute__ ((constructor)) print_before_main()
	* en lugar de: void print_befor_main (void) --> y no tendriamos que agregar en lists.h el prototipo
	* que indique mas arriba.
 	*/
}

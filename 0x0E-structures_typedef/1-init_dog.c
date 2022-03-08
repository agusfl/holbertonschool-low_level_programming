#include "dog.h"

/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: variable of type struct dog
 * @name: first member of struct - dog name
 * @age: second member of struct - dog age
 * @owner: third member or struct - dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}

	/**
	 * Primero se valida que si d es null que salga, como la funcion es de
	 * tipo 'void' no se espera un return, no hay porque ponerlo, pero se
	 * puede poner un 'return;' por fuera del if y va a estar bien tmb
	 * porque seria como que no retorne nada. Si d es null no hay nada
	 * para inicializar y termina el programa y si no es null se inicializa
	 * con el codigo que indicado.
	 * En este caso creamos una funcion llamada "init_dog" que toma como
	 * argumentos una struct dog que toma un puntero llamado 'd' y despues
	 * se definen los 3 members que toma la estructura d (dog) que son
	 * nombre, anios y duenio. Como la estructura se la pone como un
	 * puntero para poder inicializar esta estructura tenemos que hacerlo
	 * de la forma para punteros, con '->' o con '(*d).'nombre del member''
	 * En el main te pasan primero la direccion de el puntero 'my_dog'.
	 */
}

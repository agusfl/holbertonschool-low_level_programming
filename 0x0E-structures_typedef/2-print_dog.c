#include "dog.h"

/**
 * print_dog - prints the info of struct dog
 * @d: a pointer variable of type struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age < 0)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);
	}
	return;
	/**
	 * Primero le indico que si la estructura d es distinta de NULL que
	 * ejecute el codigo ya que no nos pasaron un valor NULL. Pero si nos
	 * pasan un valor NULL que salga del programa con el 'return'.
	 * Primero hago el if else comun que solemos usar y para el owner uso
	 * el operador nuevo que vimos de "ternary operator" que seria una
	 * forma distinta de hacer el if else (tmb lo podria hacer con el if
	 * else como hice para el caso de la variable name y age dentro de la
	 * estructura 'dog'. Para 'age' le puse < 0 ya que no puedo comparar
	 * una variable de tipo float con NULL que no es numerica y es de tipo
	 * void, y como la edad no puede ser menor a cero es que le pongo que
	 * imprima '(nil)' en ese caso y si no osea si es igual a cero o mayor
	 * que imprima la edad.
	 * Aca hay que imprimir la estructura de Name, Age, Owner con lo que se
	 * pase en el struct que pongan en el main, en este caso se llama
	 * 'my_dog'.
	 */
}

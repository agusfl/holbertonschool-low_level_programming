#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);

    /**
     * Aca como en el "dog.h" pusimos el prototipo del typedef llamandole a la
     * estructura dog que tenaimos creada: dog_t podemos poner dog_t my_dog;
     * y lo que hace es crear una varaible my_dog que es una estructura como
     * dog (con las mismas variables (se compone por los mismos members) que
     * la estrucutra dog), se podria poner 'struct dog' en lugar de 'dog_t' y
     * anda igual. En conclusion el typedef es como un alias para las
     * estructuras y para que no tengas que estar poniendo todo el dia el tipo
     * 'struct' adelante de la estructura que crees cuando la queres llamar
     */
}

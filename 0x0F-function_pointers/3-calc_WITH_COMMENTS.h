#ifndef PROTOTYPES_HEADER
#define PROTOTYPES_HEADER

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * Se indican los prototipos de cada una de las funciones de la calculadorita
 * que estamos haciendo y por ultimo se pone el prototipo de la funcion que nos
 * va a permitir seleccionar la funcion correcta para hacer la operacion que se
 * nos pida por el usuario.
 */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif

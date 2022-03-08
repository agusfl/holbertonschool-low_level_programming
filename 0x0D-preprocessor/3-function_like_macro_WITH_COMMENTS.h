#ifndef ABS_MACRO
#define ABS_MACRO

#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif

/**
 * Aca lo que se hace es una funcion con "macro arguments" y se usa el "ternary operator" que sirve
 * para hacer un a especie de if else pero en una misma linea, primero se ve la condicion, en este
 * caso x < 0 y despues si x es menor a cero se ejecuta la exprecion que viene despues del '?' y si 
 * no se ejecuta la exprecion que viene despues de ':'. En esta macro funcion (function like macro)
 * lo que se quiere es tener el valor absoluto de x (que es una variable para el numero que pasen)
 * por eso si x es menor a cero se le agrega un menos adelante de la primer exprecion para que convierta
 * el valor negativo a positivo.
 */

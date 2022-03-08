#ifndef OBJECT_LIKE_MACRO
#define OBJECT_LIKE_MACRO

#define SIZE 1024

#endif

/**
 * Utilizo el "once only headers" que seria el ifndef y define para que solo
 * se incluya una vez el header ya que si se incluye dos veces, por error o el
 * motivo que sea podria ocasionar problemas. El ifndef seria: si no hay
 * definicion defini ... tal cosa. Entonces si el header ya se incluyo, la
 * condicion de ifndef va a ser falsa y no se va a volver a incluir.
 * Despues con define SIZE defino una macro que cuando se expanda al hacer el
 * prcoeso de "preprocess" cuando se compile va a cambiar "SIZE" donde aparezca
 * por el valor que le dimos de: 1024.
 */

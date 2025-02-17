/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#ifndef EJERCICIO_H
#define EJERCICIO_H
#include "libreria.h"
#include <stdbool.h>



bool verificarBalanceo(pila_t* pila);
/*
esta función verifica si los símbolos de apertura y cierre (paréntesis, llaves y corchetes) en un archivo esta correctamente balanceados.

@param nombreArchivo es el archivo que se verificara
@return no tiene debido a que es un void
@pre la pila debe estar inicializada antes de la funcion
@post Si la pila no estaba vacia, la funcion retornara el valor del elemento en la cima de la pila sin modificar la pila.
*/

#endif

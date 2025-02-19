/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#ifndef EJERCICIO_H
#define EJERCICIO_H
#include "libreria.h"
#include <stdbool.h>



bool verificarBalanceo(pila_t* pila);
/*
esta función verifica si el archivo.txt esta balanceado

@param pila es el stack que va ayudar a verificar si esta balanceado el archivo 
@return true si esta balanceado y false si no lo esta
@pre la pila debe estar inicializada antes de la funcion y el archivo debe existir
@post true o un false dependiendo del funcionamiento del archivo
*/


void libera_pila(pila_t *pila);
/*
esta funcion libera todos los nodos del stack

@param pila es el stack al cual se le va liberar los nodos
@return no tiene debido a que es un void
@pre tiene que existir una pila
@post la pila quedara vacia
*/

#endif

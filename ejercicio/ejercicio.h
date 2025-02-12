/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#ifndef EJERCICIO_H
#define EJERCICIO_H


typedef struct {
    char elementos[100];
    int indices[100]; 
    int tope;
}Pila;


void inicializarPila(Pila *pila);
/* 
esta funcion se asegura de incializar el stack en -1 para saber que esta vacia

@param pila es el stack que se inicializa 
@return nada porque es un void
@pre tiene que estar las pila creada
@post el tope del stack quedara en -1
*/
int estaVacia(Pila *pila);
/*
esta funcion verifica si la pila esta vacia

@param pila es el stack a verificar
@return true si la pila es igual a -1 y false si no lo es
@pre debe haber una pila existente
@post devuelve true o false dependiendo de si esta vacia o no
*/
void push(Pila *pila, char valor, int indice);
/*
esta funcion agraga un elemento en la cima del stack

@param pila es la pila a la que se le va agregar el elemento
@param valor es el valor a añadir en la pila
@param indice numero entero que indica la posicion del elemento
@return sin retorno
@pre tiene que exitir la pila
@post el elemento fue agregado a la cima de la pila

*/
char pop(Pila *pila, int *indice);
/*
esta funcion elimina un elemento del stack
@param pila es la pila a la que se le va quitar el elemento de la cima
@param indice numero entero que indica la posicion del elemento
@return devuelve la pila con el elemento eliminado
@pre tiene que existir el stack con elementos
@post el stack con su modificacion
*/
char peek(Pila *pila);
/*
 esta funcion devuelve el valor del elemento de la cima sin eliminarlo

 @param pila es el stack sobre el cual actua la funcion
@return retorna el valor del ultimo elemento agregado
@pre tiene que existir la pila con los valores asignados
@post se obtendra el valor de la cima del elemento
*/

void verificarBalanceo(const char *nombreArchivo);
/*
esta función verifica si los símbolos de apertura y cierre (paréntesis, llaves y corchetes) en un archivo esta correctamente balanceados.

@param nombreArchivo es el archivo que se verificara
@return no tiene debido a que es un void
@pre la pila debe estar inicializada antes de la funcion
@post Si la pila no estaba vacia, la funcion retornara el valor del elemento en la cima de la pila sin modificar la pila.
*/

#endif

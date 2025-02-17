/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#ifndef LIBRERIA_H
#define LIBRERIA_H

typedef struct Nodo
{
    char dato;
    struct Nodo* siguiente;
}Nodo_t;

typedef struct
{
    Nodo_t* inicio;
    int tope;
}pila_t;


void inicializarPila(pila_t *pila);
/* 
esta funcion se asegura de incializar el stack en -1 para saber que esta vacia

@param pila es el stack que se inicializa 
@return nada porque es un void
@pre tiene que estar las pila creada
@post el tope del stack quedara en -1
*/

int estaVacia(pila_t *pila);
/*
esta funcion verifica si la pila esta vacia

@param pila es el stack a verificar
@return true si la pila es igual a -1 y false si no lo es
@pre debe haber una pila existente
@post devuelve true o false dependiendo de si esta vacia o no
*/

void push(pila_t *pila, char valor);
/*
esta funcion agraga un elemento en la cima del stack

@param pila es la pila a la que se le va agregar el elemento
@param valor es el valor a añadir en la pila
@param indice numero entero que indica la posicion del elemento
@return sin retorno
@pre tiene que exitir la pila
@post el elemento fue agregado a la cima de la pila

*/

void pop(pila_t *pila);
/*
esta funcion elimina un elemento del stack
@param pila es la pila a la que se le va quitar el elemento de la cima
@return devuelve la pila con el elemento eliminado
@pre tiene que existir el stack con elementos
@post el stack con su modificacion
*/


#endif

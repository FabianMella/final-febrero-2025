/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#include "libreria.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void test_inicializarPila(pila_t* pila) 
{

    inicializarPila(pila);
    assert(pila->inicio == NULL && pila->tope == -1);
}

void test_estaVacia(pila_t* pila) 
{
    
    inicializarPila(pila);
    assert(estaVacia(pila) == -1);
    push(pila, 'A', 0);
    assert(!estaVacia(pila));
}

void test_push(pila_t* pila) 
{
    
    inicializarPila(pila);
    push(pila, 'A', 0);
    assert(!estaVacia(pila));
    assert(pila->tope == 0);
}

void test_pop(pila_t* pila) 
{
    
    inicializarPila(pila);
    push(pila, 'A', 0);
    pop(pila,0);
    assert(estaVacia(pila));
}

int main() 
{
    pila_t* pila;
    printf("comienzo de prueba");
    test_inicializarPila(pila);
    test_estaVacia(pila);
    test_push(pila);
    test_pop(pila);

    printf("fin");
    return 0;
}

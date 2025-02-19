/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#include "libreria.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void test_inicializarPila(pila_t* pila) 
{
    assert(pila->inicio == NULL && pila->tope == -1);
}

void test_estaVacia(pila_t* pila) 
{
    assert(estaVacia(pila));
    push(pila, 'A',0);
    assert(!estaVacia(pila));
    pop(pila);
}

void test_push(pila_t* pila) 
{
    push(pila, 'A',0);
    assert(!estaVacia(pila));
    pop(pila);
    assert(pila->tope == -1);
}

void test_pop(pila_t* pila) 
{
    push(pila, 'A',0);
    pop(pila);
    assert(estaVacia(pila));
}

int main() 
{
    pila_t* pila = (pila_t*)malloc(sizeof(pila_t));
    if (pila == NULL) 
    {
        printf("Error al asignar memoria.\n");
    }else
    {
        inicializarPila(pila);
        printf("comienzo de prueba");
        
        test_inicializarPila(pila);
        test_estaVacia(pila);
        test_push(pila);
        test_pop(pila);
    
        printf("\nfin");
    }
   
    return 0;
}

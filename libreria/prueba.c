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
    if (!estaVacia(pila))
    {
        printf("No debiera de contener nada 1\n");
    }
    push(pila, 'A',0);
    if (estaVacia(pila))
    {
        printf("debiera de contener algo 1\n");
    }
    pop(pila);
}

void test_push(pila_t* pila) 
{
    push(pila, 'A',0);
    if (estaVacia(pila))
    {
        printf("debiera de contener algo 2\n");
    }
    pop(pila);
    if (!estaVacia(pila))
    {
        printf("debiera estar vacia 2\n");
    }
}

void test_pop(pila_t* pila) 
{
    push(pila, 'A',0);
    pop(pila);
    if (!estaVacia(pila))
    {
        printf("debiera estar vacia 3\n");
    }
}

int main() 
{
    pila_t* pila = (pila_t*)malloc(sizeof(pila_t));
    if (pila == NULL) 
    {
        printf("Error al asignar memoria.\n");
    }else
    {
        printf("Comienzo de prueba\n");
        inicializarPila(pila);

        printf("test incializarpila...\n");
        test_inicializarPila(pila);

        printf("test estavacia...\n");
        test_estaVacia(pila);

        printf("test push...\n");
        test_push(pila);

        printf("test pop...\n");
        test_pop(pila);
    
        printf("\nfin");
    }
    free(pila);
    return 0;
}

/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include "ejercicio.h"
#include "ejercicio.c"
#include "libreria.c"


int main()
{
    
    pila_t *pila;
    char indice;
    int ultimo;

    
    verificarBalanceo(indice,ultimo);

    if(!estaVacia(pila)) 
    {
        printf("Error de balanceo: '%c' en la posicion %d no tiene cierre\n", indice, ultimo);
    }
    else
    {
        printf("Los símbolos están balanceados.\n");
    }
    return 0;
}

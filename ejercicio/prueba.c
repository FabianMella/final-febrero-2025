/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */


#include "ejercicio.h"
#include <assert.h>
#include <stdio.h>
#define MAX 100

int main() 
{
    Pila pila;
    inicializarPila(&pila);

    printf("Probando la pila...\n");

   
    if (estaVacia(&pila)) 
    {
        printf(" La pila esta vacia al inicio.\n");
    } 
    else 
    {
        printf(" ERROR: La pila no esta vacia al inicio.\n");
    }

   
    push(&pila, 'A', 1);
    push(&pila, 'B', 2);
    push(&pila, 'C', 3);
    printf(" Se agregaron elementos a la pila.\n");


    char tope = peek(&pila);
    if (tope == 'C') 
    {
        printf(" El tope de la pila es correcto C.\n");
    } 
    else 
    {
        printf(" ERROR: El tope de la pila deberia ser 'C', pero es '%c'.\n", tope);
    }

    
    int indice;
    char valor = pop(&pila, &indice);
    if (valor == 'C' && indice == 3) 
    {
        printf(" Se extrajo correctamente 'C' de la pila.\n");
    } 
    else 
    {
        printf(" ERROR al extraer 'C'.\n");
    }

    valor = pop(&pila, &indice);
    if (valor == 'B' && indice == 2) 
    {
        printf(" Se extrajo correctamente 'B' de la pila.\n");
    } 
    else 
    {
        printf(" ERROR al extraer 'B'.\n");
    }

    
    pop(&pila, &indice); 
    if (estaVacia(&pila)) 
    {
        printf(" La pila está vacía después de eliminar todo.\n");
    } 
    else 
    {
        printf(" ERROR: La pila deberia estar vacía pero no lo está.\n");
    }


    printf("\n Probando balanceo de paréntesis en 'archivo.txt'...\n");
    verificarBalanceo("archivo.txt");

    return 0;
}
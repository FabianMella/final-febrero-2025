/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */
 
#include "libreria.h"
#include <stdlib.h>
#include <stdio.h>

void inicializarPila(pila_t *pila) 
{
   pila->tope = -1;
   pila->inicio= NULL;
}
 
int estaVacia(pila_t *pila) 
{
   return pila->tope == -1;
}

void push(pila_t *pila, char valor,int posicion) 
{
    int i=0;
    Nodo_t* nuevonodo= (Nodo_t*)malloc(sizeof(Nodo_t));
    Nodo_t* temp = pila->inicio;
    Nodo_t* anterior = NULL;
    while (temp != NULL && i < posicion) 
    {
        anterior = temp;
        temp = temp->siguiente;
        i++;
    }

    if (anterior == NULL) // si esta fuera de rango la agrego al final
    {
        nuevonodo->siguiente = pila->inicio;
        pila->inicio = nuevonodo;
    } 
    else 
    {
        nuevonodo->siguiente = temp;
        anterior->siguiente = nuevonodo;
    } 
    nuevonodo->dato = valor;
}
 
void pop(pila_t *pila,int posicion) 
{
    
    int i=0;
    Nodo_t *temp= pila->inicio;
    if (posicion == 0) 
    {
        
        
        free(temp);
        pila->tope--;
        
    }
    else
    {
        Nodo_t* temp = pila->inicio;
        Nodo_t* anterior = NULL;
        while( temp != NULL && i<posicion)
        {
            anterior = temp;
            temp = temp->siguiente;
            i++;
        }
        anterior->siguiente = temp->siguiente;
        free(temp);
        pila->tope--;
    }    
   
}
 

 
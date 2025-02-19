/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */
 
#include "libreria.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

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

    Nodo_t* nuevonodo = (Nodo_t*)malloc(sizeof(Nodo_t));
    if (nuevonodo == NULL) 
    {
        perror("Error: No se pudo asignar memoria para el nuevo nodo.\n");
        return;
    }

    nuevonodo->dato = valor;
    nuevonodo->siguiente = pila->inicio; // Insertar al inicio de la pila
    pila->inicio = nuevonodo;
    nuevonodo->posicion=posicion;
    pila->tope++;
}
 
void pop(pila_t *pila) 
{

    Nodo_t *temp = pila->inicio;
    if(pila->tope == -1)
    {
        assert(!estaVacia(pila));
    }else
    {
        if (pila->tope == 0)
        {
            pila->inicio = temp->siguiente;
            free(temp);
            pila->inicio=NULL;
            pila->tope = -1; 
            
        } 
        else 
        {
            Nodo_t *anterior = NULL;
           
            while (temp != NULL) 
            {
                anterior = temp;
                temp = temp->siguiente;
            }
            if (anterior != NULL)  
            {
                anterior->siguiente = NULL; // Desconectar el ultimo nodo
            }
                free(temp);
                pila->tope--;
            
        }   

    }
    
}
 

 
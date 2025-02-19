/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */
#include "libreria.h"
#include "ejercicio.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.c"


bool verificarBalanceo(pila_t* pila) 
{
    FILE *archivo = fopen("archivo.txt", "r");
    if (!archivo) 
    {
        perror("Error al abrir el archivo");
        return 0;
    }

    inicializarPila(pila);
    int posicion=0;
    char caracter;
    while ((caracter = fgetc(archivo)) != EOF) 
    {
            if (caracter == '(' || caracter == '[' || caracter == '{') 
            {
                push(pila, caracter,posicion);
                posicion++;
            } 
            else if (caracter == ')' || caracter == ']' || caracter == '}') 
            {
                pop(pila);
                posicion++; 
            }else
            {
                posicion++;
            }
        
    }

    fclose(archivo);
    return estaVacia(pila);  
}


void libera_pila(pila_t *pila)
{
    if(pila->inicio != NULL)
    {
        while(pila->tope > -1)
        {
            Nodo_t *anterior = NULL;
            Nodo_t *temp=pila->inicio;
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
    
/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */
#include "libreria.h"

#include "ejercicio.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificarBalanceo(char indice,int ultimo) 
{
    FILE *archivo = fopen("archivo.txt", "r");
    char caracter;
    int posicion=-1;
    if (!archivo) 
    {
        perror("No se pudo abrir el archivo.\n");
    }else
    { 
        pila_t* pila;
        inicializarPila(pila);
        
            while((caracter = fgetc(archivo)) != EOF) 
            {
                if (caracter == '(' || caracter == '{' || caracter == '[') 
                {
                    push(pila, caracter, posicion);
                } else if (caracter == ')' || caracter == '}' || caracter == ']') 
                {
                    pop(pila, posicion);
                }
                posicion++;
                indice=caracter;
                ultimo=posicion;
            }
    
    }
    fclose(archivo);
}
 



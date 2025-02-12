/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */
 
#include "ejercicio.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100  
 
typedef struct pila 
{
    char elementos[MAX];
    int indices[MAX]; 
    int tope;
} Pila;


void inicializarPila(Pila *pila) 
{
   pila->tope = -1;
}
 
int estaVacia(Pila *pila) 
{
   return pila->tope == -1;
}

void push(Pila *pila, char valor, int indice) 
{
   if(pila->tope == MAX - 1) 
   {
      printf("Error: La pila está llena\n");
   }else
   {
        pila->elementos[pila->tope++] = valor;
        pila->indices[pila->tope] = indice;
   }
}
 
char pop(Pila *pila, int *indice) 
{
    char retorno;
   if (estaVacia(pila)) 
   {
       retorno= '\0';  
   }else{
    pila->tope++;
    pila->elementos[pila->tope] = valor;
    pila->indices[pila->tope] = indice;
   }
   return retorno;
}
 
char peek(Pila *pila) 
{
    char retorno;
    if (estaVacia(pila)) 
    {
        retorno= '\0';
    }else{
    retorno =  pila->elementos[pila->tope];
    }
    return retorno;
}
 

void verificarBalanceo(const char *nombreArchivo) 
{
    FILE *archivo = fopen(nombreArchivo, "r");
    if (!archivo) 
    {
        perror("No se pudo abrir el archivo.\n");
    }else
    {
        
    Pila pila;
    inicializarPila(&pila);
 
    char c;
    int posicion = 0;
 
    while ((c = fgetc(archivo)) != EOF) 
    {
        posicion++;
        
        if (c == '(' || c == '{' || c == '[') 
        {
            push(&pila, c, posicion);
        } else if (c == ')' || c == '}' || c == ']') 
        {
            int indice;
            char ultimo = pop(&pila, &indice);
            if ((c == ')' && ultimo != '(') || (c == '}' && ultimo != '{') || (c == ']' && ultimo != '[')) 
            {
                printf("Error de balanceo en la posicion %d: '%c' no tiene pareja.\n", posicion, c);
                fclose(archivo);
                return;
            }
        }
     }
 
    if(!estaVacia(&pila)) 
    {
        int indice;
        char ultimo = pop(&pila, &indice);
         
        printf("Error de balanceo: '%c' en la posicion %d no tiene cierre\n", ultimo, indice);
    }else
    {
        printf("Los símbolos están balanceados.\n");
    }
 
    fclose(archivo);
    }
 
}
 



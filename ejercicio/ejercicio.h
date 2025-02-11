/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#ifndef EJERCICIO_H
#define EJERCICIO_H


typedef struct {
    char elementos[100];
    int indices[100]; 
    int tope;
}Pila;


void inicializarPila(Pila *pila);

int estaVacia(Pila *pila);
void push(Pila *pila, char valor, int indice);
char pop(Pila *pila, int *indice);
char peek(Pila *pila);
void verificarBalanceo(const char *nombreArchivo);


#endif

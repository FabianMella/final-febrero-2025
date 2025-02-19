/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */


#include "ejercicio.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
void test_verificarBalanceo(pila_t *pila) 
    {
        
        // caso balanceado
        FILE *archivo = fopen("archivo.txt", "w");
        fprintf(archivo, "()[]{}");
        fclose(archivo);
        assert(verificarBalanceo(pila) == true);
    
        //caso balanceado
        archivo = fopen("archivo.txt", "w");
        fprintf(archivo, "([)]");
        fclose(archivo);
        assert(verificarBalanceo(pila) == false);
    
        // caso desbalanceado
        archivo = fopen("archivo.txt", "w");
        fprintf(archivo, "({[");
        fclose(archivo);
        assert(verificarBalanceo(pila) == false);
    
        // archivo vacio
        archivo = fopen("archivo.txt", "w");
        fclose(archivo);
        assert(verificarBalanceo(pila) == true);
        
        
        printf("Todas las pruebas pasaron correctamente.\n");
    }

void test_liberar(pila_t *pila)
{
    libera_pila(pila);
    if(estaVacia(pila))
    {
        printf("perfeccion");
    }else
    {
        printf("error al liberar");
    }
}
int main() 
{
    pila_t *pila= (pila_t*)malloc(sizeof(pila_t));
    printf("Comenzando...\n");

    test_verificarBalanceo(pila);
    test_liberar(pila);
    free(pila);
    printf("\nfin");
    return 0;
}
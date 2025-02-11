/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include "ejercicio.h"
#include "ejercicio.c"



int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <nombre_del_archivo>\n", argv[0]);
        return 1;
    }
    verificarBalanceo(argv[1]);
    return 0;
}

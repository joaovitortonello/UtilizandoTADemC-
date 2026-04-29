#include "Tad.h"

void AcessarVazio(BANCARIO* clientes, int* pos) {

    int aux;

    if (clientes[*pos].numero == -9999999) {

        clientes[*pos].numero = *pos;

    }

    else {

        for(int i = 0 ; i < 11; i++) {

            *pos = i;

            aux = clientes[*pos].numero;

            if (aux < 0) {

                clientes[*pos].numero = *pos;    

                i = 10;

            }

            if (*pos == 10) {

                printf("NÚMEROS DE CONTAS EXCEDIDO!!\n");

                *pos = 100000;

            }

        }

    }

}
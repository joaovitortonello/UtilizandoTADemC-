#include "Tad.h"

void MostrarConta(BANCARIO* clientes ,int* pos) {

    printf("Informe a conta que deseja visualizar:\n");

    int aux = 0;

    scanf("%d", &aux);

    *pos = aux;

    system("clear");

    printf("====CONTA LOCALIZADA====\n");
    printf("Número da conta [%d]\n", clientes[*pos].numero);
    printf("Nome do Titular: %s", clientes[*pos].titular);
    printf("Saldo: R$ %.2f\n", clientes[*pos].saldo);

    sleep(10);

    system("clear");

}
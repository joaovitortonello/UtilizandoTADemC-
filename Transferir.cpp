#include "Tad.h"

void Transferir(BANCARIO* clientes) {

    int NTransferidor, NTransferido;

    printf("Informe o numero da conta do Transferidor:\n");
    scanf("%d", &NTransferidor);
    printf("Informe o numero da conta do Transferido:\n");
    scanf("%d", &NTransferido);

    ConferirDeposito(clientes, &NTransferidor, &NTransferido);

}
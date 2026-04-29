#include "Tad.h"

void ConferirDeposito(BANCARIO* clientes, int* Depositante, int* Depositado) {

    float ValorDeposito;

    printf("====DADOS DO TRANSFERIDO====\n");
    printf("Numero da conta: [%d]\n", clientes[*Depositado].numero);
    printf("Nome do Titular: %s", clientes[*Depositado].titular);
    printf("SALDO: %.2f\n", clientes[*Depositado].saldo);


    printf("====DADOS DO TRANSFERIDOR====\n");
    printf("Numero da conta: [%d]\n", clientes[*Depositante].numero);
    printf("Nome do Titular: %s", clientes[*Depositante].titular);
    printf("SALDO: %.2f\n", clientes[*Depositante].saldo);
    printf("Valor que deseja transferir!\n");
    scanf("%f", &ValorDeposito);

    if(ValorDeposito > clientes[*Depositante].saldo) {

        printf("ERRO, saldo insuficiente!!\n");

    }

    else {

        clientes[*Depositado].saldo = clientes[*Depositado].saldo + ValorDeposito;

        clientes[*Depositante].saldo = clientes[*Depositante].saldo - ValorDeposito;

        printf("====DADOS DO TRANSFERIDO====\n");
        printf("Numero da conta: [%d]\n", clientes[*Depositado].numero);
        printf("Nome do Titular: %s", clientes[*Depositado].titular);
        printf("SALDO: %.2f\n", clientes[*Depositado].saldo);


        printf("====DADOS DO TRANSFERIDOR====\n");
        printf("Numero da conta: [%d]\n", clientes[*Depositante].numero);
        printf("Nome do Titular: %s", clientes[*Depositante].titular);
        printf("SALDO: %.2f\n", clientes[*Depositante].saldo);

    }

}
#include "Tad.h"

void lbt() {

    int c;

    while((c = getchar()) != '\n' && c != EOF);
}

void CriarConta (BANCARIO* clientes, int* pos) {

    AcessarVazio(clientes, pos);

    if (*pos > 10) {

        system("clear");

        printf("TODAS AS POSIÇÕES OCUPADAS!!\n");

    }

    else {

        lbt();
        printf("Criar Conta\n");
        printf("Numero da Conta: [%d]\n", *pos);
        printf("Informe o Titular:\n");
        fgets(clientes[*pos].titular,sizeof(clientes->titular), stdin);
        printf("Informe o Saldo:\n");
        scanf("%f", &clientes[*pos].saldo);

        printf("\nCliente cadastrado com sucesso.\n");
        printf("Numero da Conta: [%d]\n", *pos);
        printf("Nome do Titular: %s", clientes[*pos].titular);
        printf("Saldo: %.2f\n", clientes[*pos].saldo);

        sleep(5);

        system("clear");

    }

}
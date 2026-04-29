#include "Tad.h"

void Depositar(BANCARIO* clientes, int* pos) {

    pos = NULL;

    int aux = 0;

    printf("Informe o número da conta que será depositado!!\n");
    scanf("%d", &aux);

    pos = &aux;

    printf("====CONTA LOCALIZADA====\n");
    printf("Número da conta [%d]\n", clientes[*pos].numero);
    printf("Nome do Titular: %s", clientes[*pos].titular);
    printf("Deseja prosseguir?\n1 - Sim\n2 - Não\n");

    int permissao = 0;

    scanf("%d", &permissao);

    system("clear");

    if(permissao == 1) {

        printf("Digite o valor do depósito:\n");
        
        float deposito = 0;

        scanf("%f", &deposito);

        printf("====CONFIRMAÇÃO DE DEPÓSITO====\n");
        printf("Número da conta [%d]\n", clientes[*pos].numero);
        printf("Nome do Titular: %s", clientes[*pos].titular);
        printf("Valor a depositar: %.2f\n", deposito);

        printf("Confirmar?\n1 - Sim\n2 - Não\n");

        int confirmar = 0;

        scanf("%d", &confirmar);

        if (confirmar == 1) {

            clientes[*pos].saldo = clientes[*pos].saldo + deposito;

            printf("Depósito efetivado com sucesso!!\n");

            sleep(5);

            system("clear");

        }

        else {

            printf("Operação cancelada!!\n");

            sleep(5);

            system("clear");

        }//FIM SEGUNDO ELSE



    }//FIM PRIMEIRO IF 

    else if (permissao == 2) {

        printf("Operação cancelada!!\n");

        sleep(5);

        system("clear");

    }

    else {

        printf("Opção incorreta!!\n");

        sleep(5);

        system("clear");

    }

}
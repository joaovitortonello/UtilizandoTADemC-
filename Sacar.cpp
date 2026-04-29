# include "Tad.h"

void Sacar(BANCARIO* clientes,int* pos) {

    int op = 0, aux = 0;
    float sacar = 0;

    printf("Informe a conta que deseja sacar!!\n");
    scanf("%d", &aux);

    *pos = aux;

    printf("====CONTA LOCALIZADA====\n");
    printf("Número da conta [%d]\n", clientes[*pos].numero);
    printf("Nome do Titular: %s", clientes[*pos].titular);
    printf("Deseja prosseguir?\n1 - Sim\n2 - Não\n");
    scanf("%d", &op);

    system("clear");

    if (op == 1) {
        

        printf("Informe o valor que deseja sacar:\n");
        scanf("%f", &sacar);

        if (sacar > clientes[*pos].saldo) {

            printf("Valor de saque indisponível!!\n");

            sleep(5);

            system("clear");

        }

        else {

            printf("Saque realizado com sucesso!!\n");

            clientes[*pos].saldo = clientes[*pos].saldo - sacar;

            sleep(5);

            system("clear");

        }

    }//Fim Primeiro if

    else if (op == 2) {

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
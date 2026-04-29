#include "Tad.h"

/*

    1) Implemente um programa em C utilizando TAD (Tipo Abstrato de Dados) para simular o
    gerenciamento de contas bancárias.
    A estrutura Conta deve conter:
    • int numero; → número da conta (tem que ser único)
    • char titular[50]; → nome do titular (não há problema de ter duas contas no mesmo
    nome)
    • float saldo; → saldo disponível

        O programa deve ter as funções:
    1. depositar – recebe o vetor de contas por referência, o valor e a conta que recebe o
    depósito por cópia, adiciona valor ao saldo, buscando a conta no vetor.
    2. sacar – recebe o vetor de contas por referência, o valor e a conta de onde será
    debitado por cópia, desconta do saldo se houver saldo suficiente e retorna 1 se sucesso,
    0 caso contrário.
    3. 4. mostrarConta – recebe o vetor de contas por cópia, imprime seus dados.

    transferencia – recebe o vetor de contas por Referência, o valor e as duas contas por
    cópia. Debita de uma e deposita na outra.
    Implemente um menu interativo para:

    • Criar uma conta
    • Depositar
    • Sacar (precisa ter saldo)
    • Transferir valor entre duas contas (precisa ter saldo na conta de débito)
    • Mostrar conta
    • Sair do Programa

        Atenção: para criar conta, tem que verificar se o vetor não está cheio e se a conta já não
    existe. Para debitar (sacar) precisa verificar se existe saldo. Para Transferir, precisa
    verificar se existe saldo na conta onde ocorrerá o débito.

*/

void Menu() {

    BANCARIO * clientes = (BANCARIO*)malloc(10 * sizeof(BANCARIO));

    int op = 0, pos = 0;

    if(clientes == NULL) {

        printf("Memória não alocada!!");

    }

    else {

        for (int i = pos; i < 10; i++) {

            clientes[i].numero = -9999999;

            strcpy(clientes[i].titular, "");

            clientes[i].saldo = -9999999.0;

        }

    }

    do {
        
        printf("========CAIXA ECONOMICA FEDERAL========\nSeja Bem-Vindo, escolha uma operação!\n");
        printf("1 - Criar Conta\n2 - Depositar\n3 - Sacar\n4 - Transferencia\n5 - Mostrar Conta\n6 - Sair\n");
        scanf("%d", &op);

        pos = 0;

        switch (op){

            case 1: 

                CriarConta(clientes, &pos);

            break;

            case 2:

                Depositar(clientes, &pos);

            break;

            case 3: 

                Sacar(clientes, &pos);

            break;

            case 4:

                Transferir(clientes);

            break;

            case 5: 

                MostrarConta(clientes, &pos);

            break;

            default:


            break;    

        }
    }

    while(op < 6);

    system("clear");

}
#include "Biblioteca.h"

typedef struct {

    int numero;

    char titular[50];

    float saldo; 

}BANCARIO;

void Transferir(BANCARIO* clientes);

void AcessarVazio(BANCARIO* clientes,int* pos);

void CriarConta(BANCARIO* clientes,int* pos);

void Depositar(BANCARIO* clientes,int* pos);

void ConferirDeposito(BANCARIO* clientes,int* Depositante, int* Depositado);

void Sacar(BANCARIO* clientes, int* pos);

void MostrarConta(BANCARIO* clientes, int* pos);

void Menu();
#include "conta.h"

struct Conta {
 int numero;
 float saldo;
 };



Tconta *criar(int numero, float saldoinicial){

Tconta *conta = (Tconta *)malloc(sizeof(Tconta));
conta->numero = numero;
conta->saldo = saldoinicial;
return conta;

}
void depositar(Tconta *conta, float deposito){
conta->saldo += deposito;

}
void sacar(Tconta *conta, float saque){
conta->saldo -= saque;
}

void informar(Tconta *conta){

printf("Conta %d tem saldo R$%.2f\n", conta->numero, conta->saldo);

}


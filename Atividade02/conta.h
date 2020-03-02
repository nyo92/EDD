typedef struct Conta Tconta;
Tconta *criar(int numero, float saldoinicial);
void depositar(Tconta *conta, float deposito);
void sacar(Tconta *conta, float saque);
void informar(Tconta *conta);

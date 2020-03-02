#include <stdio.h>
#include <stdlib.h>
#include "conta.h"


int main(){
    Tconta *c1, *c2;
    c1 = criar(4598, 900);
    c2 = criar(8595, 4000);
    informar(c1);
    depositar(c2, 7000);
    depositar(c1, 90000);
    informar(c1);
    informar(c2);
    return 0;
}

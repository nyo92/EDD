#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
  TPilha *p = criar(9);
   empilhar(p, 5);
   empilhar(p, 7);
   int d1 = desempilhar (p);
   int i;
   for(i=3; i<=5; i++){
    empilhar(p,i);
   }
   for(i=10; i<=13; i++){
    printf("%d\n", desempilhar (p));
  }
  return 0;
}


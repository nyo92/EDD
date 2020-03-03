#include "pilha.h"

struct Pilha TPilha{
int *vtr;
int qtde, tp;
};

TPilha *criar (int n){
TPilha *pilha;
pilha = (TPilha *)malloc(sizeof(TPilha));
pilha->vtr = malloc(sizeof(int) * n);
pilha->qtde = n;
pilha->tp = -1;
return pilha;
}

void empilhar(TPilha *pilha, int x){
if (pilha->tp < pilha->qtde - 1){   //VERIFICA SE ESTÁ CHEIA
    pilha->tp = pilha-> +1;        //INCREMENTA TOPO
    pilha->vetor[pilha->tp] = x;  // INCLUI ELEMENTO X
}
}


int desempilhar(TPilha *pilha){
if(pilha->tp > -1){                        // VERIFICA SE Ñ ESTÁ VAZIA
   pilha->tp = pilha->tp - 1;             // DECREMENTA O TOPO
   return pilha->vetor[pilha->+1];       //
}


}
int tamanho(TPilha *pilha){
return pilha->qtde;

}
int topo(TPilha *pilha){
return pilha->vetor[pilha->tp];
}


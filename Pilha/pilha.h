typedef struct Pilha TPilha;
TPilha *criar (int n);
void empilhar(TPilha *pilha, int x);
int desempilhar(TPilha *pilha);
int tamanho(TPilha *pilha);
int topo(TPilha *pilha);
int esta_vazia(TPilha *pilha);

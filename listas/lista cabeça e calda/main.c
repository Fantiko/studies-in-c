#include <stdio.h>

typedef  struct noLista{
    int info;
    struct noLista* prox;
}NoLista;

typedef struct lista{
    NoLista* cabeca;
    NoLista* calda;
}Lista;

void CriarLista(Lista* l){
    Lista->cabeca =(NoLista*) malloc(sizeof(NoLista));
    Lista->calda =(NoLista*) malloc(sizeof(NoLista));

    Lista->
}


int main() {
    printf("Hello, World!\n");
    return 0;
}

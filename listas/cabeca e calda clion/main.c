#include <stdio.h>
#include <stdlib.h>

typedef  struct noLista{
    int info;
    struct noLista* prox;
}NoLista;

typedef struct lista{
    NoLista* cabeca;
    NoLista* calda;
}Lista;

void CriarLista(Lista* l){
    l->cabeca =(NoLista*) malloc(sizeof(NoLista));
    l->calda =(NoLista*) malloc(sizeof(NoLista));

    l->cabeca->prox = l->calda;
    l->calda->prox = NULL;
}

int EstaVazia(Lista* l){
    if(l->cabeca->prox == l->calda){
        return 1;
    }else{
        return 0;
    }
}

void InserirElementoInicio(Lista* l, int v){
    NoLista* p = (NoLista*) malloc(sizeof(NoLista));
    if(p== NULL){
        printf("erro");
        return;
    }
    p->info = v;
    p->prox = l->cabeca->prox;
    l->cabeca->prox = p;
}
NoLista* busca(Lista* l, int v){
    NoLista* temp;
    for (temp = l->cabeca->prox; temp != l->calda && temp->info != v; temp = temp->prox);
        if(temp==NULL){
            return NULL;
        }else{
            return temp;
        }

}
void imprimirListaComeco(Lista* l){
    NoLista* temp;
    if(!EstaVazia(l)) {
        for (temp = l->cabeca->prox; temp!=l->calda;temp=temp->prox ) {
            printf("\n%d",temp->info);
        }
    }
}
void RemoverElemento(Lista* l, int v){
    NoLista* temp = l->cabeca->prox;
    NoLista* ant = l->cabeca;
    for (temp;temp!=NULL && temp->info != v ; temp= temp->prox) {
        ant = temp;
    }
    if(temp == l->calda){
        printf("nao existe o elemento na lista");
        return;
    }
    ant->prox = temp->prox;
    free(temp);
}

void liberarlista(Lista* l){
    NoLista* temp;
    NoLista* p;
    if(!EstaVazia(l)){
        for (p= l->cabeca->prox; p!=l->calda ; p = temp) {
            temp = p->prox;
            free(p);
        }
    }
}

NoLista* ultimoElemento(Lista* l){
    if(!EstaVazia(l)){
        NoLista* p;
        for (p = l->cabeca->prox; p->prox != l->calda ; p=p->prox) {
            return p;
        }
    }else{
        return NULL;
    }
}

int main() {
    Lista lista;
    CriarLista(&lista);
    InserirElementoInicio(&lista,1);
    InserirElementoInicio(&lista,2);
    InserirElementoInicio(&lista,3);
    InserirElementoInicio(&lista,4);
    imprimirListaComeco(&lista);
    printf("\n-----\\-----");
    RemoverElemento(&lista, 2);
    imprimirListaComeco(&lista);

    return 0;
}

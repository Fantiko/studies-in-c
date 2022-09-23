#include <stdio.h>
#include <stdlib.h>

/*
 *
 */

typedef struct no{
    int info;
    struct no* prox;

}NoLista;

NoLista* criarlista(){
    return NULL;
}

int estavazia(NoLista** l){
    return (*l==NULL);
}

void insereElemento(NoLista** l, int v){
    NoLista* n = malloc(sizeof(NoLista));
    if(n!=NULL){
        n->info=v;
        n->prox=*l;
        *l=n;
    }else{
        printf("nao foi possivel alocar espaço");
    }
}

void imprime(NoLista** l){
    if(!estavazia(l)){
        NoLista* p;
        for(p=*l;p != NULL; p = p->prox){
            printf("%d\n",p->info);
        }
    }else{
        printf("a lista esta vazia meu mano");
    }
}

NoLista* busca(NoLista** l, int v){
    NoLista* p;
    for(p=*l; p!=NULL; p=p->prox){
        if(p->info==v){
            return p;
        }else{
            return NULL;
        }
    }
}

void RemoveItem(NoLista** l, int v){
    NoLista* p, *ant = NULL;
    for(p= *l; p!=NULL && p->info != v; p = p->prox ){
        ant = p;
    }
    if(ant == NULL){
        *l= p->prox;
    }else{
        ant->prox = p->prox;

    }
    free(p);
}

void libera(NoLista** l){
    NoLista* temp;
    if(!estavazia(l)){
        for(NoLista* p = *l; p!= NULL;p=temp){
            temp = p->prox;
            free(p);
        }
        *l = NULL;
    }
}

void insereOrdenado(NoLista** l, int v){
    NoLista *p, *ant=NULL;
    NoLista*n =(NoLista*) malloc(sizeof(NoLista));
    if(n!=NULL){
        n->info=v;
        p=*l;
        while(p!=NULL && p->info<v){/*andar na funçao*/
            ant=p;
            p=p->prox;
        }
        if(ant == NULL){/*inserir no inicio*/
            n->prox = p;
            *l = n;

        }else{/*colocar no meio ou no final*/
            ant->prox= n;
            n->prox=p;
        }
    }

}

int main() {
    NoLista* lista;
    lista = criarlista();
    // estavazia(&lista);
    insereElemento(&lista, 1);
    insereElemento(&lista, 2);
    insereElemento(&lista, 3);
    insereElemento(&lista, 4);
    insereElemento(&lista, 5);
    imprime(&lista);
    RemoveItem(&lista, 4);
    printf("\n-----------------\n");
    imprime(&lista);    return 0;
}

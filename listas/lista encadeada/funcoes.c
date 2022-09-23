/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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
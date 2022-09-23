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
    struct no* ant;

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
        n->ant = NULL;
        *l=n;
        if (!estavazia(l)){
            *l->ant = n;
        }
        *l = n;
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
    if(ant = NULL){
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


/*funçao que conta os elementos da lista*/
/*funçao que retorna um ponteiro para o ultimo elemento*/
NoLista* ultimoElemento(NoLista** l){
    if (!estavazia(l)){
        NoLista* p;
        for ( p = *l; p->prox!=NULL; p=p->prox)
        {
            return p;
        }
        
    }else{
        return NULL;
    }
    
}

void imprimeOrdemInversa(NoLista** l){
    if (!estavazia(l)){
        NoLista* p;
        for ( p = ultimoElemento(l); p!=NULL ; p=p->ant){
            printf("%d\n",p->info);
        }
        
    }else{
        printf("lista vazia");
    }
    
}

void RemoverElemento(NoLista** l, int v){
    NoLista* p = busca(l,v);
    if (p!= NULL){
        if (*l==p){
            *l = p->prox;
        }else{
            p->ant->prox=p->prox;
        }
        if (p->prox!=NULL){
            p->prox->ant=p->ant;
        }
        free(p);
    }
}
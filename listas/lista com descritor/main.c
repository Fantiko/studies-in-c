/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Aluno
 *
 * Created on 31 de Maio de 2022, 16:48
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no* prox;
}NoLista;

typedef struct descritor{
    NoLista* prim, *ult;
    int n;
    
}Descritor;

void CriarLista(Descritor* l){
    l->prim = NULL;
    l->ult = NULL;
    l->n = 0;
}

int EstaVazia(Descritor* l){
    if(l->n== 0){
        return 1;
    }else{
        return 0;
    }
}

void InsereInicio(Descritor* l, int v){
    NoLista* n = malloc(sizeof(NoLista));
    if(n!= NULL){
        n->info = v;
        n->prox = l->prim;
        l->prim = n;
        if(EstaVazia(l)){
            l->ult = n;
        }
        l->n++;
    }else{
        printf("\nnao foi possivel alocar espaço\n");
    }
}

void InsereFinal(Descritor* l, int v){
    NoLista* n = malloc(sizeof(NoLista));
    if(n!= NULL){
        n->info = v;
        n->prox = NULL;
        
        if(EstaVazia(l)){
            l->prim = n;
        }else{
            l->ult->prox = n;
            l->ult = n;
            
        }
        l->n++;
    }else{
        printf("\nnao foi possivel alocar espaço\n");
    }
}

void ImprimirTudo(Descritor* l){
    NoLista* p;
    printf("\n------\\------\n");
    if(!EstaVazia(l)){
        for(p = l->prim; p!=NULL; p=p->prox){
            printf("%d\n",p->info);
        }
    }else{
        printf("\nesta vazia meu mano\n");
    }
    printf("\n------\\------\n");
}

void libera(Descritor *l){
    NoLista* temp;
    for(NoLista* p = l->prim;p!=NULL; temp=p->prox){
        temp= p->prox;
        free(p);
    }
    l->prim = l->ult = NULL;
    l->n = 0;
}

void removerItem(Descritor* l, int v){
    NoLista* ant = NULL;
    NoLista* p;
    for(p = l->prim; p!=NULL && p->info != v;p=p->prox){
        ant = p;
    }if( p==NULL){
        printf("elemento nao encontrado");
    }else{
        if(ant==NULL){
            l->prim = p->prox;
            if(l->prim == NULL){
                l->ult = NULL;
            }
        }else{
            if(p == l->ult){
                l->ult = ant;
            }
            ant->prox = p->prox;
            
        }
        free(p);
        l->n--;
    }
}

int main(int argc, char** argv) {
    Descritor lista;
    CriarLista(&lista);
    InsereInicio(&lista ,5);
    InsereInicio(&lista ,4);
    InsereInicio(&lista ,3);
    InsereInicio(&lista ,2);
    ImprimirTudo(&lista);
    InsereFinal(&lista ,10);
    ImprimirTudo(&lista);
    removerItem(&lista, 3);
    ImprimirTudo(&lista);
    
    
    
    return 0;
}


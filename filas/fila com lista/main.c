/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Aluno
 *
 * Created on 11 de Julho de 2022, 19:16
 */

#include <stdio.h>
#include <stdlib.h>
 
typedef struct nolista{
    float info;
    struct nolista *prox;
}NoLista;

typedef struct fila{
    NoLista *ini;
    NoLista *fim;
}Fila;

Fila* criarfila(){
    Fila *f = malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
}

int estavazia(Fila* f){
    return (f->ini==NULL);
}

void inserir(Fila *f,float v){
    NoLista *n = malloc(sizeof(NoLista));
    if(n != NULL){
        n->info = v;
        n->prox = NULL;
        if(estavazia(f)){
            f->ini = n;
            f->fim = n;
        }else{
            f->fim->prox = n;
            f->fim = n;
        }
    }else{
        printf("erro em alocar memoria");
    }
}

void imprimir(Fila* f){
    if(!estavazia(f)){
        NoLista* iterador;
        for(iterador = f->ini; iterador != NULL; iterador=iterador->prox){
            printf("%f\n",iterador->info);
        }
    }else{
        printf("lsita vazia");
    }
}

float remover(Fila*f){
    if(!estavazia(f)){
        NoLista* p = f->ini;
        float v = p->info;
        f->ini = p->prox;
        if(f->ini==NULL){
            f->fim=NULL;
        }
        free(p);
        return v;
    }
}

void liberarfila(Fila* f){
    if(!estavazia(f)){
        NoLista* p, *temp;
        for(p=f->ini;p!=NULL;p=temp )
            temp=p->prox;
            free(p);
    }
    free(f);
}

void combinarfilas(Fila* f_res, Fila* f1, Fila* f2){
    if(estavazia(f_res)){
    while (!estavazia(f1) && !estavazia(f2))
    {
        inserir(f_res,remover(f1));
        inserir(f_res,remover(f2));
    }    
    if (estavazia(f1)){
        while (!estavazia(f2)){
        inserir(f_res,remover(f2));
        }
    }
    if (estavazia(f2)){
        while (!estavazia(f1)){
        inserir(f_res,remover(f1));
        }
    }
    }

}

void combinarfilarrecursiva(Fila* f_res, Fila* f1, Fila* f2){
if(estavazia(f_res)){
    if(!estavazia(f1) && !estavazia(f2))
    {
        inserir(f_res,remover(f1));
        inserir(f_res,remover(f2));
        combinarfilarrecursiva(f_res,f1,f2);
    }    
    if (estavazia(f1)){
        inserir(f_res,remover(f2));
        combinarfilarrecursiva(f_res,f1,f2);
        
    }
    if (estavazia(f2)){
        inserir(f_res,remover(f1));
        combinarfilarrecursiva(f_res,f1,f2);
    }
    }
    




}




int main(int argc, char** argv) {
    Fila *Fila = criarfila();
    inserir(Fila,2.2);
    imprimir(Fila);
    return (EXIT_SUCCESS);
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Aluno
 *
 * Created on 18 de Julho de 2022, 19:13
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{
    char info;
    struct arvore *esq;
    struct arvore *dir;
}Arvore;

Arvore* criarVazia(){
    return NULL;
}

Arvore* criarArvore(char c, Arvore* sae, Arvore* sad){
    Arvore* novaArvore = (Arvore*) malloc(sizeof(Arvore));
    
    if(novaArvore==NULL){
        printf("erro em alocar memoria");
    }else{
        novaArvore->info = c;
        novaArvore->esq = sae;
        novaArvore->dir = sad;
        
        return novaArvore;
    }
}

int estavazia(Arvore* arv){
    return (arv == NULL);
}

void imprime(Arvore* arv){
    if(!estavazia(arv)){
        printf("<%c",arv->info);
        imprime(arv->esq);
        imprime(arv->dir);
        printf(">");
    }else{
        printf("< >");
    }
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    
    Arvore* bd = criarArvore('d' , criarVazia(), criarVazia());
    
    Arvore* ce = criarArvore('e', criarVazia(), criarVazia());
    Arvore* cf = criarArvore('f', criarVazia(), criarVazia());
    
    Arvore* ab = criarArvore('b', criarVazia(), bd);
    
    Arvore* ac = criarArvore('c', ce, cf);
    
    Arvore* a = criarArvore('a', ab, ac);
    imprime(a);
    
    
    
    return (EXIT_SUCCESS);
}


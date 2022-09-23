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
        

    }
    return novaArvore;
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
        return;
    }else{
        printf("< >");
        return;
    }
}



int pertence(Arvore* arv,char c){
    if(estavazia(arv)){
        return 0;
    }else{
        if(c==arv->info){
            return 1;
        }else{
            return pertence(arv->esq,c) || pertence(arv->dir,c);
        }
    }
    
}
Arvore* liberar(Arvore* arv){
    if(!estavazia(arv)){
      liberar(arv->esq);
      liberar(arv->dir);
      free(arv);
    }
    return NULL;
}

int contando(Arvore* arv){
    if (estavazia(arv)){
        return 0;
    }
    
    return 1 + contando(arv->esq) + contando(arv->dir);
}

int qtdfolhas(Arvore* arv){
    if(!estavazia(arv)){
        if(arv->dir==NULL && arv->esq == NULL){
            return 1;
        }else{
            return 0+ qtdfolhas(arv->esq) + qtdfolhas(arv->dir);
        }

    } else{
        return 0;
    }
}

int igual(Arvore* a, Arvore* b){//Questão 2

    if ((a == NULL) != (b == NULL)){
        return 0;
    }
    if (a == b){
        return 1;
    }
    if (a->info != b->info){
        return 0;
    }
    if (!igual(a->esq, b->esq)){
        return 0;
    }
    if (!igual(a->dir, b->dir)){
        return 0;
    }


    return 1;
}



int main(int argc, char** argv) {
    
    
    
    Arvore* bd = criarArvore('d' , criarVazia(), criarVazia());
    
    Arvore* ce = criarArvore('e', criarVazia(), criarVazia());
    Arvore* cf = criarArvore('f', criarVazia(), criarVazia());
    
    Arvore* ab = criarArvore('b', criarVazia(), bd);
    
    Arvore* ac = criarArvore('c', ce, cf);
    
    Arvore* a = criarArvore('a', ab, ac);
    
    a->esq->esq = criarArvore('g',criarVazia(),criarVazia());
    
    imprime(a);
    
    
    printf("\n%d\n",pertence(a, 'e'));
    
    //a = liberar(a);
    
    //imprime(a);
    
    printf("\n%d\n",contando(a));
    
    return (EXIT_SUCCESS);
}


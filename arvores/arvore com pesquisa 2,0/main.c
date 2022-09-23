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
    int info;
    struct arvore *esq;
    struct arvore *dir;
}Arvore;

Arvore* criarVazia(){
    return NULL;
}

Arvore* criarArvore(int c, Arvore* sae, Arvore* sad){
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
        printf("<%d",arv->info);
        imprime(arv->esq);
        imprime(arv->dir);
        printf(">");
        return;
    }else{
        printf("< >");
        return;
    }
}

int pertence(Arvore* arv,int c){
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

Arvore* busca(Arvore*a,int v){
    if(estavazia(a)){
        return NULL;
    }else{
        if(v == a->info){
          return a; 
        }else{
            if(v < a->info){
                return busca(a->esq, v);
            }else{
                return busca(a->dir, v);
            }
        }
    }
}

Arvore* insere(Arvore*a, int v){
    if(estavazia(a)){
        a = malloc(sizeof(Arvore));
        a->esq = a->dir = NULL;
        a->info = v;
    }else{
        if(v < a->info){
            a->esq = insere(a->esq, v);
        }else{
            a->dir = insere(a->dir, v);
        }
        return a;
    }
}

Arvore* remover(Arvore* a, int v){
    if(estavazia(a)){
        return NULL;
    }
    else if(v < a->info){
        a->esq = remover(a->esq, v);
    }
    else if (v > a->info){
        a->dir = remover(a->dir, v);
    }
    else{
        if(a->esq == NULL && a->dir== NULL){
            free(a);
            a = NULL;
        }else if (a->esq == NULL){
            Arvore* t = a;
            a = a->dir;
            free(t);        
        }
        else if(a->dir==NULL){
            Arvore* t = a;
            a = a->esq;
            free(t);
        }
        else{
            Arvore* f = a->esq;
            while(f->dir != NULL){
                f=f->dir;
            }
            a->info =f->info;
            f->info = v;
            a->esq = remover(a->esq, v);
                    
        }
    }
        
   return(a);  
}

int impares(Arvore* a){
    if(a== NULL){
        return 0;
    }
    
    return (a->info % 2 == 1)+ impares(a->esq)+ impares(a->dir);
    
}

int pares(Arvore* a){
    if(estavazia(a)){
        return 0;
    }
    
    return (a->info % 2 == 0)+ pares(a->esq)+ pares(a->dir);
}

int qtdfolhas(Arvore* a){
    if(estavazia(a->esq) && estavazia(a->dir)){
        return 1;
    }else{
        return 0 + qtdfolhas(a->esq) + qtdfolhas(a->dir);
    }
}

void imprimenc(Arvore* arv){
    if(!estavazia(arv)){
        imprime(arv->dir);        
        printf("\n%c",arv->info);
        imprime(arv->esq);
    }else{
    }
}

int main(int argc, char** argv) {
    Arvore* raiz;
    raiz = insere(raiz,6);
    raiz = insere(raiz,2);
    raiz = insere(raiz,1);
    raiz = insere(raiz,4);
    raiz = insere(raiz,3);
    raiz = insere(raiz,8);
    raiz = insere(raiz,10);
    imprime(raiz);
    printf("-----------------------------------------");
    imprimenc(raiz);
    
    printf("-----------------------------------------");
    printf("\n");
    raiz = remover(raiz, 4);        
    imprime(raiz);
    printf("\nnumero de pares: %d",pares(raiz));
    printf("\nnumero de impares: %d",impares(raiz));
    printf("\npertence? %d\n",pertence(raiz, 6));
    raiz = liberar(raiz);
    imprime(raiz);
    
    //printf("\n%d\n",contando(a));
    
    return (EXIT_SUCCESS);
}


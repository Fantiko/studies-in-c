/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10





typedef struct lista{
    int itens[MAX];
    int n;
}Lista;

void criarLista(Lista* l){
    l->n =0;
}


int estaVazia(Lista* l){
    if(l->n==0){
        return 1;
    }else{
        return 0;
    }
}
int estaCheia(Lista* l){
    return (l->n== MAX);
}

void insereIten(Lista* l, int v){
    if (!estaCheia(l)){
        l->itens[l->n]=v;
        l->n++;
    }
    else{
        printf("lista cheia");
    }
}

void imprimeLista(Lista* l){
    if(!estaVazia(l)){
        for(int i=0; i< l->n ; i++){
            printf("\no item %d da lista é: %d\n", i, l->itens[i]);
        }
    }
}
void removeLista(Lista*l,int x){
    if(!estaVazia(l)&& x>=0 && x<=l->n){
        for(int i=0;i<l->n;i++){
            l->itens[x+i]= l->itens[x+i+1];
        }
        l->n--;
    }else{
        printf("erro");
    }
        
}
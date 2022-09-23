/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Aluno
 *
 * Created on 28 de Junho de 2022, 17:13
 */

#include <stdio.h>
#include <stdlib.h>
#define N 50

typedef struct pilha{
    float info[N];
    int n;
}Pilha;

Pilha* criarPilha(){
    Pilha* p = malloc(sizeof(Pilha));
    p->n=0;
    return p;
}

int estaVazia(Pilha*p){
    return(p->n==0);
}

int estaCheia(Pilha* p){
    return (p->n == N);
}

void Push(Pilha* p, float v){
    if(!estaCheia(p)){
        p->info[p->n]=v;
        p->n++;
    }else{
        printf("Pilha cheia");
    }
}

void imprimirtudo(Pilha* p){
    if(!estaVazia(p)){
        for(int i = p->n-1;i>=0;i--){
            printf("%f\n",p->info[i]);
        }
    }else{
        printf("pilha vazia");
    }
}

float pop(Pilha*p){
    if(!estaVazia){
        float v =p->info[p->n-1];
        p->n--;
        return v;
    }else{
        printf("pilha vazia");
        return 1;
    }
}

void Liberar(Pilha* p){
    free(p);
}

int main(int argc, char** argv) {
    Pilha* p = criarPilha();
    Push(p, 1);
    Push(p, 2);
    Push(p, 3);
    Push(p, 4);
    Push(p, 5);
    imprimirtudo(p);
    
    return (EXIT_SUCCESS);
}


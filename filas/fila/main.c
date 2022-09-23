/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Aluno
 *
 * Created on 5 de Julho de 2022, 16:13
 */

#include <stdio.h>
#include <stdlib.h>
#define tamanho 10
typedef struct fila{
    int info[tamanho];
    int n;
    int inicio;
}Fila;

Fila* criarFila(){
    Fila* f =malloc(sizeof(Fila));
    if(f!=NULL){
    f->n = 0;
    f->inicio = 0;
    return f;
    }else{
        printf("sem memoria");
    }
}

int estaVazia(Fila* f){
    return (f->n==0);
}
 
int estaCheia(Fila* f){
    return f->n == tamanho;
}

void inserir(Fila* f, float v){
    if(!estaCheia(f)){
        int fim = (f->inicio + f->n)% tamanho;
        f->info[fim]=v;
        f->n++;
    }else{
        printf("fila cheia");
    }
}

void imprimeFila(Fila* f){
    if(!estaVazia(f)){
        for(int iterador = f->inicio;iterador < (f->inicio+f->n)%tamanho ;iterador++){
            printf("%d",f->info[iterador]);
        }
    }else{
        printf("fila vazia");
    }
}

int Maior(Fila* f){
    if(!estaVazia){
        int pega = f->info;
        for (int iterador = f->inicio ; iterador < (f->inicio+f->n)%tamanho; iterador++)
        {
          
            if(f->info > pega){
                pega = f->info;
            }
        }
        return pega;
    }
}

int remover(Fila* f){
    if(!estaVazia(f)){
        int v = f->info[f->inicio];
        f->n--;
        f->inicio = f->inicio+1;
        return v;
    }else{
        printf("fila vazia");
        exit (1);
    }
}

void liberaFila(Fila* f){
    free(f);
}

int main(int argc, char** argv) {
    
    
    Fila* linha = criarFila();
    inserir(linha,1);
    inserir(linha,2);
    inserir(linha,3);
    imprimeFila(linha);
    remover(linha);
    printf("\n---------\n");
    imprimeFila(linha);
    
    
    
    
    
    
    return (EXIT_SUCCESS);
}


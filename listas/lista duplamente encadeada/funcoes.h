/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funcoes.h
 * Author: Aluno
 *
 * Created on 24 de Maio de 2022, 17:36
 */

#ifndef FUNCOES_H
#define FUNCOES_H

#ifdef __cplusplus
extern "C" {
#endif


/*
 * 
 */

typedef struct no{
    int info;
    struct no* prox;
    
}NoLista;


    NoLista* criarlista();
    
    int estavazia(NoLista** l);
    
    void insereElemento(NoLista** l, int v);
    
    void imprime(NoLista** l);
    
    NoLista* busca(NoLista** l, int v);
    
    void RemoveItem(NoLista** l, int v);
    
    NoLista* busca(NoLista** l, int v);
    
    void RemoveItem(NoLista** l, int v);
    
    void libera(NoLista** l);
    
    void insereOrdenado(NoLista** l, int v);
    
    NoLista* ultimoElemento(NoLista** l);

    void imprimeOrdemInversa(NoLista** l);

    void RemoverElemento(NoLista** l, int v);
    
    
    
    
    
    
    
    
    


#ifdef __cplusplus
}
#endif

#endif /* FUNCOES_H */


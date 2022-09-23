

#ifndef FUNCOES_H
#define FUNCOES_H

#define MAX 10





typedef struct lista{
    int itens[MAX];
    int n;
}Lista;


typedef struct lista Lista;     
    
void criarLista(Lista* l);

int estaVazia(Lista* l);

int estaCheia(Lista* l);

void insereIten(Lista* l, int v);

void imprimeLista(Lista* l);

void removeLista(Lista*l,int x);


#endif	// FUNCOES_H


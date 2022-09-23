#include<stdio.h>
#include<stdlib.h>

typedef struct noLista
{
    float info;
    struct noLista * prox;
}NoLista;

typedef struct pilha{
    NoLista* prim;
}Pilha;

Pilha* criarpilha(){
    Pilha* p = malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

int estavazia(Pilha* p){
    return(p->prim == NULL);
}

void push(Pilha* p, float v){
    NoLista* novo = malloc(sizeof(NoLista));
    if(novo!= NULL){
        novo->info =v;
        novo->prox=p->prim;
        p->prim = novo;
    }else{
        printf("nao foi possivel alocar espaco");
        exit(1);
    }
}

float pop(Pilha* p){
    if(!estavazia(p)){
        NoLista* temp = p->prim;
        float v = temp->info;
        p->prim = temp->prox;
        free(temp);
        return v;
    }else{
        printf("pilha vazia");
        exit(1);
    }
}

void liberarpilha(Pilha* p){
    NoLista* q, *temp;
    for ( q=p->prim; q!=NULL; q=temp)
    {
        temp = q->prox;
        free(q);
    }
    free(p);
    p = criarpilha();


}

void concatenapilha(Pilha* p1, Pilha* p2){
    Pilha* temp=criarpilha();
    while (!estavazia(p2)){
        push(temp,pop(p2));
    }
      while (!estavazia(temp)){
        push(p1,pop(temp));
    }
    
}

void concatenapilharecusiva(Pilha* p1, Pilha* p2){
    if (estavazia(p2)){
        push(p1,pop(p2));
    }else{
        concatenapilha(p1, p2);
    }
    
}


void imprime_pilha(Pilha* p){
    if(!estavazia(p)){
        for(NoLista* q = p->prim; q != NULL; q = q->prox){
            printf("\n %1.2f", q->info);
        }
    }else{
        printf("\n A pilha está vazia!");
    }
}

void concaternarpilhadois(Pilha* p1, Pilha* p2){
    if(!estavazia(p2)){
        concatenapilha(p1, p2->prim->prox);
    }else{
        push(p1, pop(p2));
    }
}





int main()
{
    Pilha* p1 = criarpilha();
    Pilha* p2 = criarpilha();
    push(p1,1);
    push(p1,2);
    push(p1,3);
    push(p1,4);
    push(p2,8);
    push(p2,7);
    push(p2,6);
    push(p2,5);
    imprime_pilha(p1);
    printf("--------------");
    imprime_pilha(p2);
    printf("\n------------------//------------------\n");
    concatenapilharecusiva(p1, p2);
    imprime_pilha(p1);
    printf("\n------------------//------------------\n");
    imprime_pilha(p2);




    return 0;
}

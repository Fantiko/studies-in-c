#include<stdlib.h>
#include<stdio.h>
#define MAX 10

typedef struct fila{
    float info[MAX];
    int n;
    int inicio;
}Fila;

Fila* criarfila(){
    Fila* f = malloc(sizeof(Fila));
    f->inicio = 0;
    f->n = 0;
    return f;
}

int estavazia(Fila* f){
    return(f->n==0);
}
int estacheia(Fila*f){
    return(f->n==MAX);
}

void inserirelemento(Fila* f,float v){
    if(!estacheia(f)){
        int fim = (f->inicio + f->n) % MAX;
        f->info[fim]= v;
        f->n++;

    }else{
        printf("a fila t cheia");
    }
}

void imprimir_fila(Fila* f){
    if(!esta_vazia(f)){
    
        int x = f->inicio;
        
        for(int i = 0; i < f->n; i++){
            printf("\n %1.2f", f->info[x]);
            x = (x + 1) % MAX;
        }
    
    }else{
        printf("\n A FILA ESTÁ VAZIA!");
    }    
}

float remover_elemento(Fila* f){
    if(!esta_vazia(f)){
        float v = f->info[f->inicio];
        f->n--;
        f->inicio = (f->inicio + 1) % MAX;
        return v;
    }else{
        printf("\n FILA ESTÁ VAZIA!");
        exit(1);
    }
}




int main(int argc, char const *argv[])
{
    
    return 0;
}

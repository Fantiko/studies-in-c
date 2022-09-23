//
// Created by kaios on 21/05/2022.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[80];
    int matricula;
}Aluno;
void inicializar(int n , Aluno** tab){
    for(int i=0; i<n ;i++){
        tab[i]=NULL;
    }
}

void leAluno(int n, Aluno** tab, int i){
    if( i>=0 &&  i<n ){
        tab[i]=(Aluno*) malloc(sizeof(Aluno));
        if(tab[i]!=NULL) {
            printf("digite o nome do aluno\n");
            scanf("%[^\n]", &tab[i]->nome);
            setbuf(stdin, NULL);
            printf("digite a matricula do aluno\n");
            scanf("%[^\n]", &tab[i]->matricula);
            setbuf(stdin, NULL);
        }
    }
    else{
        printf("posicao ja ocupada");
    }
}
void imprimeAluno(int n, Aluno** tab,int i){
    if(i>=0 && i<n){
        if(tab[i]!= NULL) {
            printf("\n------------------//------------------\n");
            printf("\ndados do aluno %d", i + 1);
            printf("\nnome do aluno: %s", tab[i]->nome);
            setbuf(stdin,NULL);
            printf("\nmatricula: %d", tab[i]->matricula);
            setbuf(stdin,NULL);
            printf("\n------------------//------------------\n");
        }
    }
}
void retiraAluno(int n,Aluno** tab, int i){
    if(i>=0 && i<n){
        free(tab[i]);
        tab[i]=NULL;

    }
}
void imprime_tudo(int n,Aluno** tab){
    int i;
    for ( i = 0; i < n; ++i) {
        imprimeAluno(n, tab, i);
    }
}

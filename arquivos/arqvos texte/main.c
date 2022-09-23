#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* regis = fopen("registros.txt", "r");
    char nome[30], curso[30];
    int id;

    Aluno * novo = malloc(sizeof(aluno));

    while(fscanf(regis, "%[^\t]\t%d\t%[^\n]", novo->nome, &id, novo->curso) != EOF){  //percorre todo o arquivo no fodase
        
        novo->amigos = NULL; //n tem amigos T-T

        int id_temporario;

        while(fscanf(regis, "%d ", &id_temporario) == 1){
            Amigos* amiguinho = malloc(sizeof(Amigos));

            amiguinho->id = id_temporario;
            amiguinho->prox = novo->amiguinho->prox;
            novo->prox = amiguinho;
        }

        printf("\n%s\n%d\n%s", nome, id, curso);
    }

    fclose(regis);
    return 0;
}

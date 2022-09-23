#include <stdio.h>

/*Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e
imprima: Todos os elementos que se encontram em posições cuja linha mais
coluna formam um número par*/

int main() {
    int mat[5][5];
    printf("digite os numeros da matriz:");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("elementos que se encontram em posicoes cuja linha mais\n"
           "coluna formam um nomero par:");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if((i+j+2) % 2 == 0){
                printf("%d\t",mat[i][j]);
            }
        }
    }









    return 0;
}

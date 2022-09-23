#include <stdio.h>

/*
Construa um programa em C que leia valores inteiros para a matriz A3 x 5. Gerar e
imprimir a matriz SOMALINHA, em que cada elemento é a soma dos elementos
de uma linha da matriz A. Faça o trecho que gera a matriz separado da entrada e
da saída.
 */

int main() {
    int mat[3][5], somalinha[3];
    printf("digite os elementos da matriz\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            somalinha[i]+=mat[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        printf("\nsoma da linha %d:\n%d",i+1, somalinha[i]);
    }

    return 0;
}

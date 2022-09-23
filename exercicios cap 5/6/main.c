#include <stdio.h>
/*Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma
matriz B[2][2]. Gerar e imprimir a matriz SOMA[2][2].*/

int main() {
    int A[2][2], B[2][2],SOMA[2][2];
    printf("digites os valores para a matriz A\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%d",&A[i][j]);
        }
    }
    printf("digites os valores para a matriz B\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%d",&B[i][j]);
        }
    }
    printf("elementos da matriz SOMA:");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            SOMA[i][j]=A[i][j]+B[i][j];
            printf("%d\t",SOMA[i][j]);
        }
    }

    return 0;
}

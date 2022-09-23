#include <stdio.h>
/*
Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 10 X 10. Ao final, imprima todos os elementos.
*/





int main() {
int mat[2][2];
    printf("digite os 100 elementos da matriz");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nelementos da matriz\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d",mat[i][j]);
        }

    }












    return 0;
}

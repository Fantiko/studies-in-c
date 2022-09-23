#include <stdio.h>

/*Faça um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima os elementos multiplicando por 2.
 */
int main() {
    int vet[3][3];

    printf("digite os nove valores da matriz:");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d",&vet[i][j]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            vet[i][j]*=2;
            printf("%d\t",vet[i][j]);
        }

    }



    return 0;
}

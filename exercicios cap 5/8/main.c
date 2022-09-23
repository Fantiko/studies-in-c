#include <stdio.h>
/*Faça um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a
soma de todos os seus elementos.*/

int main() {
    int mat[4][5],soma;
    printf("digite os elementos da matriz\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            soma+=mat[i][j];
        }
    }
    printf("soma %d",soma);






    return 0;
}

#include <stdio.h>
/*
Construa um programa que armazene dados em uma matriz de ordem 4 e imprima: Todos os elementos com números ímpares.
*/
int main() {
    int mat[4][4];


    printf("digite os elementos da matriz\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("elementos com numeros impares\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if(mat[i][j]%2!=0){
                printf("%d\t",mat[i][j]);
            }
        }
    }



    printf("Hello, World!\n");










    return 0;
}

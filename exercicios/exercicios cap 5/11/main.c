#include <stdio.h>
/*Entrar com valores para uma matriz C 2 x 3. Gerar e imprimir a C t
A matriz transposta é gerada trocando linha por coluna. Veja o exemplo a seguir:*/

int main() {
int mat[2][3],trasposta[3][2];
    printf("digite os 6 elementos da matriz");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            trasposta[j][i]=mat[i][j];
        }
    }
    printf("\nmatriz trasposta:");
    for (int i = 0; i < 3; ++i) {
        printf("\n");
        for (int j = 0; j < 2; ++j) {
            printf("%d\t",trasposta[i][j]);
        }
    }



    return 0;
}

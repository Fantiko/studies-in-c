#include <stdio.h>
/*Faça um programa que armazene 8 números em um vetor e imprima todos os
números. Ao final, imprima o total de números múltiplos de seis.
*/

int main() {
    int vet[8];
    printf("digite os 8 numeros:\n");
    for (int i = 0; i < 8; ++i) {
        scanf("%d",&vet[i]);
    }
    printf("todos os \n");
    for (int i = 0; i < 8; ++i) {
        printf("%d\t",vet[i]);
    }
    printf("\nnumeros multiplos de 6\n");
    for (int i = 0; i < 8; ++i) {
        if(vet[i]%6==0){
            printf("%d\t",vet[i]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*Faça um programa em C que leia um número e indique se o número está compreendido entre 20 e 50 ou não.*/

int main() {
    int n;

    printf("digite um numero:");
    scanf("%d", &n);

    if (n>= 20 && n<=50) {
        printf("o numero esta entre 20 e 50. \n");
    } else{
        printf("numero nao esta entre 20 e 50");
    }
    return 0;
}

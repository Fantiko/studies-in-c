#include <stdio.h>
/*Faça um programa que armazene 10 letras em um vetor e imprima uma listagem
numerada.*/


int main() {
    char vet[10];
    printf("digite 10 letras:\n");
    for (int i = 0; i < 10; ++i) {
        fflush(stdin);
        scanf("%c",&vet[i]);
    }
    printf("\nlista com as letras numeradas");
    for (int i = 0; i < 10; ++i) {
        printf("\n%d letra:%c",i+1,vet[i]);
    }
    return 0;
}

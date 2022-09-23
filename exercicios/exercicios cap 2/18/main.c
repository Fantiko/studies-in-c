#include <stdio.h>
/*Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês
correspondente. Caso o usuário digite um número fora desse intervalo, deverá
aparecer uma mensagem informando que não existe mês com este número.
Utilize o switch para este problema.*/


int main() {
    int nmes;
    printf("digite um numero de um mes\n");
    scanf("%d",&nmes);

    switch (nmes) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("marco");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
        default:
            printf("esse numero nao e de um mes");
            break;

    }



    return 0;
}

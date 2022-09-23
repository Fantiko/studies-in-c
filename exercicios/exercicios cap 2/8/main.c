#include <stdio.h>

/*
Faça um programa que leia um número e imprima uma das mensagens: "Maior
do que 20", "Igual a 20"ou "Menor do que 20".
*/

int main() {
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);
    if(num>20){
        printf("maior que 20");
    }
        else{
            if(num==20){
                printf("numero igual a 20");


            }
            else{
                printf("numero menor que 20");
            }
        }

    return 0;
}

#include <stdio.h>

/*
Faça um programa que leia a idade de uma pessoa e informe:
• Se é maior de idade
• Se é menor de idade
• Se é maior de 65 anos

*/

int main() {
    int idade;
    printf("digite sua idade: ");
    scanf("%d",&idade);


    if(idade>=18 && idade<65){
        printf("maior de idade");
    } else {
        if (idade >= 65) {
            printf("idoso ");
        } else {
            printf("menor de idade");
        }
    }
    return 0;
}

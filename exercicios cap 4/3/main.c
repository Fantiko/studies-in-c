#include <stdio.h>
/*
Construa uma programa em C que armazene 15 números em um vetor e imprima
uma listagem numerada contendo o número e uma das mensagens: par ou ímpar
*/

int main() {
  int vet[15];
    printf("digite os 15 numeros");
    for (int i = 0; i < 15; ++i) {
        scanf("%d",&vet[i]);
    }
    for (int i = 0; i < 15; ++i) {
        if(vet[i]%2==0){
            printf("%d \t\t %d \t par\n",i+1,vet[i]);
        } else{
            printf("%d \t\t %d \t impar\n",i+1,vet[i]);
        }
    }



    return 0;
}

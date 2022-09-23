#include <stdio.h>
/*Faça um programa em C que armazene 15 números inteiros em um vetor e depois
permita que o usuário digite um número inteiro para ser buscado no vetor, se
for encontrado o programa deve imprimir a posição desse número no vetor, caso
contrário, deve imprimir a mensagem: "Nao encontrado!".
*/






int main() {
    int vet[15];
    int n;
    int aux=0;
    printf("digite os 15 valores do vetor:\n");
    for (int i = 0; i <15 ; ++i) {
        scanf("%d",&vet[i]);
    }
    printf("\ndigite um numero para procurar no vetor:");
    scanf("%d",&n);
    for (int i = 0; i < 15; ++i) {
        if(vet[i]==n){
            printf("\nnumero encontrado na posicao:%d\n",i+1);
            aux=1;
        }
    }
    if(aux=0){
        printf("numero nao encontrado");
    }
    return 0;
}

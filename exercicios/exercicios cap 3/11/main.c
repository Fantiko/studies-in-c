#include <stdio.h>
/* Construa um programa em C que leia vários números e informe quantos números
entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo
deverá cessar sua execução.*/

int main() {
    int  valo, contagem;
    printf("digite um numero, 0 para interromper:\n");
    scanf("%d",&valo);
    while (valo !=0){
        if(valo>=100 && valo<=200){
            contagem++;
        }
        printf("digite um numero:\n");
        scanf("%d",&valo);
    }
    printf("quantidade de numeros entre 100 e 200:%d",contagem);
    return 0;
}

#include <stdio.h>
/*
 Faça um programa em C que leia três números e, para cada um, imprimir o dobro.
O cálculo deverá ser realizado por uma função e o resultado impresso ao final do
programa
 */

int dobro(int a, int b, int c);

int main() {
    int a, b ,c;
    printf("digite os 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);

    dobro(a, b ,c);

    return 0;
}

int dobro(int a, int b, int c){
    printf("dobro do primeiro numero 1:\t%d",a*2);
    printf("\ndobro do primeiro numero 2:\t%d",b*2);
    printf("\ndobro do primeiro numero 3:\t%d",c*2);

}
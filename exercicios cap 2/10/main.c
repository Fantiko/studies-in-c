#include <stdio.h>

/*
Faça um programa em C que leia três números inteiros e imprima os três em
ordem crescente.
 */

int main() {
    int num1, num2, num3;
    printf("digite o numero: ");
    scanf("%d",&num1);
    printf("\ndigite o numero: ");
    scanf("%d",&num2);
    printf("\ndigite o numero: ");
    scanf("%d",&num3);

    if (num3>num2 && num2>num1){
        printf("%d %d %d", num1, num2, num3);
    }
    if (num2>num3 && num3>num1){
        printf("%d %d %d", num1, num3, num2);
    }
    if (num1>num2 && num2>num3){
        printf("%d %d %d", num3, num2, num1);
    }
    if (num3>num1 && num1>num2){
        printf("%d %d %d", num2, num1, num3);
    }
    if (num2>num1 && num1>num3){
        printf("%d %d %d", num3, num1, num2);
    }
    if (num1>num3 && num3>num2){
        printf("%d %d %d", num2, num3, num1);
    }

    return 0;
}

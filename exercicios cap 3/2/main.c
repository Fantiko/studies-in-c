#include <stdio.h>
/*Faça um programa que imprima todos os números pares de 100 até 1*/
int main() {
    for (int i = 100; i >=1; --i) {
        if(i % 2 == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}

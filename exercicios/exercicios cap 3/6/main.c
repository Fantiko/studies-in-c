#include <stdio.h>
/*Crie um programa em C que imprima os 20 primeiros termos da série de Fibonacci.
Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados
a partir da soma dos anteriores. Exemplo:
• 1 + 1 = 2, terceiro termo;
• 1 + 2 = 3, quarto termo, etc.
 */

int main() {
    int fib=1, fib2=1, aux;
    printf("%d\n",fib);
    printf("%d\n",fib2);

    for (int j = 2; j < 20; ++j) {
        aux = fib2;
        fib2= fib+fib2;
        printf("%d\n",fib2);
        fib=aux;
    }
    return 0;
}

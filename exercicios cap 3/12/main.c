#include <stdio.h>
/*Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao
ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao
ano, fazer um programa que calcule e imprima o tempo necessário para que a
população do país A ultrapasse a população do país B.*/

int main() {
    int  contagem=0;
    float a=5000000, b=7000000;
    while (a<b) {
        a += a*0.03;
        b += b*0.02;
        contagem++;
    }
    printf("numero de anos: %d",contagem);
    return 0;
}

#include <stdio.h>
/*Faça um programa que receba as notas de três provas e calcule a média. Para o
cálculo, escreva uma função. O programa deve imprimir a média ao final.*/

int calcularmedia(int p1,int p2,int p3){
    int media;

    return (p1+p2+p3)/3;
}


int main() {
    int p1, p2, p3, media;
    printf("digite a nota das 3 provas\n");
    scanf("%d %d %d", &p1, &p2, &p3);
    media=calcularmedia(p1, p2, p3);


    printf("media %d",media);
    return 0;
}

#include <stdio.h>
#include <math.h>
/*
Cria uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa
que declare e leia uma estrutura retângulo e exiba a área e o comprimento da
diagonal e o perímetro desse retângulo.
 */

struct ponto{
    int x, y;
};
int main() {
    struct ponto p1, p2;
    float altura,diagonal,perimetro,area,base;
    printf("informe o x do p1\n");
    scanf("%d",&p1.x);
    printf("informe o y do p1\n");
    scanf("%d",&p1.y);

    printf("informe o x do p1\n");
    scanf("%d",&p2.x);
    printf("informe o y do p1\n");
    scanf("%d",&p2.y);

    altura= sqrt(pow(p1.x-p1.x,2)+ pow(p1.y-p2.y,2));
    base= sqrt(pow(p1.x-p2.x,2)+ pow(p1.y-p1.y,2));
    perimetro=(altura+base)*2;
    area=altura*base;
    diagonal= sqrt(pow(altura,2)+ pow(base,2));

    printf("\nbase:\t%f",base);
    printf("\naltura:\t%f",altura);
    printf("\ndiagona:\t%f",diagonal);
    printf("\narea:\t%f",area);
    printf("\nperimetro:\t%f",perimetro);
    return 0;
}

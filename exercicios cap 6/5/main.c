#include <stdio.h>
#include <math.h>
/*
Usando a estrutura retângulo do exercício anterior, faça um programa que declare
e leia uma estrutura retângulo e um ponto, e informe se esse ponto está ou não
dentro do retângulo
 */

struct ponto{
    int x, y;
};
int main() {
    struct ponto p1, p2, p;
    float altura,diagonal,perimetro,area,base;
    printf("informe o x do p1\n");
    scanf("%d",&p1.x);
    printf("informe o y do p1\n");
    scanf("%d",&p1.y);

    printf("informe o x do p1\n");
    scanf("%d",&p2.x);
    printf("informe o y do p1\n");
    scanf("%d",&p2.y);

    printf("informe o x do p\n");
    scanf("%d",&p.x);
    printf("informe o y do p\n");
    scanf("%d",&p.y);

    if(p.x >= p1.x && p.x <= p2.x && p.y >= p1.y && p.y <= p2.y){
        printf("ponto dentro do retangulo");
    }else{
        printf("ponto fora do retangulo");
    }

/*
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
  */






    return 0;
}

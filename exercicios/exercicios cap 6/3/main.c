#include <stdio.h>
#include <math.h>
/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles, considere a mesma fórmula do exercício anterior.
 */

struct coordenadas{
    int x;
    int y;
};

int main() {
    struct coordenadas i, j;
    float d;
    printf("digite as coordenadas x do ponto 1\n");
    scanf("%d",&i.x);
    printf("\ndigite as coordenadas y do ponto 1\n");
    scanf("%d",&i.y);
    printf("digite as coordenadas x do ponto 2\n");
    scanf("%d",&j.x);
    printf("\ndigite as coordenadas y do ponto 2\n");
    scanf("%d",&j.y);



    d= sqrt(pow(i.x-j.x,2)+ pow(i.y-j.y,2));

    printf("distancia do ponto x e y ate a origem (0,0):%f",d);
    return 0;
}
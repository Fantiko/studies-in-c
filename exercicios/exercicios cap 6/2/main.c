#include <stdio.h>
#include <math.h>


/*
 * Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, posição (0, 0). Para realizar o cálculo,
utilize a fórmula a seguir
 */

struct coordenadas{
    int x;
    int y;
};

int main() {
    struct coordenadas i;
    float d;
    printf("digite as coordenadas do ponto x\n");
    scanf("%d",&i.x);
    printf("\ndigite as coordenadas do ponto y\n");
    scanf("%d",&i.y);

    d= sqrt(pow(i.x-0,2)+ pow(i.y-0,2));
    printf("distancia do ponto x e y ate a origem (0,0):%f",d);
    return 0;
}

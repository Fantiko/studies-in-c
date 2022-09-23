#include<stdio.h>
#include<math.h>
int potencia (int X, int Y);
float sequencia (int X);

int main (){


    int X;
    int aux;

    printf("Digite um valor para a base X: ");
    scanf("%d", &X);
    aux = sequencia(X);
    printf("S = %d", aux);

    return 0;
}

int potencia (int X, int Y){
    int XpotY;
    XpotY = pow(X, Y);

    return XpotY;
}

float sequencia(int X){
    int i;
    float S = X;
    for (i = 3; i <= 41; i+2) {
        S = S - potencia(X, i - 1) / i;
    }
    return S;
}
#include <stdio.h>
/*Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20
pessoas. O programa deve imprimir o nome da pessoa se ela for do sexo masculino
e tiver mais de 21 anos.
*/
int main() {
    char nome[100];
    int idade, sexo;
    for (int i = 0; i < 20; ++i) {

        printf("digite o nome da pessoa: ");
        scanf("%s", &nome);
        printf("\ndigite a idade da pessoa: ");
        scanf("%d", &idade);
        printf("digite -1- para sexo masculino");
        printf("\ndigite -2- para sexo feminino\n");
        scanf("%d", &sexo);

        if(sexo == 1 && idade>21) {
            printf("%s\n", nome);
        }
    }

    return 0;
}

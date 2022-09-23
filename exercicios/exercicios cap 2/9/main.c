#include <stdio.h>

/*
Faça um programa em C que permita entrar com o ano de nascimento da pessoa
e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça
de verificar se o ano de nascimento informado é válido.
*/

int main() {
    int anasc, aatual, idade;

    printf("digite seu ano de nascimento: ");
    scanf("%d",&anasc);

    printf("\ndigite o ano atual: ");
    scanf("%d",&aatual);

    if (anasc<=aatual && anasc>0){
        idade=aatual-anasc;
        printf("aqui esta a sua idade: %d \n",idade);
    } else{
        printf("ano de nascimento invalido");
    }




    return 0;
}

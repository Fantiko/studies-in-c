#include <stdio.h>
/*Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
Faça um programa em C que leia o valor do produto e imprima o valor da venda.
*/

int main() {
    float vprod;
    printf("digite o valor do produto: ");
    scanf("%f",&vprod);
    if(vprod<=20){
        vprod+= (0.45*vprod);
        printf("valor de venda: %f",vprod);
    } else{
        vprod+= (0.3*vprod);
        printf("valor de venda: %f",vprod);
    }



    return 0;
}

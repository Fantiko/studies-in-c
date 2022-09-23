#include <stdio.h>
/*
 * No dia da estréia do filme "Procurando Dory", uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme. Cada espectador respondeu
a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
excelente - 3; bom - 2; regular - 1. Criar um programa que receba a idade e a
opinião de 20 espectadores, calcule e imprima:
• A média das idades das pessoas que responderam excelente;
• A quantidade de pessoas que responderam regular;
• A percentagem de pessoas que responderam bom entre todos os expectadores analisados.
 */

int main() {
    float idadex, midadex=0, pessoasreg=0, pessoasbom=0, pessoasex=0;
    float mpessoasbom;
    int i, opniao;

    for (i = 0; i < 3; ++i) {
        printf("qual a sua idade:");
        scanf("%f",&idadex);
        printf("\ndigite 3 se execelent");
        printf("\ndigite 2 se regular");
        printf("\ndigite 1 se bom");
        printf("\nqual a sua opniao do filme");
        scanf("%d",&opniao);

        switch (opniao) {
            case 3:
                midadex+= idadex;
                pessoasex++;
                break;
            case 2:
                pessoasreg++;
                break;
            case 1:
                pessoasbom++;
                break;
        }
    }

    midadex = midadex/pessoasex;
    mpessoasbom = (pessoasbom * 100)/3 ;


    printf("\nmeia das idades das pessoas que responderam excelente: %f",midadex);
    printf("\nquantidade de pessoas que responderam regular: %f",pessoasreg);
    printf("\npercentagem de pessoas que responderam bom entre todos os expectadores analisados: %f",mpessoasbom);

    return 0;
}

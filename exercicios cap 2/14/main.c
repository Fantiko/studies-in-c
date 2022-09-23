#include <stdio.h>
/*Faça um programa que permita entrar com o salário de uma pessoa e imprima o
desconto do INSS segundo a tabela seguir:*/

int main() {
    float sal;
    printf("digite o valor do seu salario:");
    scanf("%f",&sal);
    if(sal<= 600)
    {
        printf("insento");
    } else
    {
        if(sal<=1200 && sal>600)
        {
            printf("20%%");
        } else
        {
            if(sal>1200 && sal<=2000)
            {
                printf("25%%");
            } else
            {
                printf("30%%");
            }
        }
    }



    return 0;
}

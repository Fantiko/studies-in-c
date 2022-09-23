#include <stdio.h>
/*Construa um programa que permita armazenar o salário de 20 pessoas. Calcular
e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma
listagem numerada com o salário e o novo salário. Declare quantos vetores forem
necessários.*/
int main() {
float  sal[5],nsal[5];
    printf("digite o salario das 20 pessoas:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%f",&sal[i]);
        nsal[i]=sal[i]*1.08;
    }
    printf("\nlistagem\t\t salario\t salario novo\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\t\t",i+1);
        printf("%f\t",sal[i]);
        printf("%f\n",nsal[i]);
    }


    return 0;
}

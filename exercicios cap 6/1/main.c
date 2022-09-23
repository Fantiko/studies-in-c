#include <stdio.h>
/*Implemente um programa em C que leia o nome, a idade e o endereço de uma
        pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela
os dados da estrutura lida.
*/
struct pessoa{
    char nome[30];
    int idade;
    char endereco[50];


};

int main() {
    struct pessoa p;
    printf("digite o nome da pessoa\n");
    scanf("%s",&p.nome);
    printf("digite a idade da pessoa\n");
    scanf("%d",&p.idade);
    printf("digite o endereco da pessoa\n");
    scanf("%s",&p.endereco);


    printf("nome:\t%s",p.nome);
    printf("\nidade:\t%d",p.idade);
    printf("\nendereco:\t%s",p.endereco);
    return 0;
}

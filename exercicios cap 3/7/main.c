#include <stdio.h>
/*Crie um programa em linguagem C que permita entrar com o nome, a nota da
prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo:
nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final,
imprimir a média geral da turma.*/


int main() {
    float p1, p2, media=0, mediat=0;
    char nome[50];
    int i;
    for ( i = 0; i < 15; ++i) {

        printf("\ndigite o nome do aluno:");
        scanf("%s", &nome);
        printf("digite a nota da p1:");
        scanf("%f", &p1);
        printf("digite a nota da p2:");
        scanf("%f", &p2);
        media=(p1+p2)/2;
        mediat+= media;
        printf("aluno: %s",nome);
        printf("\nnota p1: %f",p1);
        printf("\nnota da p2: %f",p2);
        printf("\nmedia do aluno: %f",media);
    }
    mediat= mediat/(i);
    printf("/nmedia da turma: %f",mediat);

    return 0;
}

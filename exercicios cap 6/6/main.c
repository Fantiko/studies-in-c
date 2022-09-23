#include <stdio.h>
/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Defina também um tipo para esta estrutura. Agora, escreva um programa que
leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o
nome e as notas do aluno que possui a maior média geral dentre os cinco.
 */
struct aluno{
    int matricula;
    char nome[30];
    int p1;
    int p2;
    int p3;

};
typedef struct aluno Aluno;
int main() {
  Aluno alunos[5];
  float media,mmedia;
    int imedia;

    for (int i = 0; i < 5; ++i) {
        printf("digite a matricula do aluno\n");
        scanf("%d",&alunos[i].matricula);
        printf("digite o nome do aluno\n");
        scanf("%s",&alunos[i].nome);
        printf("digite a nota da p1 do aluno\n");
        scanf("%d",&alunos[i].p1);
        printf("digite a nota da p2 do aluno\n");
        scanf("%d",&alunos[i].p2);
        printf("digite a nota da p3 do aluno\n");
        scanf("%d",&alunos[i].p3);

        media=(alunos[i].p1+alunos[i].p2+alunos[i].p3)/3;

        if(media>mmedia){
            mmedia = media;
            imedia=i;
        }

    }
    printf("---------Dados do aluno com maior media---------\n");
    printf("matricula:\t%d",alunos[imedia].matricula);
    printf("\nnome:\t%s",alunos[imedia].nome);
    printf("\nnota prova 1:\t%d",alunos[imedia].p1);
    printf("\nnota prova 2:\t%d",alunos[imedia].p2);
    printf("\nnota prova 3:\t%d",alunos[imedia].p3);
    printf("\nmedia:\t%f",mmedia);



    return 0;
}

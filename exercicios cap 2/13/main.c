#include <stdio.h>
/*Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota
da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou
"em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as
demais em prova final).
*/


int main() {
    char naluno[30];
    int n1, n2, media;
    printf("digite o nome do aluno:\n");
    scanf("%s",&naluno);
    printf("digite a nota da prova:\n");
    scanf("%d",&n1);
    printf("digite a nota da prova 2:\n");
    scanf("%d",&n2);

    media=(n1+n2)/2;
   if(media>=7){
       printf("%s\n",naluno);
       printf("%d\n",n1);
       printf("%d\n",n2);
       printf("aprovado\n");
   } else{
       if(media<7 && media>3){
           printf("%s\n",naluno);
           printf("%d\n",n1);
           printf("%d\n",n2);
           printf("prova final \n");

       } else{
           printf("%s\n",naluno);
           printf("%d\n",n1);
           printf("%d\n",n2);
           printf("reprovado");

       }
   }


    return 0;
}

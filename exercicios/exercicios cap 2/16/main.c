#include <stdio.h>
/*A confederação brasileira de natação irá promover eliminatórias para o próximo
mundial. Faça um programa em C que receba a idade de um nadador e imprima
a sua categoria segundo a tabela a seguir:*/

int main() {
    int idade;
    printf("qual a idade do nadador");
    scanf("%d",&idade);

    if(idade<5)
    {
        printf("sem categoria");
        } else
            {
                if(idade>=5 && idade<=7)
                {
                    printf("categoria A");
                } else
                {
                    if(idade>=8 && idade <=10)
                    {
                        printf("categoria B");
                    }else
                    {
                        if(idade>=11 && idade<=13)
                        {
                            printf("categoria c");
                        } else
                        {
                            if(idade>=14 && idade<=17)
                            {
                                printf("categoria C");
                            } else
                            {
                                if(idade>=18)
                                {
                                    printf("categoria D");
                                }
                            }
                        }
                    }
                }
            }

    return 0;
}

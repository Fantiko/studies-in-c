#include <stdio.h>
/*Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para cada consumidor, são digitados os seguintes dados:
• número do consumidor
• quantidade de kWh consumidos durante o mês
• tipo (código) do consumidor
1-residencial, preço em reais por kWh = 0,3
2-comercial, preço em reais por kWh = 0,5
3-industrial, preço em reais por kWh = 0,7
Os dados devem ser lidos até que seja encontrado o consumidor com número 0
(zero). O programa deve calcular e imprimir:
• O custo total para cada consumidor
• O total de consumo para os três tipos de consumidor
• A média de consumo dos tipos 1 e 2
*/


int main() {
    int nconsumidor;
    float kwhconsumida=0;
    int codigo;
    float preco=0;
    int contagem=0;
    float tconsumo=0;
    float mediaconsumo=0;


    printf("digite o numero do consumidor ");
    printf("\ndigite 0 para encerrar:");
    scanf("%d",&nconsumidor);
    printf("\ndigite quantos kwh foi consumido durante um mes:");
    scanf("%f",&kwhconsumida);
    printf("\ndigite o codigo do consumidor:");
    printf("\n1-residencial");
    printf("\n2-comercial");
    printf("\n3-industrial");
    scanf("%d",&codigo);

        while (nconsumidor != 0) {
            switch (codigo) {
                case 1:
                    preco = kwhconsumida * 0.3;
                    tconsumo += preco;
                    contagem++;
                    mediaconsumo += preco;
                    printf("\nvalor a pagar:%f", preco);
                    break;
                case 2:
                    preco = kwhconsumida * 0.5;
                    tconsumo += preco;
                    contagem++;
                    mediaconsumo += preco;
                    printf("\nvalor a pagar:%f", preco);
                    break;
                case 3:
                    preco = kwhconsumida * 0.7;
                    tconsumo += preco;
                    printf("\nvalor a pagar:%f", preco);
                    break;
                case 0:
                    break;
            }

            printf("\ndigite o numero do consumidor ");
            printf("\ndigite 0 para encerrar:");
            scanf("%d", &nconsumidor);
            printf("\ndigite quantos kwh foi consumido durante um mes:");
            scanf("%f", &kwhconsumida);
            printf("\ndigite o codigo do consumidor:");
            printf("\n1-residencial");
            printf("\n2-comercial");
            printf("\n3-industrial");
            scanf("%d", &codigo);

        }

    printf("\ntotal de consumo para os tres tipos de consumidor:%f",tconsumo);
    mediaconsumo=mediaconsumo/contagem;
    printf("\nmedia de consumo dos tipos 1 e 2:%f",mediaconsumo);


    return 0;

}

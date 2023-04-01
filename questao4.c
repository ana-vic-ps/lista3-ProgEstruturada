#include <stdio.h>

/* Questão 4 - Faça um programa que armazene a idade de até 5 pessoas em um vetor, apresente a média de todas as
idades informadas e exiba as idades maiores que 18 anos. */

int main()
{

    int qtdIdades;
    float media, soma;

    printf("Quantas idades deseja armazenar (máximo de 5 idades)? ");
    scanf("%d", &qtdIdades);

    if (qtdIdades > 5)
    {
        printf("Quantidade de idades superior ao esperado. Tente novamente.");
    }
    else
    {

        int idades[qtdIdades];

        for (int i = 0; i < qtdIdades; i++)
        {

            printf("\nDigite uma idade: ");
            scanf("%d", &idades[i]);
            soma += idades[i];

            media = soma / qtdIdades;
        }

        printf("\nMédia das idades informadas: %0.0f", media);

        /* printf("\nAs idades maiores que 18 anos sao: "); */

        for (int i = 0; i < qtdIdades; i++)
        {
            if (idades[i] > 18)
            {
                printf("\n\n Idade maior que 18: %d ", idades[i]);
            }
        }
    }
}

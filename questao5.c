#include <stdio.h>

/* Questão 5 - Faça um programa que solicite números ao usuário até que a soma de todos os números informados pelo
usuário seja pelo menos 30, utilizando a estruttura de repetição while. */

int main()
{

    float n, soma;


    printf("ATÉ QUE A SOMA DOS NÚMEROS DIGITADOS SEJA 30\n\n");
    while (soma < 30)
    {
        printf("Digite um número: ");
        scanf("%f", &n);
        soma += n;
    }

    printf("\nSoma dos números digitados: %0.0f", soma);
}
#include <stdio.h>

/* Questão 3 - Faça um programa que receba como dado de entrada um numero inteiro e imprima na tela os números
do valor digitado até 0(Zero) em ordem descrecente, utilizando um laço de FOR. */

int main()
{

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("\nOrdem decrescente: ");

    for (n > 0; n >= 0; n--)
    {

        printf(" %d ", n);
    }
}
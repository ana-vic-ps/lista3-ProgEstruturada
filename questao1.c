#include <stdio.h>

/* Questão 1 - Faça um programa em C, que faça a contagem progressiva e regressiva no mesmo laço de FOR. */

int main()
{

    for (int i = 0, j = 5; i <= 5, j >= 0; i++, j--)
    {

        printf(" \n %d \t\t  \t %d \n ", i, j);
    }
}

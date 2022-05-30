// 8. A solução abaixo está correta para classificar um número como par e menor que 100, ou
// par e maior ou igual a 100, etc, como no exemplo visto em aula?

#include <stdio.h>
int main()
{
    int a;

    printf("Digite um número inteiro:");
    scanf("%d", &a);

    if ((a % 2 == 0) && (a < 100))
        printf("O número é par e menor que 100\n");

    else if (a >= 100)
        printf("O número é par e maior ou igual a 100\n");

    if ((a % 2 != 0) && (a < 100))
        printf("O número é ímpar e menor que 100\n");

    else if (a >= 100)
        printf("O número é ímpar e maior que 100\n");
}

// ERRADO, pois faltou definir:
// else if (a >= 100) que também precisa ser par && (a % 2 == 0);
// else if (a >= 100) que também precisa ser ímpar && (a % 2 != 0);
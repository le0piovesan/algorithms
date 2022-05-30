#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    //Criando duas variaveis inteiras
    int a;
    int b;

    //Escolhendo o valor para A e B
    printf("\nDigite um valor positivo menor que 10000 para a: \n");
    scanf("%d", &a);

    printf("\nDigite um valor positivo menor que 10000 para b: \n");
    scanf("%d", &b);

    // Criando o vetor.
    int vetA[5] = {};
    int vetB[5] = {};
    int vetSoma[5] = {};

    //Populando o vetor
    for (int i = 0; i < 5; i++)
    {
        vetA[i] = a % 10;
        a = a / 10;

        vetB[i] = b % 10;
        b = b / 10;
    }

    //Se a soma ultrapassar 10, subtraia 10 do resultado e some 1 a proxima posicao
    for (int i = 0; i < 5; i++)
    {
        if (vetA[i] + vetB[i] > 10)
        {
            vetSoma[i] = vetA[i] + vetB[i] - 10;

            vetA[i + 1] += 1;
        }
        else
        {
            vetSoma[i] = vetA[i] + vetB[i];
        }
    }

    //Imprimindo os vetores
    printf("\nVetor a: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", vetA[i]);
    }
    printf("\n--------------------------\n");

    printf("Vetor b: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", vetB[i]);
    }
    printf("\n--------------------------\n");

    printf("Soma vertor a + b: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", vetSoma[i]);
    }

    return 0;
}
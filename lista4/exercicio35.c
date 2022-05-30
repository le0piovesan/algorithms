
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    printf("\nDigite um valor para a: \n");
    scanf("%d", &a);

    int b;
    printf("\nDigite um valor para b: \n");
    scanf("%d", &b);

    int vetA[5] = {};
    int vetB[5] = {};
    int vetTotal[5] = {};

    for (int i = 0; i < 5; i++)
    {
        vetA[i] = a % 10;
        a = a / 10;

        vetB[i] = b % 10;
        b = b / 10;
    }

    for (int i = 0; i < 5; i++)
    {
        if (vetA[i] + vetB[i] > 10)
        {
            vetTotal[i] = vetA[i] + vetB[i] - 10;

            vetA[i + 1] += 1;
        }
        else
        {
            vetTotal[i] = vetA[i] + vetB[i];
        }
    }

    printf("\nVetor a: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", vetA[i]);
    }

    printf("Vetor b: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", vetB[i]);
    }

    printf("Soma a + b: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", vetTotal[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[11] = {};

    printf("\nDigite 11 numeros: \n");

    for (int i = 0; i < 11; i++)
    {
        printf("Digite um numero para vetor:\n");
        scanf("%d", &vet[i]);
    }

    int aux;
    int i = 0;

    while (i < 6)
    {
        for (int x = -1; x < i; x++)
        {

            if (vet[i] < vet[x])
            {

                aux = vet[x];

                vet[x] = vet[i];

                vet[i] = aux;
            }
        }

        i++;
    }

    int y = 6;
    while (y < 11)
    {
        for (int x = 5; x < y; x++)
        {

            if (vet[y] > vet[x])
            {

                aux = vet[x];

                vet[x] = vet[y];

                vet[y] = aux;
            }
        }

        y++;
    }

    printf("\nVetor: \n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int vet[5], min, max;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    max = vet[0];
    min = vet[0];

    for (int x = 0; x < 5; x++)
    {
        if (vet[x] > max)
        {
            max = vet[x];
        }

        if (vet[x] < min)
        {
            min = vet[x];
        }
    }

    printf("\n--------------\n");

    printf("%d\n", vet[0]);
    printf("%d\n", vet[1]);
    printf("%d\n", vet[2]);
    printf("%d\n", vet[3]);
    printf("%d\n", vet[4]);

    printf("\nMaior: %d\n", max);
    printf("\nMenor: %d\n", min);

    return 0;
}
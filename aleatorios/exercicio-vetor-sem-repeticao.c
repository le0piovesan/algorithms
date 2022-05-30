#include <stdio.h>

int main()
{

    int vet[8];

    printf("Entre com 8 numeros para o vetor: \n");

    for (int i = 0; i < 8; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);

        for (int x = 0; x <= i - 1; x++)
        {
            if (vet[i] == vet[x])
            {
                printf("Valor %d ja esta no vetor, digite outro numero: \n", vet[i]);
                i -= 1;
            }
        }
    }

    for (int y = 0; y < 8; y++)
    {
        printf("%d, ", vet[y]);
    }
}
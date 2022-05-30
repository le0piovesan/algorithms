#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];

    // preenchendo os numeros do vetor.
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i++)
    {

        for (int j = i + 1; j < 10; j++)
        {
            // verifica se os numeros sao iguais.
            if (vet[i] == vet[j])
            {
                printf("%d ", vet[i]);
            }
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[20];
    int contadora = 0;

    // preenchendo os lugares do vetor.
    for (int i = 0; i < 20; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        contadora = 0;
        // verificar quantos numeros tem repetidos.
        for (int j = 0; j < i; j++)
        {
            if (vet[i] == vet[j])
            {
                contadora++;
                break;
            }
        }
        // Mostra os numeros digitados nem os repetidos.
        if (contadora == 0)
        {
            printf("%d ", vet[i]);
        }
    }

    return 0;
}

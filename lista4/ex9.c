#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[6];
    int i;

    // preencendo os lugares dos vetores.
    for (i = 0; i < 6; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    // inverte o vetor.
    for (i = 5; i >= 0; i--)
    {
        // verifica se e par.
        if (vet[i] % 2 == 0)
            printf("%d ", vet[i]);
    }

    return 0;
}

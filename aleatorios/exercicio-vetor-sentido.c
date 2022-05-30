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

    //imprimir o vetor no sentido ->
    printf("\nVET[->]: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vet[i]);
    }

    //imprimir o vetor no sentido <-
    printf("\nVET[->]: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", vet[i]);
    }

    printf("\n--------------\n");

    return 0;
}
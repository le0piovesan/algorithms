#include <stdio.h>
#include <stdlib.h>


int main()
{

    // Criando o vetor.
    int vet[10] = {};

    printf("\nInforme 10 numeros para o vetor: \n");

    // Populando o vetor.
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero para vetor na posicao[%d]:\n", i + 1);
        scanf("%d", &vet[i]);
    }

    int aux;
    int i = 0;

    while (i < 10)
    {
        for (int j = -1; j < i; j++)
        {
            //Caso posicao atual seja menor que a anterior
            if (vet[i] < vet[j])
            {
                //Reorganiza o vetor de forma ordenada
                //variavel auxiliar guarda o valor maior
                aux = vet[j];
                //valor maior passa a receber o menor
                vet[j] = vet[i];
                //valor atual que era menor passa a receber o maior
                vet[i] = aux;
            }
        }

        i++;
    }

    //Mostrando o vetor:
    printf("\nVetor: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}
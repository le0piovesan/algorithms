#include <stdio.h>
#include <stdlib.h>



int main()
{

    // Criando o vetor.
    int vet[11] = {};

    printf("\nInforme 11 numeros para o vetor: \n");

    // Populando o vetor.
    for (int i = 0; i < 11; i++)
    {
        printf("Digite um numero para vetor na posicao[%d]:\n", i + 1);
        scanf("%d", &vet[i]);
    }

    int aux;
    int i = 0;

    while (i < 6)
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

    int k = 6;
    while (k < 11)
    {
        for (int j = 5; j < k; j++)
        {
            //Caso posicao atual seja maior que a anterior
            if (vet[k] > vet[j])
            {
                //Reorganiza o vetor de forma ordenada
                //variavel auxiliar guarda o valor menor
                aux = vet[j];
                //valor menor passa a receber o maior
                vet[j] = vet[k];
                //valor atual que era maior passa a receber o menor
                vet[k] = aux;
            }
        }

        k++;
    }

    //Mostrando o vetor:
    printf("\nVetor: \n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}
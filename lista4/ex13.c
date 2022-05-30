#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];
    int maior, menor;
    int maiorP, menorP;
    // adicionando os numeros no vetor.
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        if (i == 0)
        {
            maior = vet[i];
            menor = vet[i];
            maiorP = i;
            menorP = i;
            // verificando qual e o maior numero e onde ele se encontra.
        }
        else if (vet[i] > maior)
        {
            maior = vet[i];
            maiorP = i;
            // verificando qual e o menor numero e onde ele se encontra.
        }
        else if (vet[i] < menor)
        {
            menor = vet[i];
            menorP = i;
        }
    }
    // mostrando onde est�o o maior e o menor numero.
    printf("\nA posicao do maior numero e: %d e a posicao do menor numero e: %d\n", maiorP, menorP);

    return 0;
}

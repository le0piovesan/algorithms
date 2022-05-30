#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];
    int maior, menor;
    float media;
    float acumuladora = 0;

    // passando os numeros no vetor.
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
        // acumulando os numeros passados pelo usuario.
        acumuladora = acumuladora + vet[i];
        // verificando o maior numero do vetor.
        if (vet[i] > maior)
        {
            maior = vet[i]; // salvando o maior numero.
                            // verificando o menor numero do vetor.
        }
        else if (vet[i] < menor)
        {
            menor = vet[i]; // salvando o menor numero.
        }
    }
    media = acumuladora / 5; // calculando a media dos numeros passados no vetor.
                             // mostrando os resultados.
    printf("\nO menor numero e: %d o maior e: %d e a media e: %.2f\n", menor, maior, media);

    return 0;
}

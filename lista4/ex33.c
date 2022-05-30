#include <stdio.h>
#include <stdlib.h>


int main()
{

    // Criando o vetor.
    int vet[15] = {};

    printf("\nInforme numeros nao repetidos para os vetores: \n");

    // Populando o vetor.
    for (int i = 0; i < 15; i++)
    {
        printf("Digite um numero para vetor[%d]:\n", i + 1);
        scanf("%d", &vet[i]);
    }

    //Mostrando o vetor:
    printf("\nVetor: \n");
    for (int i = 0; i < 15; i++)
    {
        //Caso tenha algum valor igual a zero, elimina a posição
        if (vet[i] != 0)
            //Imprime somente os valores diferentes de zero
            printf("%d ", vet[i]);
    }

    return 0;
}
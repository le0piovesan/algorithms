#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Criando o vetor.
    int vet[10] = {};
    // Populando o vetor.
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero:\n");
        scanf("%i", &vet[i]);
    }
    //Percorrendo o vetor.
    for (int i = 0; i < 10; i++)
    {
        //Verificando se eh um numero negativo.
        if (vet[i] < 0)
        {
            // atribuindo zero.
            vet[i] = 0;
        }
    }
    //Mostrando o vetor
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", vet[i]);
    }

    return 0;
}

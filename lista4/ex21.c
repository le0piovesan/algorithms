#include <stdio.h>
#include <stdlib.h>


int main()
{
    // criando os vetores solicitados
    int vetA[10] = {};
    int vetB[10] = {};
    int vetC[10] = {};

    printf("Vetor A \n");
    //populando o vetor A
    for(int i = 0; i < 10; i++){
        printf(" Digite um numero inteiro: \n");
        scanf("%i", &vetA[i]);
    }

    printf("Vetor B \n");
    //populando o vetor B
    for(int i = 0; i < 10; i++){
        printf(" Digite um numero inteiro: \n");
        scanf("%i", &vetB[i]);
    }
    // realizando o calculo solicitado para o vetor C
    for(int i = 0; i < 10; i++){
        vetC[i] = vetA[i] - vetB[i];
    }
    //imprimindo os tres vetores
    for(int i = 0; i < 10; i++){
        printf("%i - %i = %i\n", vetA[i], vetB[i], vetC[i]);
    }

    return 0;
}

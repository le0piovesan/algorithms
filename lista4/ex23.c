#include <stdio.h>
#include <stdlib.h>



int main()
{
    // criando os vetores
    float vet1[5] = {};
    float vet2[5] = {};

    // populando o vetor 1
    printf("Vetor1:\n");
    for(int i = 0; i < 5; i++){
        printf("Digite um numero:\n");
        scanf("%f",&vet1[i]);
    }
    // populando o vetor 2
    printf("Vetor2:\n");
    for(int i = 0; i < 5; i++){
        printf("Digite um numero:\n");
        scanf("%f",&vet2[i]);
    }

    float somatoria = 0;
    //realizando o calculo do produto escalar
    for(int i = 0; i < 5; i++){
       somatoria = somatoria + (vet1[i] * vet2[i]);

    }
    //imprimindo a informa��o solicitada
    printf("produto escalar: %f\n", somatoria);

    return 0;
}

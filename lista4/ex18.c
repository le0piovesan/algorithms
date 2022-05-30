#include <stdio.h>
#include <stdlib.h>

int main()
{
    // criando o vetor.
    int vet[10] = {};
    // percorrendo e lendo o vetor
    for(int i = 0; i < 10; i++){
        printf("Digite um numero para a posicao %i: \n", i);
        scanf("%i", &vet[i]);
    }

    int x, contador = 0;

    printf("Digite um numero: \n");
    scanf("%i", &x);

    for (int i = 0; i < 10; i++){
        // verificando se eh multiplo de x
        if(vet[i] % x == 0){
            printf(" %i Eh multiplo \n", vet[i]);
            contador ++;
        }
    }
    // apresentando as informa��es solicitadas
    printf(" Teve %i multiplos de %i ", contador, x);

    return 0;
}

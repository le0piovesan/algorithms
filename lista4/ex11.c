#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int acumuladora1 = 0;
    int acumuladora = 0;
    int contadora = 0;

    // pedindo para passar 10 numeros.
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
        // comparando o numero dado pelo usuario e verificcando se ele � negativo.
        if (vet[i] < 0)
        {
            acumuladora1 += vet[i]; // acumulando quantos numeros negativos tem nos numeros passados pelo usuario.
            contadora++;            // contando a quantidade de numeros negativos.
                                    // comparando o numero dado pelo usuario e verificando se ele � positivo.
        }
        else if (vet[i] > 0)
        {
            acumuladora += vet[i]; // acumulando os numeros positivos passados pelo usuario.
        }
    }
    // mostrando o resultado.
    printf("\nOs numeros negativos sao: %d e a soma dos numeros negativos sao: %d e dos positivos sao: %d\n", contadora, acumuladora1, acumuladora);

    return 0;
}

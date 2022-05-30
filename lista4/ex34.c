#include <stdio.h>
#include <stdlib.h>


int main()
{

    // Criando o vetor.
    int vet[10] = {};
    int repetido;
    printf("\nInforme numeros nao repetidos para os vetores: \n");

    // Populando o vetor.
    int i = 0;
    while (i < 10)
    {
        printf("Digite um numero para vetor[%d]:\n", i + 1);
        scanf("%d", &vet[i]);
        //Verifica se o numero digitado ja existe dentro do vetor
        for (int j = -1; j < i; j++)
        {
            //Caso exista conta como repetido
            if (vet[i] == vet[j])
            {
                repetido++;
            }
        }

        i++;
        //Caso seja repetido entra na condicao
        if (repetido > 0)
        {
            printf("Valor ja existe no vetor, digite outro numero para posicao[%d]:\n", i);
            //Decrementa i para digitar outro valor na mesma posicao
            i--;
            //Zera a variavel indicadora de repeticao
            repetido = 0;
        }
    }

    //Mostrando o vetor:
    printf("\nVetor: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}
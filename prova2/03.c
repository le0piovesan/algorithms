
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Criando o vetor.
    int vet[10] = {};

    printf("\nInforme valores para o vetor: \n");

    // Populando o vetor.
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero para vetor[%d]:\n", i + 1);
        scanf("%d", &vet[i]);
    }

    //Mostrando o vetor:
    printf("\n Maior elemento do vetor: ");
    //declarado variaveis auxiliares
    int atual, maior;
    for (int i = 0; i < 10; i++)
    {
        for (int x = 0; x < 10; x++)
        {
            //caso o valor atual seja maior que todo o restante entra na condição
            if (vet[i] > vet[x])
            {
                //o valor passa a ser o atual
                atual = vet[i];
            }
        }

        //caso o valor atual do momento do laço seja o maior, entra na condição onde fica armazenado
        if (maior < atual)
        {
            //guarda o maior
            maior = atual;
        }
        //zera o contador
        atual = 0;
    }
    //faz a impressão do maior número
    printf("%d ", maior);

    //Faz o camino inverso do anterior
    printf("\n Menor elemento do vetor: ");
    //declarado a variavel menor
    int menor;
    for (int i = 0; i < 10; i++)
    {
        for (int x = 0; x < 10; x++)
        {
            //caso o valor atual seja menor que todo o restante entra na condição
            if (vet[i] < vet[x])
            {
                //o valor passa a ser o atual
                atual = vet[i];
            }
        }
        //caso o valor atual do momento do laço seja o menor, entra na condição onde fica armazenado
        if (menor > atual)
        {
            //guarda o menor
            menor = atual;
        }
    }
    //faz a impressao do menor
    printf("%d ", menor);

    printf("\n Numero de elementos pares no vetor: ");
    int par;
    for (int i = 0; i < 10; i++)
    {
        //caso o vetor modulo de 2 resta 0, ou seja a divisao inteira resta 0 consequentemente o numero é par
        if (vet[i] % 2 == 0)
        {
            //incrementa
            par++;
        }
    }
    //imprime os pares
    printf("%d ", par);

    printf("\n Numero de elementos impares no vetor: ");
    int impar;
    for (int i = 0; i < 10; i++)
    {
        //caso o vetor modulo de 2 resta 0, ou seja a divisao inteira diferente 0 consequentemente o numero é impar

        if (vet[i] % 2 != 0)
        {
            //incrementa
            impar++;
        }
    }
    //imprime os impares
    printf("%d ", impar);

    printf("\n Media dos elementos do vetor: ");
    float media;
    for (int i = 0; i < 10; i++)
    {
        //para descobrir a media soma todos os valores e armazena na variavel media
        media += vet[i];
    }
    //por fim antes de imprimir divide a media por 10, numero total dos valores
    printf("%f ", media / 10);
}
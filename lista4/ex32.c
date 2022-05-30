#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Criando o vetor x.
    int x[5] = {};

    // Criando o vetor y.
    int y[5] = {};

    printf("\nInforme numeros nao repetidos para os vetores: \n");

    // Populando o vetor x.
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero para vetor x[%d]:\n", i + 1);
        scanf("%d", &x[i]);
    }

    // Populando o vetor y.
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero para vetor y[%d]:\n", i + 1);
        scanf("%d", &y[i]);
    }

    printf("\n------------------------------------------------------\n");

    //Mostrando os vetores:
    printf("\nVetor x: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }

    printf("\nVetor y: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", y[i]);
    }

    printf("\n------------------------------------------------------\n");

    // • Soma entre x e y: soma de cada elemento de x com o elemento da mesma posição ̃
    // em y.
    printf("\nSoma de cada elemento na mesma posicao entre x e y: \n");

    //Percorrendo o vetor.
    for (int i = 0; i < 5; i++)
    {
        //Realizando a soma
        printf("%d ", x[i] + y[i]);
    }

    printf("\n------------------------------------------------------\n");

    // • Produto entre x e y: multiplicacão de cada elemento de x com o elemento da mesma
    // posicão em y.

    printf("\nProduto de cada elemento na mesma posicao entre x e y: \n");

    //Percorrendo o vetor.
    for (int i = 0; i < 5; i++)
    {
        //Realizando a multiplicacao
        printf("%d ", x[i] * y[i]);
    }

    printf("\n------------------------------------------------------\n");

    // • Diferença entre x e y: todos os elementos de x que nao existam em y.
    printf("\nDiferenca entre x e y: todos os elementos de x que nao existam em y: \n");
    int igual;
    //Percorrendo o vetor.
    for (int i = 0; i < 5; i++)
    {
        for (int h = 0; h < 5; h++)
        {
            //Verificando cada valor
            if (x[i] == y[h])
            {
                igual++;
            }
        }
        //Se não tiver nenhum igual imprime
        if (igual == 0)
        {
            printf("%d ", x[i]);
        }
        //zera o contador de iguais
        igual = 0;
    }

    printf("\n------------------------------------------------------\n");

    // • Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
    printf("\nInterseccao entre x e y: apenas os elementos que aparecem nos dois vetores: \n");
    //Percorrendo o vetor.
    for (int i = 0; i < 5; i++)
    {
        for (int h = 0; h < 5; h++)
        {
            //Verificando cada valor
            if (x[i] == y[h])
            {
                igual++;
            }
        }
        //Se tiver mais que um igual imprime
        if (igual > 0)
        {
            printf("%d ", x[i]);
        }
        //zera o contador de iguais
        igual = 0;
    }

    printf("\n------------------------------------------------------\n");

    // • Uniao entre x e y: todos os elementos de x, e todos os elementos de y que nao ̃
    //estao em x.
    printf("\nUniao entre x e y: todos os elementos de x, e todos os elementos de y que nao estao em x: \n");
    //criado vetor da uniao
    int vetAux[10] = {};
    //inicializado um contador para o indice do vetor
    int contador = 4;
    //Preencher o vetor com todos os valores de x
    for (int xx = 0; xx < 5; xx++)
    {
        vetAux[xx] = x[xx];
    }

    //Preencher com os valores de y que nao estao em x
    for (int i = 0; i < 5; i++)
    {
        //Verifica quais valores estao em y e nao em x
        for (int h = 0; h < 5; h++)
        {

            if (y[i] == x[h])
            {
                igual++;
            }
        }

        //se nao tiver um valor de y em x ele entra nessa condicao

        if (igual == 0)
        {
            contador++;
            vetAux[contador] = y[i];
        }
        //zera o contador de iguais
        igual = 0;
    }

    //Mostrando o vetor:
    printf("\nVetor uniao x e y: \n");

    for (int i = 0; i <= contador; i++)
    {
        printf("%d ", vetAux[i]);
    }

    return 0;
}

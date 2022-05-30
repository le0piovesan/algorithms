
#include <stdio.h>
#include <stdlib.h>

int preencherMatriz(int matriz[4][4])
{
    //declarado variaveis linha e coluna
    int lin, col;
    //primeiro laco preenche a linha
    for (lin = 0; lin < 4; lin++)
    {
        //segundo laço preenche a coluna
        for (col = 0; col < 4; col++)
        {
            printf("Digite valor para matriz na posicao[%d] [%d]: ", lin, col);
            //scanf recebe e popula a matriz para cada posicao
            scanf("%d", &matriz[lin][col]);
        }
    }
}

int matrizSimetrica(int matriz[4][4])
{
    //declarado variaveis de linha, coluna, matriz1 referente a matriz original e matriz2 referente a transposta
    int lin, col, matriz1[4][4], matriz2[4][4];

    printf("\nMatriz Original:\n");
    //mesmo processo de laço dentro de laço para imprimir a matriz
    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            //matriz1 faz uma copia da matriz original
            matriz1[lin][col] = matriz[lin][col];
            //e é impressa logo em seguida
            printf("%2d ", matriz1[lin][col]);
        }
        printf("\n");
    }

    printf("\n---------------------\n");

    printf("\nMatriz Transposta:\n");
    //para a matriz transposta apenas inverti linha com coluna
    for (col = 0; col < 4; col++)
    {
        for (lin = 0; lin < 4; lin++)
        {
            //matriz2 faz uma copia da matriz inversa
            matriz2[lin][col] = matriz[lin][col];
            //e é impressa logo em seguida
            printf("%2d ", matriz2[lin][col]);
        }
        printf("\n");
    }

    printf("\n---------------------\n");

    //criado variavel contadora que verifica caso a matriz nao seja simetrica em alguma ocorrencia
    int naoSimetrica = 0;
    //é feito novamente o laço
    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            //caso dentro do laço ocorra de algum valor de linha|coluna nao ser igual a correspondente coluna|linha
            if (matriz1[lin][col] != matriz2[col][lin])
            {
                //é incrementado a variavel contadora sinalizando que nao sao simetricas
                naoSimetrica++;
            }
        }
    }
    //caso a variavel contadora seja maior que 0, é impresso que nao é simetrico
    if (naoSimetrica > 0)
        printf("NAO SIMETRICA");
    //caso todos os valores sejam correspondentes, por fim é simétrica
    else
        printf("SIMETRICA");

    printf("\n---------------------\n");
}

int main()
{
    //declarado matriz de tamanho 4x4
    int matriz[4][4];

    //chama a funcao que vai preencher a matriz passando de parametro a matriz criada
    preencherMatriz(matriz);

    //chama a funcao que verifica a transposta e faz a comparacao para ver se é simetrica ou não
    matrizSimetrica(matriz);

    return 0;
}

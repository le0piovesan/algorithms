#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    //Informa um valor para n que é o numero de linhas do triangulo
    printf("\nInforme um valor para o numero de linhas do triangulo de Pascal: \n");
    scanf("%d", &n);

    printf("\n=======================\n");

    //Declara a matriz
    int matriz[100][100] = {};
    //Inicia o primeiro valor da matriz como 1
    matriz[0][0] = 1;

    //Feito um laço para linhas
    for (int linha = 1; linha <= n; linha++)
    {
        //Feito um laço para colunas
        for (int coluna = 1; coluna <= n; coluna++)
        {
            //Condiçao que da o formato da matriz
            if (matriz[linha] >= matriz[coluna])
            {
                //Pega o valor da linha anterior + mesma coluna e o valor da linha anterior + 1 coluna anterior e faz a soma
                matriz[linha][coluna] = matriz[linha - 1][coluna] + matriz[linha - 1][coluna - 1];
                printf("%d ", matriz[linha][coluna]);
            }
        }
        printf("\n");
    }

    // [1, 1] [1, 2] [1, 3] [1, 4] [1, 5]
    // [2, 1] [2, 2] [2, 3] [2, 4] [2, 5]
    // [3, 1] [3, 2] [3, 3] [3, 4] [3, 5]
    // [4, 1] [4, 2] [4, 3] [4, 4] [4, 5]
    // [5, 1] [5, 2] [5, 3] [5, 4] [5, 5]

    return 0;
}
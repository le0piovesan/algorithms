#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N;
    printf("Informe um valor para N (no maximo 50): ");
    scanf("%d", &N);

    if (N <= 50)
    {
        for (int linha = 1; linha <= N; linha++)
        {

            for (int coluna = 1; coluna <= N; coluna++)
            {
                if (linha == coluna)
                    printf("%d", linha);

                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Digite um valor abaixo de 50, rode o programa novamente");
    }

    return 0;
}

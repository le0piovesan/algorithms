#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N;
    printf("Informe um valor para N: ");
    scanf("%d", &N);

    for (int linha = 1; linha <= N; linha++)
    {

        for (int coluna = 1; coluna <= N; coluna++)
        {
            if (linha == coluna)
                printf("+ ");

            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}

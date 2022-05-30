#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int atual, loop, contadora, anterior;

    printf("Digite um valor: ");
    scanf("%d", &anterior);

    contadora = 0;
    loop = 1;

    do
    {
        printf("\nDigite um valor para a sequencia: \n");
        printf("Caso queira encerrar o programa digite 0 \n");
        scanf("%d", &atual);

        if (atual > anterior)
        {
            anterior = atual;
        }

        if (atual < anterior && atual != 0)
        {
            contadora++;
            anterior = atual;
        }

        if (atual == 0)
        {
            loop = 0;
            break;
        }

    } while (loop == 1);

    if (contadora > 0)
    {
        printf("\nA sequencia nao esta ordenada\n");
    }

    else
    {
        printf("\nA sequencia esta ordenada\n");
    }

    return 0;
}
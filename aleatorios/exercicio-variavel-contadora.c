#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int atual, ordenado, contadora, primeiro;

    printf("Digite um valor: ");
    scanf("%d", &primeiro);

    ordenado = 1;
    contadora = 0;

    do
    {
        printf("Digite um valor: ");
        scanf("%d", &atual);

        if (atual > primeiro)
        {
            contadora++;
        }

        if (atual < 0)
        {
            printf("Existem %d numeros maiores que %d", contadora, primeiro);
            ordenado = 0;
            break;
        }

    } while (ordenado == 1);

    return 0;
}
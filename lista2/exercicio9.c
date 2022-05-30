#include <stdio.h>
#include <math.h>

int main()
{

    int n, eh_primo;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = n;; i++)
    {
        eh_primo = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                eh_primo = 0;
        }

        if (eh_primo == 1)
        {
            printf("Proximo primo a direita: %d\n", i);
            break;
        }
    }

    for (int i = n; i > 0; i--)
    {
        eh_primo = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                eh_primo = 0;
        }

        if (eh_primo == 1)
        {
            printf("Proximo primo a esquerda: %d\n", i);
            break;
        }
    }

    return 0;
}
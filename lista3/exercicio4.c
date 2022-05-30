#include <stdio.h>

int menorPrimo(int n);

int main()
{

    int n, getMenorPrimo;

    printf("Digite um valor para descobrir o proximo primo: \n");
    scanf("%d", &n);

    getMenorPrimo = menorPrimo(n);

    if (getMenorPrimo != n)
        printf("\nO numero primo anterior a %d = %d\n", n, getMenorPrimo);
    else
        printf("\nO numero %d digitado eh primo\n", getMenorPrimo);

    return 0;
}

int menorPrimo(int n)
{
    int eh_primo;

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
            return i;
            break;
        }
    }
}
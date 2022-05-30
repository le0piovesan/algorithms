#include <stdio.h>
#include <math.h>

int main()
{

    int m, n, aux;

    printf("\nDigite um valor maior que 0 para m: \n");
    scanf("%d", &m);

    printf("\nDigite um valor maior que 0 para n: \n");
    scanf("%d", &n);

    aux = m % n;

    while (aux != 0)
    {
        m = n;
        n = aux;
        aux = m % n;
    }

    printf("\nmdc = %d", n);

    return 0;
}
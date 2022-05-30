#include <stdio.h>
#include <math.h>

int teste(int n);

int main()
{

    int n;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);

    printf("O menor valor para B seria = %d Quando b^k = %d\n", teste(n), n);
    teste(n);

    return 0;
}

int teste(int n)
{
    int b, k;

    for (int b = 1; b < n; b++)
    {
        for (int k = n; k > 0; k--)
        {
            if (n == pow(b, k))
            {
                return b;
            }
        }
    }
}
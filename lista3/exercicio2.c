#include <stdio.h>

int fatorial(int n);

int main()
{

    int n;

    printf("Digite um valor para descobrir seu fatorial: \n");
    scanf("%d", &n);

    printf("Fatorial de %d! = %d\n", n, fatorial(n));

    return 0;
}

int fatorial(int n)
{
    int result = 1;
    int aux = n;

    if (n <= 0)
    {
        return 1;
    }

    else
    {
        for (int x = n; x >= 1; x--)
        {

            result = result * aux;

            aux--;
        }
        return result;
    }
}